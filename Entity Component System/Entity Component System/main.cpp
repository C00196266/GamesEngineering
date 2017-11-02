#include <SDL.h>
#include <SDL_image.h>
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
#include "AISystem.h"
#include "RenderSystem.h"
#include "ControlSystem.h"

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);

	SDL_Event e;

	// creates SDL window
	SDL_Window * window = SDL_CreateWindow("Finite State Machine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);

	// sets renderer for window
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

	bool running = true;

	Entity player;
	player.id = 0;

	Entity cat;
	cat.id = 1;

	Entity dog;
	dog.id = 2;

	Entity alien;
	alien.id = 3;

	HealthComponent hc;
	player.addComponent(hc);
	cat.addComponent(hc);
	dog.addComponent(hc);
	alien.addComponent(hc);

	PositionComponent pc;
	player.addComponent(pc);
	cat.addComponent(pc);
	dog.addComponent(pc);
	alien.addComponent(pc);

	ControlComponent cc;
	player.addComponent(cc);

	AISystem aiSystem;
	//aiSystem.addEntity(player);
	aiSystem.addEntity(cat);
	aiSystem.addEntity(dog);
	aiSystem.addEntity(alien);

	RenderSystem renderSystem;
	renderSystem.addEntity(player);
	renderSystem.addEntity(cat);
	renderSystem.addEntity(dog);
	renderSystem.addEntity(alien);

	ControlSystem controlSystem;
	controlSystem.addEntity(player);

	while (running) {
		// reads event event
		SDL_PollEvent(&e);

		//update systems
		aiSystem.update();
		controlSystem.update();
		renderSystem.update();
		renderSystem.draw(renderer);

		// clears and redraws window
		SDL_RenderClear(renderer);

		//SDL_RenderCopy(renderer, texture, &srcrect, &dstrect);
		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	IMG_Quit();
	SDL_Quit();

	return 0;
}

// loads image
//SDL_Surface * image = IMG_Load("spritesheet.png");
//SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);





// speed of animation
//Uint32 ticks = SDL_GetTicks();
//Uint32 sprite = (ticks / 125) % 2;
//
//SDL_Rect srcrect = { sprite * 48, verticalPos, 48, 81 }; // size of file/sprite
//SDL_Rect dstrect = { 150, 150, 48, 81 }; // position and dimensions
//
//input.handleInput(e, verticalPos);





//SDL_DestroyTexture(texture);
//SDL_FreeSurface(image);