#include "SwapCommand.h"

void SwapCommand::execute() {
	swap();
}

void SwapCommand::swap() {
	std::cout << "Swapping" << std::endl;
}