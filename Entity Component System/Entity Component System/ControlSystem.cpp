#include "ControlSystem.h"
#include <iostream>

ControlSystem::ControlSystem() {

}

void ControlSystem::addEntity(Entity e) {
	entities.push_back(e);
}

void ControlSystem::update() {
	std::cout << "Updating Render System" << std::endl;
}