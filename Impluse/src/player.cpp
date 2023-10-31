#include "../headers/player.h"

Player::Player() { gameObjects.push_back(this); }

Player::~Player()
{
}

void Player::update()
{
	if (IsKeyDown(KEY_W)) { gameCam.position.z -= 10.0f * GetFrameTime(); }
	if (IsKeyDown(KEY_S)) { gameCam.position.z += 10.0f * GetFrameTime(); }
	if (IsKeyDown(KEY_A)) { gameCam.position.x -= 10.0f * GetFrameTime(); }
	if (IsKeyDown(KEY_D)) { gameCam.position.x += 10.0f * GetFrameTime(); }
}

void Player::render() { DrawCube(playerPos, playerSize.x, playerSize.y, playerSize.z, WHITE); }
