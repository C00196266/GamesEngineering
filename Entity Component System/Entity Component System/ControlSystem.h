#pragma once

#include "Entity.h"

class ControlSystem {
private:
	std::vector<Entity> entities;
public:
	ControlSystem();

	void addEntity(Entity e);
	void update();
};