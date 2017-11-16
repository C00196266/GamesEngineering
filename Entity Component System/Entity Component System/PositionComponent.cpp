#include "PositionComponent.h"

PositionComponent::PositionComponent() {
	id = "position";
	pos = { 0, 0 };
}

PositionComponent::PositionComponent(SDL_Point p) {
	id = "position";
	pos = p;
}

SDL_Point PositionComponent::getPoint() {
	return pos;
}

void PositionComponent::setPoint(SDL_Point newPos) {
	pos = newPos;
}