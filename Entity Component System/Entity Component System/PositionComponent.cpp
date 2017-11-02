#include "PositionComponent.h"

PositionComponent::PositionComponent() {
	pos = { 0, 0 };
}

PositionComponent::PositionComponent(SDL_Point p) {
	pos = p;
}

SDL_Point PositionComponent::getPos() {
	return pos;
}

void PositionComponent::setPos(SDL_Point newPos) {
	pos = newPos;
}