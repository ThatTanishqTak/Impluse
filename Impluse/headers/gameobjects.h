#ifndef GAMEOBJECTS_HPP
#define GAMEOBJECTS_HPP

class GameObjects
{
public:
	GameObjects() = default;
	~GameObjects() = default;

	virtual void update() = 0;
	virtual void render() = 0;
};

#endif