#include "MainSDLWindow.hpp"
#include <SDL.h>
#include <stdio.h>

//Screen dimension constants
const int SCREEN_WIDTH = 540;
const int SCREEN_HEIGHT = 630;

int MainSDLWindow::sdl()
{
	//The window we'll be rendering to
	SDL_Window* window = NULL;

	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	//Renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	Uint32 renderer_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;

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
			//Get window surface
			screenSurface = SDL_GetWindowSurface(window);

			//Fill the surface white
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

			//Update the surface
			SDL_UpdateWindowSurface(window);

			SDL_Rect rect;
			rect.x = 0;
			rect.y = 0;
			rect.w = 100;
			rect.h = 200;

			SDL_SetRenderDrawColor(renderer, 138, 3, 3, 255);
			SDL_RenderDrawRect(renderer, &rect);
			SDL_RenderFillRect(renderer, &rect);

			SDL_RenderPresent(renderer);

			//Hack to get window to stay up
			SDL_Event e; bool quit = false; while (quit == false) { while (SDL_PollEvent(&e)) { if (e.type == SDL_QUIT) quit = true; } }
		}
	}

	//Destroy window
	SDL_DestroyWindow(window);

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}
