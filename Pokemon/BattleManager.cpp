#pragma once
#include "BattleManager.h"
#include "Utility.h"

BattleManager::BattleManager()
{
	
}

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
	std::cout << "battling " << wildPokemon.name << "..." << std::endl;
	state = 
	{
		&player.chosenPokemon,
		&wildPokemon,
		true,
		true
	};
	battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (state.battleOnGoing)
	{
		if (state.playerTurn)
		{
			state.playerPokemon->attack(*state.wildPokemon);\
		}
		else
		{
			state.wildPokemon->attack(*state.playerPokemon);
		}

		updateBattleState();

		state.playerTurn = !state.playerTurn;
		playerPokemon.attack(wildPokemon);
		Utility::waitForEnter();
	}
	handleBattleOutcome();
}

void BattleManager::handleBattleOutcome()
{
	if (state.playerPokemon->isFainted())
	{
		std::cout << state.playerPokemon->name << " has fained! you lose the battle" << std::endl;
	}
	else
	{
		std::cout << "you defeated the wild " << state.wildPokemon->name << "!" << std::endl;
	}
}

void BattleManager::updateBattleState()
{
	if (state.playerPokemon->isFainted())
	{
		state.battleOnGoing = false;
	}
	else if (state.wildPokemon->isFainted())
	{
		state.battleOnGoing = false;
	}
	
}
