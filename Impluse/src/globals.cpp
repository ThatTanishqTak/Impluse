// This file has the definations of all the variables

// necessary header file
#include "../headers/globals.h"
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// List to store the game object's functions
std::list<GameObjects*> gameObjects;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Window dimension
const int windowWidth{ 1080 };
const int windowHeight{ 720 };
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Game variables
float gravity = 20.0f;
float acceleration = 10.0f;
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Game camera variables
raylib::Vector3 camPos{ 0.0f, 5.0f, 10.0f };
raylib::Vector3 camTar{ 0.0f, 1.0f, 0.0f };
raylib::Vector3 camUp{ 0.0f, 1.0f, 0.0f };
float fovY{ 60.0f };
raylib::Camera3D gameCam(camPos, camTar, camUp, fovY);
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Ground variables
raylib::Vector3 groundSize{ 10.0f, 1.0f, 10.0f };
raylib::Vector3 groundPos{ 0.0f, 0.0f, 0.0f };
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

// Player variables
raylib::Vector3 playerSize{ 1.0f, 1.0f, 1.0f };
raylib::Vector3 playerPos{ 0.0f, 1.0f, 0.0f };
raylib::Vector3 playerVelocity{ 0.0f, 0.0f, 0.0f };
bool isJumping{ false };
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/