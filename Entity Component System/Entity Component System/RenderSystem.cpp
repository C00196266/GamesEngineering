#include "RenderSystem.h"
#include <iostream>

RenderSystem::RenderSystem() {

}

void RenderSystem::addEntity(Entity e) {
	entities.push_back(e);
}

void RenderSystem::update() {
	std::cout << "Updating Render System" << std::endl;
}

void RenderSystem::draw(SDL_Renderer *renderer) {
	std::cout << "Drawing Render System" << std::endl;
}