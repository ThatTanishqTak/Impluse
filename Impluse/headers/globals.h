// This file has all the variables

#ifndef GLOBALS_HPP
#define GLOBALS_HPP

// All the necessary header files
#include "raylib-cpp.hpp"
#include "gameobjects.h"
#include <list>
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// List to store the game object's functions in
extern std::list<GameObjects*> gameObjects;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Window dimension
extern const int windowWidth;
extern const int windowHeight;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Game variables
extern float gravity;
extern float acceleration;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Game camera variables
extern raylib::Vector3 camPos;
extern raylib::Vector3 camTar;
extern raylib::Vector3 camUp;
extern float fovY;
extern raylib::Camera3D gameCam;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Ground variables
extern raylib::Vector3 groundSize;
extern raylib::Vector3 groundPos;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Player variables
extern raylib::Vector3 playerSize;
extern raylib::Vector3 playerPos;
extern raylib::Vector3 playerVelocity;
extern bool isJumping;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

#endif