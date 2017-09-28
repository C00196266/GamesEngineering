#include "InputHandler.h"

InputHandler::InputHandler() {
	// points to the reference of the objects for the commands
	fireButton = &fire;
	reloadButton = &swap;
	swapButton = &reload;
	jumpButton = &jump;
	macroCommands = &macro;

	addingMacros = false;
}

void InputHandler::handleInput(SDL_Event &e) {
	// switch case to find the event type
	switch (e.type){
	case SDL_KEYDOWN: // key down event detected
		switch (e.key.keysym.sym) {
		case SDLK_1:
			if (!addingMacros) {
				fireButton->execute();
			}
			else {
				macroCommands->add(fireButton);
			}
			break;
		case SDLK_2:
			if (!addingMacros) {
				swapButton->execute();
			}
			else {
				macroCommands->add(swapButton);
			}
			break;
		case SDLK_3:
			if (!addingMacros) {
				reloadButton->execute();
			}
			else {
				macroCommands->add(reloadButton);
			}
			break;
		case SDLK_4:
			if (!addingMacros) {
				jumpButton->execute();
			}
			else {
				macroCommands->add(jumpButton);
			}
			break;
		case SDLK_e:
			if (addingMacros) {
				addingMacros = false;
			}
			macroCommands->execute();
			break;
		case SDLK_m:
			if (addingMacros) {
				addingMacros = false;
				std::cout << "No longer adding commands to macro." << std::endl;
			}
			else {
				addingMacros = true;
				std::cout << "Adding commands to macro" << std::endl;
			}
			break;
		case SDLK_r:
			if (!addingMacros) {
				macroCommands->remove();
			}
			break;
		}
		break;
	}
}