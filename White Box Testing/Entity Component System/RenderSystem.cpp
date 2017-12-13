#include "RenderSystem.h"
#include "PositionComponent.h"
#include <iostream>

RenderSystem::RenderSystem() {

}

void RenderSystem::addEntity(Entity *e) {
	entities.push_back(e);
}

void RenderSystem::draw(SDL_Renderer *renderer) {
	//std::cout << "Drawing Render System" << std::endl;

	for (std::vector<Entity*>::iterator i = entities.begin(), e = entities.end(); i != e; i++) {
		for (int j = 0; j < (*i)->getComponents().size(); j++) {
			if ((*i)->getComponents().at(j)->id == "position") {
				SDL_Rect* tempRect = new SDL_Rect;

				tempRect->x = static_cast<PositionComponent*>((*i)->getComponents().at(j))->getPos().x;
				tempRect->y = static_cast<PositionComponent*>((*i)->getComponents().at(j))->getPos().y;
				tempRect->w = 20;
				tempRect->h = 20;

				if ((*i)->id == 0) {
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
				}
				else if ((*i)->id == 1) {
					SDL_SetRenderDrawColor(renderer, 200, 165, 0, 255);
				}
				else if ((*i)->id == 2) {
					SDL_SetRenderDrawColor(renderer, 170, 100, 0, 255);
				}
				else {
					SDL_SetRenderDrawColor(renderer, 0, 155, 155, 255);
				}

				SDL_RenderDrawRect(renderer, tempRect);
			}
		}
	}
}