#ifndef FACTORY_H
#define FACTORY_H

#include "CharacterAbstract.h"

class Factory {
public:
	virtual CharacterAbstract* CreatePlayer() = 0;
	virtual CharacterAbstract* CreateOpponents() = 0;
};

#endif
