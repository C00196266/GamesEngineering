#ifndef	STATE_H
#define	STATE_H

#include <iostream>
#include "Animation.h"

class State {
public:
	virtual void idle(Animation* animation);

	virtual void jumping(Animation* animation);

	virtual void climbing(Animation* animation);
};

#endif
