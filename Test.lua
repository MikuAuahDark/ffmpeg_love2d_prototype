local FutureGlasses = require("FutureGlasses")
local ffi = require("ffi")
local Test = {}
local videoobj
local audio

-- Please change
local desiredfile = [[D:/【試聴動画】Aqours 3rdシングル「HAPPY PARTY TRAIN」.mp4]]

function Test.Start()
	
	-- Testing. Hardcoded path atm
	videoobj = FutureGlasses.OpenVideo(desiredfile)
	videoobj:Play()
	
	-- If you don't need audio, simply comment 7 lines below
	--[[
	local x = io.popen("ffmpeg -i \""..desiredfile.."\" -vn -c:a pcm_s16le -f s16le -ar 44100 -ac 2 - 2> nul", "rb")
	local y = x:read("*a")
	x:close()
	audio = love.sound.newSoundData(#y / 2, 44100, 16, 2)
	ffi.copy(audio:getPointer(), y)
	audio = love.audio.newSource(audio)
	audio:play()
	]]
end

function Test.Update(deltaT)
	-- In AquaShine, deltaT is in milliseconds
	FutureGlasses.Update(deltaT / 1000)
end

function Test.Draw()
	local FPS = love.timer.getFPS()
	
	love.graphics.setColor(255, 255, 255)
	love.graphics.draw(videoobj.Image, 0, 0, 0, 0.8, 0.8)
	love.graphics.print(FPS)
	love.graphics.setColor(0, 0, 0)
	love.graphics.print(FPS, 0, 16)
end

return Test
