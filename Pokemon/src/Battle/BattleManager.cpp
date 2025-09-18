#pragma once
#include "../../include/Battle/BattleManager.h"

BattleManager::BattleManager()
{

}

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
	std::cout << "battling " << wildPokemon.getName() << "..." << std::endl;
	Utility::waitForEnter();
	state =
	{
		player.chosenPokemon,
		&wildPokemon,
		true,
		true
	};
	battle(*player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (state.battleOnGoing)
	{
		Utility::clearConsole();
		if (state.playerTurn && state.playerPokemon->canAttack())
		{
			state.playerPokemon->selectAndUseMove(state.wildPokemon);
			std::cout << wildPokemon.getName() << " is at " << wildPokemon.getHealth() << "/" << wildPokemon.getMaxHealth() << std::endl;
		}
		else if(state.wildPokemon->canAttack())
		{
			state.wildPokemon->selectAndUseMove(state.playerPokemon);
			std::cout << playerPokemon.getName() << " is at " << playerPokemon.getHealth() << "/" << playerPokemon.getMaxHealth() << std::endl;
		}

		updateBattleState();

		state.playerTurn = !state.playerTurn;
		Utility::waitForEnter();
	}
	handleBattleOutcome();
}

void BattleManager::handleBattleOutcome()
{
	if (state.playerPokemon->isFainted())
	{
		std::cout << state.playerPokemon->getName() << " has fained! you lose the battle" << std::endl;
	}
	else
	{
		std::cout << "you defeated the wild " << state.wildPokemon->getName() << "!" << std::endl;
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
