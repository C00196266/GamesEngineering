#include "HandleToCharacter.h"

CharacterHandle* HandleToCharacter::operator->() {
	return character;
}