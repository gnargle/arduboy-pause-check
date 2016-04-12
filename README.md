# arduboy-pause-check
A simple lib for the arduboy to standardise pausing in its games.

#How do I use this?
Download the zip, copy arduboy-pause-check.h to the folder your project is in, and include it in your work.
The aim of this is to standardise the button combo for pausing in arduboy games. To do that, we use a combination of
buttons unlikely to be regularly pressed all at once, that is, the four d pad buttons.

The header consists of two functions. 

* setup_pause takes a byte value from 0-255 to define how long we should wait before
the value of the pause boolean can be changed. This defaults as 30, which I feel is just fine for 60fps games.

* pause_check takes an Arduboy object and a boolean as its parameters. The boolean is used to check if the game is already paused.
If it is, and the button comb is pressed, the boolean is set to false and returned. Else if it is not paused, the boolean is set to true
and returned.

As such, please follow these semantics for your game - paused = true, unpaused = false.

This code is freely available to use and modify as you please.
