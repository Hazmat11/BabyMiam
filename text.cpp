#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL_ttf.h>

#include "text.h"

using namespace std;

void Text::Menu() {
	TTF_Init();
	TTF_Font* font = NULL;
	font = TTF_OpenFont("LEMONMILK-Light.ttf", 150);

	if (font != 0) {
		SDL_Color noir = { 255, 255, 255 }; //attention ce n'est pas un Uint32
		SDL_Surface* texte = TTF_RenderText_Blended(font, "coucou", noir);
		//affichage
	}
	else { cout << "foirage � l'ouverture de times.ttf" << endl; }
}