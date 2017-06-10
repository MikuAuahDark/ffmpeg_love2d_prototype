local width = 960
local height = 640
AquaShine = assert(love.filesystem.load("AquaShine.lua"))({
	Entries = {
		test = {0, "Test.lua"},
	},
	DefaultEntry = "test",
	Width = width,	-- Letterboxing
	Height = height	-- Letterboxing
})

love.window.setMode(width, height)
