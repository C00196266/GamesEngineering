#include "State.h"

void State::idle(Animation* animation) {
	std::cout << "State::Idling" << std::endl;
}

void State::jumping(Animation* animation) {
	std::cout << "State::Jumping" << std::endl;
	//animation->jumping();
	//animation->idle();
}

void State::climbing(Animation* animation) {
	std::cout << "State::Climbing" << std::endl;
	//animation->climbing();
	//animation->idle();
}