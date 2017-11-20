#pragma once

#include "Entity.h"
#include "ControlComponent.h"

class ControlSystem {
private:
	std::vector<Entity*> entities;
public:
	ControlSystem();

	void addEntity(Entity *e);
	void update(SDL_Event &e);
};