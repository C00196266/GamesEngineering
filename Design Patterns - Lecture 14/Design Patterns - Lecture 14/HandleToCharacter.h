#ifndef HANDLETOCHARACTER_H
#define HANDLETOCAHRACTER_H

#include "CharacterHandle.h"

class HandleToCharacter {
public:
	HandleToCharacter() : character(new CharacterHandle()) {}
	CharacterHandle* operator->();

private:
	CharacterHandle* character;
};

#endif // !HANDLETOCHARACTER_H

