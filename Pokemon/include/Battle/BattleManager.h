#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.h"

class BattleManager
{
public:
	BattleManager();
	void startBattle(Player& player, Pokemon& wildPokemon);
private:

	void battle(Player& player, Pokemon& wildPokemon);
	void handleBattle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	bool handleActionChoice(Player& player);
	void handleBattleOutcome();
	void updateBattleState();


	BattleState state;
};