#define SDL_MAIN_HANDLED

#include <assert.h>
#include <stdio.h>

#include "PositionComponent.h"
#include "AISystem.h"

int main(int argc, char* argv[]) {
	bool running = true;

	Entity* entity = new Entity;
	entity->id = 0;

	PositionComponent* pos = new PositionComponent;
	
	entity->addComponent(pos);
	
	AISystem aiSystem;
	aiSystem.addEntity(entity);

	while (running) {
		aiSystem.update();

		assert(pos->getPos().y < 1000);
		assert(pos->getPos().x < 1000);
	}

	return 0;
}