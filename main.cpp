/*This source code copyrighted by Lazy Foo' Productions (2004-2022)
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, math, and strings
#include <SDL.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <iostream>

#include "click.h"
#include "Intake.h"
#include "text.h"
#include "MainSDLWindow.hpp"
#include "Shopping.h"
#include "Menu.h"

using namespace std;

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

	//The window we'll be rendering to
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;

	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}

		else
		{
			renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			if (renderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
			}

			//Clear screen
			SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
			SDL_RenderClear(renderer);

			//Render red filled quad
			SDL_Rect fillRect = { SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 };
			SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
			SDL_RenderFillRect(renderer, &fillRect);

			//Update screen
			SDL_RenderPresent(renderer);

			SDL_UpdateWindowSurface(window);
			//Hack to get window to stay up
		}
	}

	//While application is running
	while (clik.running == true)
	{
		clik.EventManager();
	}



	return 0;
}