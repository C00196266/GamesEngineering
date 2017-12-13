#include "PositionComponent.h"

PositionComponent::PositionComponent() {
	id = "position";
	pos = { 0, 0 };
}

PositionComponent::PositionComponent(SDL_Point p) {
	id = "position";
	pos = p;
}

SDL_Point PositionComponent::getPos() {
	return pos;
}

void PositionComponent::setPos(SDL_Point newPos) {
	pos = newPos;
}