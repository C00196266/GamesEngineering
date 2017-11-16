#pragma once
#include <string>
#include <SDL.h>

class Component {
public:
	Component() {}
	std::string id;
	virtual int getInt() = 0;
	virtual SDL_Point getPoint() = 0;
	virtual void setPoint(SDL_Point val) = 0;
	virtual void setInt(int val) = 0;
};
