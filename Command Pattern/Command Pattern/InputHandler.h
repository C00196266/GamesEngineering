#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "JumpCommand.h"
#include "FireCommand.h"
#include "ReloadCommand.h"
#include "SwapCommand.h"
#include "MacroCommand.h"
#include <SDL.h>

class InputHandler
{
public:
	InputHandler();

	void handleInput(SDL_Event &e);

private:
	bool addingMacros;

	Command* fireButton;
	Command* reloadButton;
	Command* swapButton;
	Command* jumpButton;
	MacroCommand* macroCommands;

	FireCommand fire;
	ReloadCommand reload;
	SwapCommand swap;
	JumpCommand jump;
	MacroCommand macro;

	SDL_GameController* gameController;
};

#endif
