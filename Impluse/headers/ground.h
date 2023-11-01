#ifndef GROUND_H
#define GROUND_H

#include "raylib-cpp.hpp"
#include "globals.h"

class Ground : public GameObjects
{
public:
	Ground();
	~Ground();

	virtual void update();
	virtual void render();

private:
};

#endif