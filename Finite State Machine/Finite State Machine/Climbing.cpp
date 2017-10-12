#include "Climbing.h"
#include "Idle.h"

void Climbing::idle(Animation* animation) {
	std::cout << "Going from climbing to idle" << std::endl;
	animation->setCurrent(new Idle());
	delete this;
}