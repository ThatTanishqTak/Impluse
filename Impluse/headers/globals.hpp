#ifndef GLOBALS_H
#define GLOBALS_H

#include "raylib-cpp.hpp"
#include "gameobjects.hpp"
#include <list>

extern std::list<GameObjects*> gameObjects;

extern const int windowWidth;
extern const int windowHeight;

raylib::Camera3D camera;

#endif