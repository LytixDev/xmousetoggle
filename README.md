# Tool to toggle the mouse on X11 on or off.

## How to install:
`$ git clone https://github.com/LytixDev/xmousetoggle`

`$ cd xmousetoggle`

`$ sudo make install`

## How to use:
To hide the cursor you can start the program:

`$ xmousetoggle`

And then quit it when you want the cursor to appear again.

Alternatively you run the program indefinetely, and toggle between mose on/off by sending a user signal 1.

`$ pkill -USR1 -x xmousetoggle`

Personally I run the program indefinetly, and I have the aformentioned line mapped as a keyboard shortcut.


## Other
Justification for existance: Some programs will not make the mouse cursor invisible when consooooming media in fullscreen. 

A great resource for learning how to do X11 programming http://mech.math.msu.su/~vvb/2course/Borisenko/CppProjects/GWindow/xintro.html

Monero wallet:
88SFNutZMy5MTkMq1WHupZHfj9kDDCMuXbPAvAvWUggXE4pyXnGERQ3YoCmuCfc5StWGN3p9bPMY953zvaLMukyLFQ4KNpz
