#include "InputHandler.h"

InputHandler::InputHandler() {

}

void InputHandler::handleInput(SDL_Event &e) {
	// switch case to find the event type
	switch (e.type){
	case SDL_KEYDOWN: // key down event detected
		switch (e.key.keysym.sym) {
		case SDLK_w:
			std::cout << "w pressed" << std::endl;
			break;

		case SDLK_a:
			std::cout << "a pressed" << std::endl;
			break;

		case SDLK_s:
			std::cout << "s pressed" << std::endl;
			break;

		case SDLK_d:
			std::cout << "d pressed" << std::endl;
			break;
		}
		break;
	}
}