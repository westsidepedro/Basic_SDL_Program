//============================================================================
// Name        : Basic_SDL_Program.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style

/*
 * https://www.caveofprogramming.com/c-for-complete-beginners/setting-up-sdl-windows.html
 *
 * for help with setting up SDL setting go to the above address! :)
 *
 * NEEDS   int main(int argc, char *argv[]{
 * 						}
 * 	in order to compile!!!!
 */
//============================================================================
#include <iostream>
#include <SDL.h>
using namespace std;

int main(int argc, char *argv[])
    {
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
	cout << "SDL init failed." << endl;
	return 1;
	}

    cout << "SDL init succeeded!" << endl;

    SDL_Quit();

    return 0;
    }
