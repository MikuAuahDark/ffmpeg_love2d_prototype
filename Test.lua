local FutureGlasses = require("FutureGlasses")
local ffi = require("ffi")
local Test = {}
local videoobj
local audio

-- Please change
local desiredfile = [[D:/[HD] Touhou - Bad Apple!! [PV] (Shadow Art).mp4]]

function Test.Start()
	-- Testing. Hardcoded path atm
	videoobj = FutureGlasses.OpenVideo(desiredfile, true)
	videoobj:Play()
end

function Test.Update(deltaT)
	-- In AquaShine, deltaT is in milliseconds
	FutureGlasses.Update(deltaT / 1000)
end

function Test.Draw()
	local FPS = love.timer.getFPS()
	
	love.graphics.setColor(255, 255, 255)
	love.graphics.draw(videoobj.Image)
	love.graphics.print(FPS)
	love.graphics.setColor(0, 0, 0)
	love.graphics.print(FPS, 0, 16)
end

return Test
