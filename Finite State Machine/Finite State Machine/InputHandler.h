#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <thread>
#include <chrono>
#include <SDL.h>
#include "Animation.h"
#include "Jumping.h"
#include "Idle.h"
#include "Climbing.h"

class InputHandler
{
public:
	InputHandler();

	void handleInput(SDL_Event &e, int &verticalPos);

private:
	Animation fsm;
};

#endif
