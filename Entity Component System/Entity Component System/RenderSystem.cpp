#include "RenderSystem.h"
#include "PositionComponent.h"
#include <iostream>

RenderSystem::RenderSystem() {

}

void RenderSystem::addEntity(Entity *e) {
	entities.push_back(e);
}

void RenderSystem::draw(SDL_Renderer *renderer) {
	std::cout << "Drawing Render System" << std::endl;

	for (std::vector<Entity*>::iterator i = entities.begin(), e = entities.end(); i != e; i++) {
		for (int j = 0; j < (*i)->getComponents().size(); j++) {
			if ((*i)->getComponents().at(j)->id == "position") {
				//static_cast<PositionComponent*>((*i)->getComponents().at(j))->setPoint(SDL_Point{ ((*i)->getComponents().at(j))->getPoint().x + 1, ((*i)->getComponents().at(j))->getPoint().y + 1 });
				SDL_Rect* tempRect = new SDL_Rect;

				tempRect->x = static_cast<PositionComponent*>((*i)->getComponents().at(j))->getPoint().x;//entities->at(i).getComponents().at(j)->getPoint().x;
				tempRect->y = static_cast<PositionComponent*>((*i)->getComponents().at(j))->getPoint().y;//entities->at(i).getComponents().at(j)->getPoint().y;
				tempRect->w = 20;
				tempRect->h = 20;

				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
				SDL_RenderDrawRect(renderer, tempRect);
			}
		}
	}

	//for (int i = 0; i < entities.size(); i++) {
	//	for (int j = 0; j < entities.at(i).getComponents().size(); j++)
	//	{
	//		if (entities.at(i).getComponents().at(j)->id == "position")
	//		{
	//			SDL_Rect* tempRect;
	//			tempRect->x = entities.at(i).getComponents().at(j)->getPoint().x;
	//			tempRect->y = entities.at(i).getComponents().at(j)->getPoint().y;
	//			tempRect->w = 20;
	//			tempRect->h = 20;
	//
	//			SDL_SetRenderDrawColor(renderer, 100, 100, 100, 255);
	//			SDL_RenderDrawRect(renderer, tempRect);
	//		}
	//	}
	//}
}