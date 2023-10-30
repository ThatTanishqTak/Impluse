#include "../include/raylib-cpp.hpp"
#include "../headers/globals.h"
#include "../headers/gameobjects.h"
#include "../headers/player.h"

int main()
{
	raylib::Window window(windowWidth, windowHeight, "Impulse");
	SetTargetFPS(60);

	Player player;

	while (!window.ShouldClose())
	{
		for (GameObjects* gameObjects : gameObjects) { gameObjects->update(); }

		window.BeginDrawing();
		window.ClearBackground(BLACK);

		BeginMode3D(gameCam);

		for (GameObjects* gameObjects : gameObjects) { gameObjects->render(); }

		EndMode3D();

		window.EndDrawing();
	}

	return 0;
}