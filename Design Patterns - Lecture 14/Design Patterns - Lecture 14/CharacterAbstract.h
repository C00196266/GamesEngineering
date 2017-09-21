#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

using namespace std;

class CharacterAbstract {
public:
	CharacterAbstract() {}
	virtual ~CharacterAbstract() {}
	virtual void draw() = 0;
};

#endif // !CHARACTER_H