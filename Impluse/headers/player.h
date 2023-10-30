#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "raylib-cpp.hpp"
#include "globals.h"

class Player : public GameObjects
{
public:
	Player();
	~Player();

	virtual void update();
	virtual void render();
};

#endif