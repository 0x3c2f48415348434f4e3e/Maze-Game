#include "GameSetting.h"
static SDL_Texture Tile;
void init_map(void) {
	register int i;
	register int j;
	for (i = 0; i < GAMEHEIGHT; ++i) {
		for (j = 0; j < GAMEWIDTH; ++j) {
			GAMEMAP.map[i][j] = 0;
			//What we are doing here is setting every single value in out Map filed to be 0, so empty space
		}
	}

	//load blocks
	load_blocks();
}

void load_blocks(void) {
	//Here we are going to just load our blocks and then store them in an array
}