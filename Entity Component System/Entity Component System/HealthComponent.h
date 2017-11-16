#pragma once

#include "Component.h"

class HealthComponent : public Component {
private:
	int health;
public:
	HealthComponent();
	HealthComponent(int h);

	int getInt();
	void setInt(int newHealth);

	SDL_Point getPoint() { return SDL_Point{ 0, 0 }; }
	void setPoint(SDL_Point p) {}
};