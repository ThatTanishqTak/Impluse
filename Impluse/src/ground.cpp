#include "../headers/ground.h"

Ground::Ground() { gameObjects.push_back(this); }

Ground::~Ground()
{
}

void Ground::update()
{
}

void Ground::render() { DrawCubeV(groundPos, groundSize, RED); }
