#pragma once

class Pokemon;

struct BattleState
{
	Pokemon* playerPokemon;
	Pokemon* wildPokemon;
	bool playerTurn;
	bool battleOnGoing;
};