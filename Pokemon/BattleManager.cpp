#pragma once
#include "BattleManager.h"


BattleManager::BattleManager()
{
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);
		if (!wildPokemon.isFainted())
		{
			wildPokemon.attack(playerPokemon);
		}
	}

	if (playerPokemon.isFainted())
	{
		std::cout << playerPokemon.name << " has fained! You lose the battle." << std::endl;
	}
	else
	{
		std::cout << "You defeated the wild " << wildPokemon.name << std::endl;
	}
}
