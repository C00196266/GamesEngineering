#include "ReloadCommand.h"

void ReloadCommand::execute() {
	reload();
}

void ReloadCommand::reload() {
	std::cout << "Reloading" << std::endl;
}