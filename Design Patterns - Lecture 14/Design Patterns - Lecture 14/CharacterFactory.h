#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

#include "Factory.h"
#include "PlayerAbstract.h"
#include "Boss.h"

class CharacterFactory : public Factory {
public:
	CharacterAbstract* CreatePlayer();
	CharacterAbstract* CreateOpponents();
};

#endif