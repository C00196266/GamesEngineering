#include "ControlSystem.h"
#include "PositionComponent.h"
#include <iostream>

ControlSystem::ControlSystem() {

}

void ControlSystem::addEntity(Entity *e) {
	entities.push_back(e);
}

void ControlSystem::update(SDL_Event &event) {
	std::cout << "Updating control System" << std::endl;

	for (std::vector<Entity*>::iterator i = entities.begin(), e = entities.end(); i != e; i++) {
		for (int j = 0; j < (*i)->getComponents().size(); j++) {
			if ((*i)->getComponents().at(j)->id == "control") {
				static_cast<ControlComponent*>((*i)->getComponents().at(j))->getInput().handleInput(event, static_cast<PositionComponent*>((*i)->getComponents().at(j))->getPos());
			}
		}
	}
}