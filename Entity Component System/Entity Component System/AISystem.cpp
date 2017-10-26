#include "AISystem.h"
#include <iostream>

AISystem::AISystem() {

}

void AISystem::addEntity(Entity e) {
	entities.push_back(e);
}

void AISystem::update() {
	std::cout << "Updating AI System" << std::endl;

	for (int i = 0; i < entities.size(); i++) {
		//std::cout << entities.at(i).id << std::endl;
		//if (entities.at(i).id == 2) {
		//	
		//}
	}
}