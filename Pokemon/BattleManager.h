#pragma once
#include "Player.hpp"
#include "BattleState.h"

class BattleManager
{
public:
	BattleManager();

private:
	void startBattle(Player& player, Pokemon& wildPokemon);
	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome();
	void updateBattleState();


	BattleState state;
};