#pragma once
#include "../../include/Pokemon/Grass.h"

class Player;
class Game
{
public:
	Game();
	~Game();
	void gameLoop(Player* player);
	void visitPokeCenter(Player* player);


private:
	Grass forestGrass;
	Pokemon* wildPokemon;
};