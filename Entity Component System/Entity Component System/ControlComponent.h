#pragma once

#include "Component.h"
#include "InputHandler.h"

class ControlComponent : public Component {
private:
	InputHandler input;
public:
	ControlComponent();

	InputHandler getInput();

	int getInt() { return 0; }
	void setInt(int i) {}

	SDL_Point getPoint() { return SDL_Point{ 0, 0 }; }
	void setPoint(SDL_Point p) {}
};
