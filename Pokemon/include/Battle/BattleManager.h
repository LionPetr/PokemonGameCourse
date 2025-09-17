#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.h"

class BattleManager
{
public:
	BattleManager();
	void startBattle(Player& player, Pokemon& wildPokemon);
private:

	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome();
	void updateBattleState();


	BattleState state;
};