#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "click.h"
#include "Intake.h"
#include "Shopping.h"

using namespace std;

void Click::EventManager() {
	SDL_Event event;
	Register intake;
	Shop shopping;

	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			this->running = false;
			break;
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT);
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_1:
				intake.Intake();
				break;
			case SDLK_2:
				shopping.Main();
			}
		}
	}
}