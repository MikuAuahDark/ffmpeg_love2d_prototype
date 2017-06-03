-- Aquashine loader. Base layer of Live Simulator: 2
-- Part of Live Simulator: 2

--[[---------------------------------------------------------------------------
-- Copyright (c) 2038 Dark Energy Processor Corporation
-- 
-- Permission is hereby granted, free of charge, to any person obtaining a copy
-- of this software and associated documentation files (the "Software"), to
-- deal in the Software without restriction, including without limitation the
-- rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
-- sell copies of the Software, and to permit persons to whom the Software is
-- furnished to do so, subject to the following conditions:
-- 
-- The above copyright notice and this permission notice shall be included in
-- all copies or substantial portions of the Software.
-- 
-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
-- IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
-- FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
-- IN THE SOFTWARE.
--]]---------------------------------------------------------------------------

-- Some parts were altered because it's unnecessary

local ASArg = ...	-- Must contain entry point lists
local AquaShine = {
	CurrentEntryPoint = nil,
	Arguments = ASArg,
	LogicalScale = {
		ScreenX = ASArg.Width or 960,
		ScreenY = ASArg.Height or 640,
		OffX = 0,
		OffY = 0,
		ScaleOverall = 1
	},
	AlwaysRunUnfocus = false,
	SleepDisabled = false,
	
	-- Cache table. Anything inside this table can be cleared at any time when running under low memory
	CacheTable = setmetatable({}, {__mode = "v"}),
	-- Preload entry points
	PreloadedEntryPoint = {},
	-- Allow entry points to be preloaded?
	-- Disabling entry preloading allows code that changed to be reflected without restarting
	AllowEntryPointPreload = true,
}

local love = require("love")

local ScreenshotThreadCode = [[
local lt = require("love.timer")
local li = require("love.image")
local arg = ...
local name = string.format("screenshots/screenshot_%s_%d.png",
	os.date("%Y_%m_%d_%H_%M_%S"),
	math.floor((lt.getTime() % 1) * 1000)
)

require("debug").getregistry().ImageData.encode(arg, "png", name)
print("Screenshot saved as", name)
]]

----------------------------------
-- AquaShine Utilities Function --
----------------------------------

--! @brief Calculates touch position to take letterboxing into account
--! @param x Uncalculated X position
--! @param y Uncalculated Y position
--! @returns Calculated X and Y positions (2 values)
function AquaShine.CalculateTouchPosition(x, y)
	return
		(x - AquaShine.LogicalScale.OffX) / AquaShine.LogicalScale.ScaleOverall,
		(y - AquaShine.LogicalScale.OffY) / AquaShine.LogicalScale.ScaleOverall
end

local mount_target
--! @brief Mount a zip file, relative to DEPLS save directory.
--!        Unmounts previous mounted zip file, so only one zip file
--!        can be mounted.
--! @param path The Zip file path (or nil to clear)
--! @param target The Zip mount point
--! @returns Previous mounted ZIP filename (or nil if no Zip was mounted)
function AquaShine.MountZip(path, target)
	local prev_mount = mount_target
	
	if path ~= nil and mount_target == path then
		return prev_mount
	end
	
	if mount_target then
		love.filesystem.unmount(mount_target)
		mount_target = nil
	end
	
	if path then
		assert(love.filesystem.mount(path, target))
		
		mount_target = path
	end
	
	return prev_mount
end

local config_list = {}
--! @brief Parses configuration passed from command line
--!        Configuration passed via "/<key>[=<value=true>]" <key> is case-insensitive.
--!        If multiple <key> is found, only the first one takes effect.
--! @param argv Argument vector
--! @note This function modifies the `argv` table
function AquaShine.ParseCommandLineConfig(argv)
	if love.filesystem.isFused() == false then
		table.remove(argv, 1)
	end
	
	local pattern = AquaShine.OperatingSystem == "Windows" and "[/|%-](%w+)=?(.*)" or "%-(%w+)=?(.*)"
	local arglen = #arg
	
	for i = arglen, 1, -1 do
		local k, v = arg[i]:match(pattern)
		
		if k and v then
			config_list[k:lower()] = #v == 0 and true or tonumber(v) or v
			table.remove(arg, i)
		end
	end
