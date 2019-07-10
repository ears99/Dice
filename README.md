# Dice
This program was designed for people who either can't use normal dice due to blindness or low vision (hence why it's a text-based application, to allow
more compatability with screen readers), or for people like me, who don't have normal dice. 

When running the program, it will bring up a menu, like this: 
1. d4
2. d6
3. d8
4. d10
5. d12
6. d20
7. d100

After selecting an option, a prompt will appear, asking you to input a number for the number of times to roll the dice you selected. 
Once it's done rolling, the program will exit. 

### Compiling
To compile the program, you will need: 
* CMake (at least version 3.10.2)
* MinGW (Windows users only)
* Make

To compile, I recommend an out-of-tree build. To do this, go to the Dice folder, and create a build directory.
Then, simply type `cmake ..`, followed by `make`.

### Dice Included
All the standard roleplaying dice are available, and more dice can be added easily, should the need arise!
d4, d6, d8, d10, d12, d20, and percentile dice (d100).
