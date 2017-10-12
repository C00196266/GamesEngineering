#ifndef	ANIMATION_H
#define	ANIMATION_H

class Animation {
private:
	class State* current;

public:
	Animation();

	
	void setCurrent(State* state);

	void idle();
	void jumping();
	void climbing();
};

#endif

