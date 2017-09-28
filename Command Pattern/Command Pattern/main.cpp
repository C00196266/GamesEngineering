#include <SDL.h>
#include "InputHandler.h"

int main( int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Event e; 

	// creates SDL window
	SDL_Window * window = SDL_CreateWindow("Command Patterns", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);

	// sets renderer for window
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

	InputHandler input;

	bool running = true;

	while (running) {
		// reads event event
		SDL_PollEvent(&e);

		input.handleInput(e);

		// clears and redraws window
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}

	SDL_Quit();
	
	return 0;
}