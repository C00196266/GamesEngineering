#include "CharacterFactory.h"

CharacterAbstract* CharacterFactory::CreatePlayer() {
	return new PlayerAbstract;
}

CharacterAbstract* CharacterFactory::CreateOpponents() {
	return new Boss;
}