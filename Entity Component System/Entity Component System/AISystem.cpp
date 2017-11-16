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
				static_cast<HealthComponent*>((*i)->getComponents().at(j))->setInt(20);
			}
			else if ((*i)->getComponents().at(j)->id == "position") {
				static_cast<PositionComponent*>((*i)->getComponents().at(j))->setPoint(SDL_Point{ ((*i)->getComponents().at(j))->getPoint().x + 1, ((*i)->getComponents().at(j))->getPoint().y + 1});
			}
		}
	}
	//for (int i = 0; i < entities.size(); i++) {
	//	for (int j = 0; j < entities.at(i).getComponents().size(); j++)
	//	{
	//		if (entities.at(i).getComponents().at(j)->id == "health")
	//		{
	//			entities.at(i).getComponents().at(j)->setInt((i + 1) * 10);
	//		}
	//	}
	//}
}