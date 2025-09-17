#pragma once
#include "../../include/Pokemon/Grass.h"

class Player;
class Game
{
public:
	Game();
	void gameLoop(Player& player);

private:
	 Grass forestGrass;
};