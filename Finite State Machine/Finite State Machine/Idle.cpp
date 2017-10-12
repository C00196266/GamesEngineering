#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

void Idle::jumping(Animation* animation) {
	std::cout << "Going from idle to jumping" << std::endl;
	//animation->setCurrent(new Idle());
	animation->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* animation) {
	std::cout << "Going from idle to climbing" << std::endl;
	//animation->setCurrent(new Idle());
	animation->setCurrent(new Climbing());
	delete this;
}