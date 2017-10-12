#ifndef	IDLE_H
#define	IDLE_H

#include "State.h"

class Idle : public State {
public:
	Idle() {};
	~Idle() {};

	void jumping(Animation* animation);
	void climbing(Animation* animation);
};

#endif
