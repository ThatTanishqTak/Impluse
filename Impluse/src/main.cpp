// This is the main game file

// All the headers and include files
#include "../include/raylib-cpp.hpp" // Now using the actual raylib C++ library
#include "../headers/globals.h"						
#include "../headers/gameobjects.h"					/* I HATE THIS ALL OF THIS */
#include "../headers/player.h"

int main()
{
	raylib::Window window(windowWidth, windowHeight, "Impulse"); // Initialize window
	SetTargetFPS(60); // Lock FPS

	// Declare the game objects
	Player player;

	// Main game loop
	while (!window.ShouldClose())
	{
		for (GameObjects* gameObjects : gameObjects) { gameObjects->update(); } // Updating the game state

		window.BeginDrawing();
		window.ClearBackground(BLACK);

		BeginMode3D(gameCam);

		for (GameObjects* gameObjects : gameObjects) { gameObjects->render(); } // Rendering the frames

		EndMode3D();

		window.EndDrawing();
	}

	return 0; // Exit code
}