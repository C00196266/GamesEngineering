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

	Entity *player = new Entity;
	player->id = 0;

	Entity *cat = new Entity;
	cat->id = 1;

	Entity *dog = new Entity;
	dog->id = 2;

	Entity *alien = new Entity;
	alien->id = 3;

	player->addComponent(new HealthComponent);
	cat->addComponent(new HealthComponent);
	dog->addComponent(new HealthComponent);
	alien->addComponent(new HealthComponent);

	PositionComponent *pc = new PositionComponent(SDL_Point{ 0, 0 });
	player->addComponent(pc);

	PositionComponent *pc2 = new PositionComponent(SDL_Point{ 30, 0 });
	cat->addComponent(pc2);

	PositionComponent *pc3 = new PositionComponent(SDL_Point{ 60, 0 });
	dog->addComponent(pc3);

	PositionComponent *pc4 = new PositionComponent(SDL_Point{ 90, 0 });
	alien->addComponent(pc4);

	player->addComponent(new ControlComponent);

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
		controlSystem.update(e);

		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

		// clears and redraws window
		SDL_RenderClear(renderer);

		renderSystem.draw(renderer);

		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	IMG_Quit();
	SDL_Quit();

	return 0;
}