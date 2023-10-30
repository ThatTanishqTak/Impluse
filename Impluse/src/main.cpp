#include "../include/raylib-cpp.hpp"
#include "../headers/globals.hpp"
#include "../headers/gameobjects.hpp"

int main()
{
	raylib::Window window(windowWidth, windowHeight, "Impulse");
	SetTargetFPS(60);

	while (!window.ShouldClose())
	{
		window.BeginDrawing();
			window.ClearBackground(BLACK);

			BeginMode3D();

			EndMode3D();

		window.EndDrawing();
	}

	return 0;
}