end

--! @brief Get configuration argument passed from command line
--! @param key The configuration key (case-insensitive)
--! @returns The configuration value or `nil` if it's not set
function AquaShine.GetCommandLineConfig(key)
	return config_list[key:lower()]
end

--! @brief Set configuration
--! @param key The configuration name (case-insensitive)
--! @param val The configuration value
function AquaShine.SaveConfig(key, val)
	local file = assert(love.filesystem.newFile(key:upper()..".txt", "w"))
	
	file:write(tostring(val))
	file:close()
end

local TemporaryEntryPoint
--! @brief Loads entry point
--! @param name The entry point Lua script file
--! @param arg Additional argument to be passed
function AquaShine.LoadEntryPoint(name, arg)
	local scriptdata, title
	
	AquaShine.AlwaysRunUnfocus = true
	AquaShine.SleepDisabled = false
	
	love.window.setDisplaySleepEnabled(true)
	
	if AquaShine.PreloadedEntryPoint[name] then
		scriptdata, title = AquaShine.PreloadedEntryPoint[name]()
	else
		scriptdata, title = assert(love.filesystem.load(name))()
	end
	
	scriptdata.Start(arg or {})
	TemporaryEntryPoint = scriptdata
	
	if title then
		love.window.setTitle(AquaShine.WindowName .. " - "..title)
	else
		love.window.setTitle(AquaShine.WindowName)
	end
end

