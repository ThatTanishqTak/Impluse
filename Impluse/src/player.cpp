// The player controler file

#include "../headers/player.h"

Player::Player() { gameObjects.push_back(this); }

Player::~Player()
{
}

void Player::update()
{
	if (IsKeyDown(KEY_W)) { playerPos.z -= 10.0f * GetFrameTime(); }
	if (IsKeyDown(KEY_S)) { playerPos.z += 10.0f * GetFrameTime(); }
	if (IsKeyDown(KEY_A)) { playerPos.x -= 10.0f * GetFrameTime(); }
	if (IsKeyDown(KEY_D)) { playerPos.x += 10.0f * GetFrameTime(); }
}

void Player::render() { DrawCubeV(playerPos, playerSize, WHITE); }