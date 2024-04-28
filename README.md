# lyracity_5.4
 merged Lyra and City Sample for UE 5.4 with City Sample modules converted to plugins

1.Lyra bots and gameplay working

2.vehicles and Crowd working

3.packaging game working

download this repo and unpack

you need to copy content of Lyra Sample Content folder to Content folder of unpacked repo (skip existing files) - only ask this as I added test map to FrontEnd menu, in Content/System do the same for City Sample, just copy content of Content folder and either overwrite if asked or ignore, i think there is only some audio mix common

should be able to run Lyra.uproject now and test map in FrontEnd/ Start Game/ Lyracity or play test Small_City_LVL or Big_City_LVL, dont forget to add LyraPlayerStart to your map and set gamemode to LyraGamemode and add experience

Note: When you pacvkage and use CitySample maps and get weird graphics I did fix it this way. 
1: Go to Small_City_LVL or Big_City_LVL, got to world settings and open HLOD file which map is using and I unchecked Spatially loaded.
2. Rebuild All from menu, including HLOD, then repackage or play from editor.

I think graphics issue only happend if you add CitySample maps via Lyra menu and play them.
