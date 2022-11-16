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
		SDL_Color blanc = { 0, 0, 0 }; //attention ce n'est pas un Uint32
		SDL_Surface* texte = TTF_RenderText_Blended(font, "coucou", blanc);
		//affichage
		SDL_FreeSurface(texte); //On oublie toujours pas
		TTF_CloseFont(font);
	}
	else { cout << "foirage à l'ouverture de times.ttf" << endl; }
}