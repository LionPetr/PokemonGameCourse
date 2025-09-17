#pragma once
#include "Grass.h"

class Player;
class Game
{
public:
	Game();
	void gameLoop(Player& player);

private:
	 Grass forestGrass;
};