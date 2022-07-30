getgenv().invis = false;

local Material = loadstring(game:HttpGet("https://raw.githubusercontent.com/Kinlei/MaterialLua/master/Module.lua"))()

local X = Material.Load({
    Title = "[Stormzzys Scripts] </> LUCKY BLOCKS",
    Style = 1,
    SizeX = 370,
    SizeY = 300,
    Theme = "Dark", --light dark aqua mocha jester
    ColorOverrides = {
		NavBarAccent = Color3.fromRGB(130,130,130)
    }
})

local Y = X.New({
    Title = "Main"
})

local P = X.New({
    Title = "Local Player"
})

Y.Button({
    Text = "All Items",
    Callback = function()
for i = 1,100 do -- Change 100 to the amount of times you want the script to repeat
    game:GetService("ReplicatedStorage").SpawnLuckyBlock:FireServer()
    game:GetService("ReplicatedStorage").SpawnSuperBlock:FireServer()
    game:GetService("ReplicatedStorage").SpawnDiamondBlock:FireServer()
    game:GetService("ReplicatedStorage").SpawnRainbowBlock:FireServer()
    game:GetService("ReplicatedStorage").SpawnGalaxyBlock:FireServer()
wait()
end
    end
})


Y.Button({
    Text = "Open Blocks",
    Callback = function()
for i = 1,_G.amount do -- Change 100 to the amount of times you want the script to repeat
    game:GetService("ReplicatedStorage")[_G.selected]:FireServer()
wait()
end
    end
})

Y.Dropdown({
    Text = "Block Type",
    Callback = function(value)
        _G.selected = value
    end,
    Options = {"SpawnLuckyBlock", "SpawnSuperBlock", "SpawnDiamondBlock", "SpawnRainbowBlock", "SpawnGalaxyBlock"}
})

Y.Slider({
    Text = "Block Amount",
    Callback = function(value)
        _G.amount = value
    end,
    Min = 1,
    Max = 100,
    Def = 1
})

P.Slider({
    Text = "WS/Walk Speed",
    Callback = function(value)
        game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = value
    end,
    Min = 16,
    Max = 100,
    Def = 16
})

P.Slider({
    Text = "JP/Jump Power",
    Callback = function(value)
        game.Players.LocalPlayer.Character.Humanoid.JumpPower = value
    end,
    Min = 50,
    Max = 200,
    Def = 50
})
