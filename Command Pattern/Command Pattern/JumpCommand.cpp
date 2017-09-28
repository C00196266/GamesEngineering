#include "JumpCommand.h"

void JumpCommand::execute() {
	jump();
}

void JumpCommand::jump() {
	std::cout << "Jumping" << std::endl;
}