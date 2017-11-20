#include "InputHandler.h"

InputHandler::InputHandler() {

}

void InputHandler::handleInput(SDL_Event &e, SDL_Point &pos) {
	// switch case to find the event type
	switch (e.type){
	case SDL_KEYDOWN: // key down event detected
		switch (e.key.keysym.sym) {
		case SDLK_w:
			pos.y--;
			break;

		case SDLK_a:
			pos.x--;
			break;

		case SDLK_s:
			pos.y++;
			break;

		case SDLK_d:
			pos.x++;
			break;
		}
		break;
	}
}