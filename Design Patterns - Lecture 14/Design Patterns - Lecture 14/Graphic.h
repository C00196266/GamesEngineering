#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <iostream>
#include "IGraphic.h"

using namespace std;

class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void draw();
};

#endif

