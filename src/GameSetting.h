//Here we will store things such as dimension of window, and related things like that
#include "WindowSetup.h"
#define WIDHT 600
#define HEIGHT 550
#define GAMEWIDTH 41
#define GAMEHEIGHT 20

typedef struct ForApp {
	//create our SDL surface
	SDL_Surface* surface;
	//create SDL window to render render surface
	SDL_Window* window;
}app;
app APP;

//set up up
typedef struct Map {
	int map[GAMEWIDTH][GAMEHEIGHT];
}Gamemap;
Gamemap GAMEMAP;
