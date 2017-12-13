#pragma once

#include "Entity.h"
#include <SDL.h>

class RenderSystem {
private:
	std::vector<Entity*> entities;
public:
	RenderSystem();

	void addEntity(Entity *e);
	void draw(SDL_Renderer *renderer);
};
