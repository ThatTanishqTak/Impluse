// The game objects system

#ifndef GAMEOBJECTS_HPP
#define GAMEOBJECTS_HPP

class GameObjects
{
public:
	GameObjects() = default; // Default constructor
	~GameObjects() = default; // Defalut destructor

	virtual void update() = 0; // Virtual update
	virtual void render() = 0; // Virtual render
};

#endif