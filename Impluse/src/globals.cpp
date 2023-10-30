#include "../headers/globals.h"

std::list<GameObjects*> gameObjects;

const int windowWidth = 1080;
const int windowHeight = 720;

raylib::Vector3 camPos = { 0.0f, 1.0f, 10.0f };
raylib::Vector3 camTar = { 0.0f, 1.0f, 0.0f };
raylib::Vector3 camUp = { 0.0f, 1.0f, 0.0f };
float fovY = 45.0f;
raylib::Camera3D gameCam(camPos, camTar, camUp, fovY);