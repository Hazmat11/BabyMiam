#include <iostream>
#include "MainSDLWindow.hpp"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#undef main

#include "click.h"
#include "Intake.h"
#include "text.h"
#include "MainSDLWindow.hpp"

using namespace std;

int main(void) {

	int a = 1;

	Click clik;
	Register intake;
	Text tex;
	MainSDLWindow sdl;

	sdl.sdl();

	while (a == 1)
	{
		tex.Menu();
		//clik.EventManager();
		intake.Intake();
		intake.Add();
	}
}
