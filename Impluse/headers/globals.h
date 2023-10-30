#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include "raylib-cpp.hpp"
#include "gameobjects.h"
#include <list>

extern std::list<GameObjects*> gameObjects;

extern const int windowWidth;
extern const int windowHeight;

extern raylib::Vector3 camPos;
extern raylib::Vector3 camTar;
extern raylib::Vector3 camUp;
extern float fovY;
extern raylib::Camera3D gameCam;

#endif