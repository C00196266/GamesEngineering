#include "InputHandler.h"

InputHandler::InputHandler() {
	fsm.idle();
}

void InputHandler::handleInput(SDL_Event &e, int &verticalPos) {
	// switch case to find the event type
	switch (e.type) {
	case SDL_KEYDOWN: // key down event detected
		switch (e.key.keysym.sym) {
		case SDLK_SPACE:
			fsm.jumping();

			if (verticalPos != 81) {
				verticalPos = 81;
			}

			break;

		case SDLK_w:
			fsm.climbing();

			if (verticalPos != 162) {
				verticalPos = 162;
			}

			break;
		}

		break; // keydown

	case SDL_KEYUP:
		fsm.idle();

		if (verticalPos != 0) {
			verticalPos = 0;
		}

		break; // key up
	}
}
