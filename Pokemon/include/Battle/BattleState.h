#pragma once
#include "../../include/Pokemon/Pokemon.hpp"

struct BattleState
{
	Pokemon* playerPokemon;
	Pokemon* wildPokemon;
	bool playerTurn;
	bool battleOnGoing;
};