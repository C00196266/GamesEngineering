#include "ControlComponent.h"

ControlComponent::ControlComponent() {
	id = "control";
}

InputHandler ControlComponent::getInput() {
	return input;
}