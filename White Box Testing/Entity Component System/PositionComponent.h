#pragma once

#include "Component.h"
#include "SDL.h"

class PositionComponent : public Component {
private:
	SDL_Point pos;
public:
	PositionComponent();
	PositionComponent(SDL_Point p);

	SDL_Point getPos();
	void setPos(SDL_Point newPos);
};