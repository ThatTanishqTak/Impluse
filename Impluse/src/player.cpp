// The player controller file

#include "../headers/player.h"

Player::Player() { gameObjects.push_back(this); }

Player::~Player()	
{
}

void Player::update()
{
	if (IsMouseButtonDown(MOUSE_BUTTON_LEFT) && !isJumping)
	{
		playerVelocity.y += 1.0f;
		playerPos.y += playerVelocity.y * GetFrameTime();
		isJumping = true;
	}

	if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT) && isJumping)
	{
		playerPos.y -= gravity * GetFrameTime();
	}

	if (playerPos.y == groundPos.y)
	{
		playerPos.y = groundPos.y;
		isJumping = false; 
	}

	playerVelocity.y = 0.0f;
}

void Player::render() { DrawCubeV(playerPos, playerSize, WHITE); }