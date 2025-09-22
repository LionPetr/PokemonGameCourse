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
	battle(player, wildPokemon);
}

void BattleManager::battle(Player& player, Pokemon& wildPokemon)
{
	while (state.battleOnGoing)
	{
		Utility::clearConsole();
		if (state.playerTurn)
		{
			bool actionUsed = false;
			
			while (!actionUsed)
			{
				actionUsed = handleActionChoice(player);
			}


			if(state.playerPokemon->canAttack())
			{
				Utility::clearConsole();
				state.playerPokemon->selectAndUseMove(state.wildPokemon, true);
				std::cout << wildPokemon.getName() << " is at " << wildPokemon.getHealth() << "/" << wildPokemon.getMaxHealth() << std::endl;
			}
		}
		else if(state.wildPokemon->canAttack())
		{
			Utility::clearConsole();
			state.wildPokemon->selectAndUseMove(state.playerPokemon, false);
			std::cout << player.chosenPokemon->getName() << " is at " << player.chosenPokemon->getHealth() << "/" << player.chosenPokemon->getMaxHealth() << std::endl;
		}

		updateBattleState();

		state.playerTurn = !state.playerTurn;
		Utility::waitForEnter();
	}
	handleBattleOutcome();
}

void BattleManager::handleBattle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
}

bool BattleManager::handleActionChoice(Player& player)
{
	Utility::clearConsole();
	std::cout << "It is your turn!" << std::endl;
	std::cout << "1. attack" << std::endl;
	std::cout << "2. use item" << std::endl;
	std::cout << "3. run away" << std::endl;
	std::cout << "Choose your next action: ";
	int choice1;
	std::cin >> choice1;
	Utility::clearInputBuffer();

	while (choice1 < 1 || choice1 > 3)
	{
		std::cout << "Invalid choice, try again: ";
		std::cin >> choice1;
	}
	switch (choice1)
	{
	case 1:
		return true;
	case 2:
		std::cout << "Inventory: " << std::endl;
		player.getInventory().printInventory();
		std::cout << "What Item would you like to use?";
		
		int choice;
		std::cin >> choice;
		Utility::clearInputBuffer();

		while (choice < 1 || choice > player.getInventory().getSize() + 1)
		{
			std::cout << "Invalid choice, try again: ";
			std::cin >> choice;
		}

		if(choice == player.getInventory().getSize() + 1)
		{
			return false;
		}

		player.getInventory().useItem(choice - 1);
		return true;
		break;
	case 3:
		std::cout << "not implemented yet" << std::endl;
		Utility::waitForEnter();
		return false;
		break;
	default:
		std::cout << "handleActionChoice bad input" << std::endl;
		return false;
	}
	return false;
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