--! Function used to replace extension on file
local function substitute_extension(file, ext_without_dot)
	return file:sub(1, ((file:find("%.[^%.]*$")) or #file+1)-1).."."..ext_without_dot
end
--! @brief Load audio
--! @param path The audio path
--! @param noorder Force existing extension?
--! @returns Audio handle or `nil` plus error message on failure
function AquaShine.LoadAudio(path, noorder)
	local _, token_image
	
	if not(noorder) then
		local a = AquaShine.LoadAudio(substitute_extension(path, "wav"), true)
		
		if a == nil then
			a = AquaShine.LoadAudio(substitute_extension(path, "ogg"), true)
			
			if a == nil then
				return AquaShine.LoadAudio(substitute_extension(path, "mp3"), true)
			end
		end
		
		return a
	end
	
	_, token_image = pcall(love.sound.newSoundData, path)
	
	if _ == false then return nil, token_image
	else return token_image end
end

--! @brief Creates new image with specificed position from specificed lists of layers
--! @param w Resulted generated image width
--! @param h Resulted generated image height
--! @param layers Lists of love.graphics.* calls in format {love.graphics.*, ...}
--! @param imagedata Returns ImageData instead of Image object?
--! @returns New Image/ImageData object
function AquaShine.ComposeImage(w, h, layers, imagedata)
	local canvas = love.graphics.newCanvas(w, h)
	
	love.graphics.push("all")
	love.graphics.setCanvas(canvas)
	
	for i = 1, #layers do
		table.remove(layers[i], 1)(unpack(layers[i]))
	end
	
	love.graphics.pop()
	
	local id = canvas:newImageData()
	
	if imagedata then
		return id
	else
		return love.graphics.newImage(id)
	end
end

--! @brief Stripes the directory and returns only the filename
function AquaShine.Basename(file)
	local _ = file:reverse()
	return _:sub(1, (_:find("/") or _:find("\\") or #_ + 1) - 1):reverse()
end

--! @brief Determines if runs under slow system (mobile devices)
function AquaShine.IsSlowSystem()
	return not(jit) or AquaShine.OperatingSystem == "Android" or AquaShine.OperatingSystem == "iOS"
end

--! @brief Disable screen sleep
--! @note Should be called only in Start function
function AquaShine.DisableSleep()
	-- tail call
	return love.window.setDisplaySleepEnabled(false)
end

--! @brief Disable pause when loses focus
--! @param disable Always run even when losing focus (true) or not (false)
--! @note Should be called only in Start function
function AquaShine.RunUnfocused(disable)
	AquaShine.AlwaysRunUnfocus = not(not(disable))
end

--! @brief Gets cached data from cache table, or execute function to load and store in cache
--! @param name The cache name
--! @param onfailfunc Function to execute when cache is not found. The return value of the function
--!                   then stored in cache table and returned
--! @param ... additional data passed to `onfailfunc`
function AquaShine.GetCachedData(name, onfailfunc, ...)
	local val = AquaShine.CacheTable[name]
	
	if val == nil then
		val = onfailfunc(...)
		AquaShine.CacheTable[name] = val
	end
	
	return val
end

--! @brief Check if current platform is desktop
--! @returns true if current platform is desktop platform, false oherwise
function AquaShine.IsDesktopSystem()
	return AquaShine.OperatingSystem == "Windows" or AquaShine.OperatingSystem == "Linux" or AquaShine.OperatingSystem == "OS X"
end

----------------------------
-- AquaShine Font Caching --
----------------------------
local FontList = setmetatable({}, {__mode = "v"})

--! @brief Load font
--! @param name The font name
--! @param size The font size
--! @returns Font object or nil on failure
function AquaShine.LoadFont(name, size)
	if not(FontList[name]) then
		FontList[name] = {}
	end
	
	if not(FontList[name][size]) then
		local _, a = pcall(love.graphics.newFont, name, size)
		
		if _ then
			FontList[name][size] = a
		else
			return nil, a
		end
	end
	
	return FontList[name][size]
end

--------------------------------------
-- AquaShine Image Loader & Caching --
--------------------------------------
local LoadedImage = setmetatable({}, {__mode = "v"})

--! @brief Load image without caching
--! @param path The image path
--! @param pngonly Do not load .png.imag file even if one exist
--! @returns Drawable object
--! @note The ShelshaObject texture bank will ALWAYS BE CACHED!.
function AquaShine.LoadImageNoCache(path, pngonly)
	return love.graphics.newImage(path)
end

--! @brief Load image with caching
--! @param ... Paths of images to be loaded
--! @returns Drawable object
function AquaShine.LoadImage(...)
	local out = {...}
	
	for i = 1, #out do
		local path = out[i]
		local img = LoadedImage[path]
		
		if not(img) then
			img = AquaShine.LoadImageNoCache(path)
			LoadedImage[path] = img
		end
		
		out[i] = img
	end
	
	return unpack(out)
end

----------------------------------------------
-- AquaShine Scissor to handle letterboxing --
----------------------------------------------
function AquaShine.SetScissor(x, y, width, height)
	x, y = AquaShine.CalculateTouchPosition(x, y)
	
	love.graphics.setScissor(
		AquaShine.LogicalScale.OffX, AquaShine.LogicalScale.OffY,
		width * AquaShine.LogicalScale.ScaleOverall,
		height * AquaShine.LogicalScale.ScaleOverall
	)
end

function AquaShine.ClearScissor()
	love.graphics.setScissor()
end

------------------------------
-- Other Internal Functions --
------------------------------
function AquaShine.MainLoop()
	local dt
	local font = AquaShine.LoadFont("MTLmr3m.ttf", 14)
	local RenderToCanvasFunc = function()
		local a
		love.graphics.clear()
		
		if AquaShine.CurrentEntryPoint then
			dt = dt * 1000
			AquaShine.CurrentEntryPoint.Update(dt)
			
			love.graphics.push()
			love.graphics.translate(AquaShine.LogicalScale.OffX, AquaShine.LogicalScale.OffY)
			love.graphics.scale(AquaShine.LogicalScale.ScaleOverall)
			AquaShine.CurrentEntryPoint.Draw(dt)
			love.graphics.pop()
			love.graphics.setColor(255, 255, 255)
		else
			love.graphics.setFont(font)
			love.graphics.print("AquaShine loader: No entry point specificed/entry point rejected", 10, 10)
		end
	end
	
	while true do
		-- Switch entry point
		if TemporaryEntryPoint then
			if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.Exit then
				AquaShine.CurrentEntryPoint.Exit()
			end
			
			AquaShine.CurrentEntryPoint = TemporaryEntryPoint
			TemporaryEntryPoint = nil
		end
		
		-- Process events.
		love.event.pump()
		for name, a, b, c, d, e, f in love.event.poll() do
			if name == "quit" then
				if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.Exit then
					AquaShine.CurrentEntryPoint.Exit(true)
				end
				
				return a
			elseif name == "focus" then
				if a == false and not(AquaShine.AlwaysRunUnfocus) then
					love.audio.pause()
					love.window.setDisplaySleepEnabled(true)
					love.handlers[name](a, b, c, d, e, f)
					
					if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.Focus then
						AquaShine.CurrentEntryPoint.Focus(false)
					end
					
					repeat
						name, a, b, c, d, e, f = love.event.wait()
						
						if name then
							love.handlers[name](a, b, c, d, e, f)
						end
						love.timer.step()
					until name == "focus" and a
					
					love.audio.resume()
					
					if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.Focus then
						AquaShine.CurrentEntryPoint.Focus(true)
					end
					
					if AquaShine.SleepDisabled then
						love.window.setDisplaySleepEnabled(false)
					end
				end
			end
			
			love.handlers[name](a, b, c, d, e, f)
		end
		
		-- Update dt, as we'll be passing it to update
		love.timer.step()
		dt = love.timer.getDelta()
		
		if love.graphics.isActive() then
			love.graphics.clear()
			AquaShine.MainCanvas:renderTo(RenderToCanvasFunc)
			love.graphics.draw(AquaShine.MainCanvas)
			love.graphics.present()
		end
	end
end

------------------------------------
-- AquaShine love.* override code --
------------------------------------
function love.run()
	local dt = 0
	
	if love.math then
		love.math.setRandomSeed(os.time())
		math.randomseed(os.time())
	end
 
	love.load(arg)
	
	-- We don't want the first frame's dt to include time taken by love.load.
	love.timer.step()
 
	-- Main loop time.
	AquaShine.MainLoop()
end

local function error_printer(msg, layer)
	print((debug.traceback("Error: " .. tostring(msg), 1+(layer or 1)):gsub("\n[^\n]+$", "")))
end

-- TODO: Optimize error handler
function love.errhand(msg)
	msg = tostring(msg)
	error_printer(msg, 2)
 
	if not love.window or not love.graphics or not love.event then
		return
	end
 
	if not love.graphics.isCreated() or not love.window.isOpen() then
		local success, status = pcall(love.window.setMode, 800, 600)
		if not success or not status then
			return
		end
	end
 
	love.audio.stop()
	love.graphics.reset()
	
	local trace = debug.traceback()
 
	love.graphics.clear(love.graphics.getBackgroundColor())
	love.graphics.origin()
 
	local err = {}
 
	table.insert(err, "AquaShine Error Handler. An error has occured during execution")
	table.insert(err, "Press ESC to exit, Backspace to reload\n")
	table.insert(err, msg.."\n\n")
 
	for l in string.gmatch(trace, "(.-)\n") do
		if not string.match(l, "boot.lua") then
			l = string.gsub(l, "stack traceback:", "Traceback\n")
			table.insert(err, l)
		end
	end
 
	local p = table.concat(err, "\n")
 
	p = string.gsub(p, "\t", "")
	p = string.gsub(p, "%[string \"(.-)\"%]", "%1")
	
	AquaShine.LoadEntryPoint("AquaShineErrorHandler.lua", {p})
	AquaShine.MainLoop()
end

-- Inputs
function love.mousepressed(x, y, button, istouch)
	if istouch == true then return end
	
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.MousePressed then
		x, y = AquaShine.CalculateTouchPosition(x, y)
		AquaShine.CurrentEntryPoint.MousePressed(x, y, button, istouch)
	end
end

function love.mousemoved(x, y, dx, dy, istouch)
	if istouch == true then return end
	
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.MouseMoved then
		x, y = AquaShine.CalculateTouchPosition(x, y)
		AquaShine.CurrentEntryPoint.MouseMoved(x, y, dx, dy, istouch)
	end
end

function love.mousereleased(x, y, button, istouch)
	if istouch == true then return end
	
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.MouseReleased then
		x, y = AquaShine.CalculateTouchPosition(x, y)
		AquaShine.CurrentEntryPoint.MouseReleased(x, y, button, istouch)
	end
end

function love.touchpressed(id, x, y, dx, dy, pressure)
	return love.mousepressed(x, y, 1, id)
end

function love.touchreleased(id, x, y, dx, dy, pressure)
	return love.mousereleased(x, y, 1, id)
end

function love.touchmoved(id, x, y, dx, dy)
	return love.mousemoved(x, y, dx, dy, id)
end

function love.keypressed(key, scancode, repeat_bit)
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.KeyPressed then
		AquaShine.CurrentEntryPoint.KeyPressed(key, scancode, repeat_bit)
	end
end

function love.keyreleased(key, scancode)
	if key == "f12" then
		love.thread.newThread(ScreenshotThreadCode):start(AquaShine.MainCanvas:newImageData())
	end
	
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.KeyReleased then
		AquaShine.CurrentEntryPoint.KeyReleased(key, scancode)
	end
end

-- File/folder drag-drop support
-- Broken in Ubuntu 14.04 atm
function love.filedropped(file)
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.FileDropped then
		AquaShine.CurrentEntryPoint.FileDropped(file)
	end
end

function love.directorydropped(dir)
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.DirectoryDropped then
		AquaShine.CurrentEntryPoint.DirectoryDropped(dir)
	end
end

-- On thread error
function love.threaderror(t, msg)
	assert(false, msg)
end

-- Letterboxing recalculation
function love.resize(w, h)
	local lx, ly = ASArg.Width or 960, ASArg.Height or 640
	AquaShine.LogicalScale.ScreenX, AquaShine.LogicalScale.ScreenY = w, h
	AquaShine.LogicalScale.ScaleOverall = math.min(AquaShine.LogicalScale.ScreenX / lx, AquaShine.LogicalScale.ScreenY / ly)
	AquaShine.LogicalScale.OffX = (AquaShine.LogicalScale.ScreenX - AquaShine.LogicalScale.ScaleOverall * lx) / 2
	AquaShine.LogicalScale.OffY = (AquaShine.LogicalScale.ScreenY - AquaShine.LogicalScale.ScaleOverall * ly) / 2
	
	AquaShine.MainCanvas = love.graphics.newCanvas()
	
	if AquaShine.CurrentEntryPoint and AquaShine.CurrentEntryPoint.Resize then
		AquaShine.CurrentEntryPoint.Resize(w, h)
	end
end

-- When running low memory
love.lowmemory = collectgarbage

-- Initialization
function love.load(arg)
	-- Initialization
	local wx, wy = love.graphics.getDimensions()
	AquaShine.OperatingSystem = love.system.getOS()
	AquaShine.ParseCommandLineConfig(arg)
	love.filesystem.setIdentity(love.filesystem.getIdentity(), false)
	
	-- Flags check
	do
		local force_setmode = false
		local setmode_param = {
			fullscreen = false,
			fullscreentype = "desktop",
			resizable = true,
			vsync = true
		}
		
		if config_list.width then
			force_setmode = true
			wx = config_list.width
		end
		
		if config_list.height then
			force_setmode = true
			wy = config_list.height
		end
		
		if config_list.fullscreen then
			force_setmode = true
			setmode_param.fullscreen = true
			wx, wy = 0, 0
		end
		
		if config_list.novsync then
			force_setmode = true
			setmode_param.vsync = false
		end
		
		if force_setmode then
			love.window.setMode(wx, wy, setmode_param)
			
			if setmode_param.fullscreen then
				wx, wy = love.graphics.getDimensions()
			end
		end
	end
	
	AquaShine.WindowName = love.window.getTitle()
	
	love.resize(wx, wy)
	
	-- Preload entry points
	if AquaShine.AllowEntryPointPreload then
		for n, v in pairs(ASArg.Entries) do
			AquaShine.PreloadedEntryPoint[v[2]] = assert(love.filesystem.load(v[2]))
		end
	end
	
	-- Load entry point
	if arg[1] and ASArg.Entries[arg[1]] and #arg > ASArg.Entries[arg[1]][1] then
		local entry = table.remove(arg, 1)
		
		AquaShine.LoadEntryPoint(ASArg.Entries[entry][2], arg)
	elseif ASArg.DefaultEntry then
		AquaShine.LoadEntryPoint(ASArg.Entries[ASArg.DefaultEntry][2], arg)
	end
end

return AquaShine
