#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "click.h"

using namespace std;

void Click::EventManager() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			this->running = false;
			break;
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT) cout << "test";
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_1:
				cout << "hummmmmm";
			}
		}
	}
}