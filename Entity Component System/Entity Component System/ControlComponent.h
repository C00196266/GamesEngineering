#pragma once

#include "Component.h"
#include "InputHandler.h"

class ControlComponent : public Component {
private:
	InputHandler input;
public:
	ControlComponent();

	InputHandler getInput();
};
