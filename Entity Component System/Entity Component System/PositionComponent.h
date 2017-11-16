#pragma once

#include "Component.h"
#include "SDL.h"

class PositionComponent : public Component {
private:
	SDL_Point pos;
public:
	PositionComponent();
	PositionComponent(SDL_Point p);

	int getInt() { return 0; }
	void setInt(int i) {}

	SDL_Point getPoint();
	void setPoint(SDL_Point newPos);
};