#include <iostream>
#include "MainSDLWindow.hpp"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#undef main

#define WIDTHGAME 540
#define HEIGHTWINDOW 630

using namespace std;

int main(void) {
	MainSDLWindow* sdlwin = new MainSDLWindow;
	if (sdlwin->Init("BabyMiam", WIDTHGAME, HEIGHTWINDOW) == EXIT_FAILURE)
	{
		exit(EXIT_FAILURE);
	}
}