/*This source code copyrighted by Lazy Foo' Productions (2004-2022)
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, math, and strings
#include <SDL.h>
#include <stdio.h>
#include <string>
#include <cmath>

#include "click.h"
#include "Intake.h"
#include "text.h"
#include "MainSDLWindow.hpp"
#include "Shopping.h"
#include "Menu.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
	Click clik;
	Text tex;
	MainSDLWindow sdl;
	Menu menu;

	//Main loop flag
	bool quit = false;

	//Event handler
	SDL_Event e;

	sdl.sdl();

	//While application is running
	while (!quit)
	{
		//Handle events on queue
		while (SDL_PollEvent(&e) != 0)
		{
			//User requests quit
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}
		menu.both();
		tex.Menu();
		//clik.EventManager();
	}

	return 0;
}