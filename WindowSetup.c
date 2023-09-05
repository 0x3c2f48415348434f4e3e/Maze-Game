//Here we will create our window
#include <stdio.h>
#include <SDL.h>
#include <stdbool.h>
#include "GameSetting.h"



void WindowSetup(void) {
	APP.surface = NULL;
	//initialise SDL
	if (SDL_InitSubSystem(SDL_INIT_EVERYTHING) < 0) {
		printf("Could not initialise SLD: %s", SDL_GetError());
	}
	else {
		APP.window = SDL_CreateWindow("Maze runner", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDHT, HEIGHT, SDL_WINDOW_SHOWN);
		if (APP.window == NULL) {
			printf("Could not initialise window: %s", SDL_GetError());
		}
		//Next lets add our surface onto the window
		else {
			APP.surface = SDL_GetWindowSurface(APP.window);
			SDL_FillRect(APP.surface, NULL, SDL_MapRGB(APP.surface->format, 0x0, 0x0, 0x0));
			SDL_UpdateWindowSurface(APP.window);

			UserInput();
			CleanUp();
		}
	}

}

void UserInput(void) {
	bool quit = false;
	SDL_Event event;
	while (!quit) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}
	}

}

void CleanUp(void) {
	free(APP.surface);
	SDL_Quit();
}