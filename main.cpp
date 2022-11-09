#include <iostream>
#include "MainSDLWindow.hpp"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL_ttf.h>

#undef main

#include "click.h"

#define WIDTHGAME 540
#define HEIGHTWINDOW 630

using namespace std;

int main(void) {
	SDL_Event event;
	bool quit = false;
	Click clik;
	MainSDLWindow* sdlwin = new MainSDLWindow;
	if (sdlwin->Init("BabyMiam", WIDTHGAME, HEIGHTWINDOW) == EXIT_FAILURE)
	{
		exit(EXIT_FAILURE);
	}

	TTF_Init();

	int exit = 0;

	while (!quit)
	{
		SDL_WaitEvent(&event);

		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		}
		clik.EventManager();
	}
}
