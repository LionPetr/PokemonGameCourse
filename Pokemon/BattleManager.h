#pragma once
#include "Pokemon.hpp"
class BattleManager
{
public:
	BattleManager();

	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
};