#pragma once
#include "Component.h"
#include "SDL.h"
#include "SDL_image.h"
#include <vector>

class Entity {
private:
	std::vector<Component*> components;

public:
	int id;

	Entity();

	void addComponent(Component* c);
	void removeComponent(Component* c);
	std::vector<Component*> getComponents();
};