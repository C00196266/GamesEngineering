#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SDL.h>
#include <iostream>

class InputHandler
{
public:
	InputHandler();

	void handleInput(SDL_Event &e, SDL_Point &pos);

private:

};

#endif
