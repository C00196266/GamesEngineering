#ifndef PLAYERBRIDGEPATTERN_H
#define PLAYERBRIDGEPATTERN_H

#include "CharacterBridgePattern.h"
#include "DrawImpl.h"

class PlayerBridgePattern : public CharacterBridgePattern {
public:
	PlayerBridgePattern(DrawAPI* api);
	void draw();

private:
	DrawAPI* api;
};

#endif
