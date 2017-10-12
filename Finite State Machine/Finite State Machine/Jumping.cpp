#include "Jumping.h"
#include "Climbing.h"
#include "Idle.h"

void Jumping::idle(Animation* animation) {
	std::cout << "Going from jumping to idle" << std::endl;
	animation->setCurrent(new Idle());
	delete this;
}

//void Jumping::climbing(Animation* animation) {
//	std::cout << "Going from jumping to climbing" << std::endl;
//	animation->setCurrent(new Climbing());
//	delete this;
//}