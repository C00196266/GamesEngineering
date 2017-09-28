#include "FireCommand.h"

void FireCommand::execute() {
	 fire();
}

void FireCommand::fire() {
	std::cout << "Firing" << std::endl;
}