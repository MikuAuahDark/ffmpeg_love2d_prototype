-- AquaShine error handler entry point
-- Part of Live Simulator: 2
-- See copyright notice in AquaShine.lua

local AquaShine = AquaShine
local ErrorHandler = {}

function ErrorHandler.Start(arg)
	ErrorHandler.Msg = assert(arg[1])
	
	love.graphics.setFont(love.graphics.newFont(14))
end

function ErrorHandler.Update() end

function ErrorHandler.Draw()
	love.graphics.clear(40, 133, 220)
	love.graphics.print(ErrorHandler.Msg, 70, 70)
end

local ExecutionIsRestart = false
function ErrorHandler.KeyReleased(key)
	if key == "backspace" and AquaShine.Arguments.DefaultEntry then
		love.graphics.setBackgroundColor(0, 0, 0)
		AquaShine.RestartExecution = true
		ExecutionIsRestart = true
		
		AquaShine.LoadEntryPoint(AquaShine.Arguments.Entries[AquaShine.Arguments.DefaultEntry][2])
	elseif key == "escape" then
		if love.window.showMessageBox("AquaShine loader", "Are you sure want to exit?", {"No", "Yes"}) == 2 then
			AquaShine.RestartExecution = false
			love.event.quit()
		end
	end
end

function ErrorHandler.MouseReleased()
	ErrorHandler.KeyReleased("escape")
end

function ErrorHandler.Quit()
	if ExecutionIsRestart == false then
		AquaShine.RestartExecution = false
	end
end	

return ErrorHandler
