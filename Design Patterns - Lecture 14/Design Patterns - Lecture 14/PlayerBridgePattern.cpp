#include "PlayerBridgePattern.h"

PlayerBridgePattern::PlayerBridgePattern(DrawAPI* api) {
	this->api = api;
}

void PlayerBridgePattern::draw() {
	api->draw();
}