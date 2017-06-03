AquaShine = assert(love.filesystem.load("AquaShine.lua"))({
	Entries = {
		test = {0, "Test.lua"},
	},
	DefaultEntry = "test",
	Width = 1024,	-- Letterboxing
	Height = 576	-- Letterboxing
})

love.window.setMode(1024, 576)
