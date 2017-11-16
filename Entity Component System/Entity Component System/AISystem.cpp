#include "AISystem.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include <iostream>

AISystem::AISystem() {

}

void AISystem::addEntity(Entity* e) {
	entities.push_back(e);
}

void AISystem::update() {
	std::cout << "Updating AI System" << std::endl;

	for (std::vector<Entity*>::iterator i = entities.begin(), e = entities.end(); i != e; i++) {
		for (int j = 0; j < (*i)->getComponents().size(); j++) {
			if ((*i)->getComponents().at(j)->id == "health") {
				static_cast<HealthComponent*>((*i)->getComponents().at(j))->setInt(((*i)->getComponents().at(j))->getInt() - 1);
				std::cout << (*i)->id << "'s Health: " << ((*i)->getComponents().at(j))->getInt() << std::endl;
			}
			else if ((*i)->getComponents().at(j)->id == "position") {
				static_cast<PositionComponent*>((*i)->getComponents().at(j))->setPoint(SDL_Point{ ((*i)->getComponents().at(j))->getPoint().x + 1, ((*i)->getComponents().at(j))->getPoint().y + 1});
			}
		}
	}
}