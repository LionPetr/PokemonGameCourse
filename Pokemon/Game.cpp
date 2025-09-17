#pragma once
#include "Game.h"
#include "Utility.h"
#include "Player.hpp"
#include "Grass.h"
#include "PokemonType.hpp"
#include "WildEncounterManager.h"
#include "BattleManager.h"

Game::Game()
{
	forestGrass =
	{
		"Forest",
		{{"Pidgey", PokemonType::NORMAL, 40}, {"Caterpie", PokemonType::BUG, 35}},
		70
	};
}

void Game::gameLoop(Player& player)
{
	bool keepPlaying = true;
	int choice;

	while (keepPlaying)
	{
		Utility::clearConsole();
		std::cout << "What would you like to do next - " << player.name << std::endl;
		std::cout << "1. Battle Wild Pokemon" << std::endl;
		std::cout << "2. Visit PokeCenter" << std::endl;
		std::cout << "3. Challenge Gyms" << std::endl;
		std::cout << "4. Enter Pokemon League" << std::endl;
		std::cout << "5. Quit" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (choice)
		{
		case 1:
		{
			WildEncounterManager encounterManager;
			Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
			cout << "A wild " << encounteredPokemon.name << " appeared!\n";
			BattleManager battleManager;
			battleManager.startBattle(player, encounteredPokemon);

			break;
		}
		case 2:
			std::cout << "You visited the PokeCenter" << std::endl;
			player.chosenPokemon.heal();
			std::cout << player.chosenPokemon.name << "'s health is fully restored" << std::endl;
			break;
		case 3:
			std::cout << "hit the actual gym first" << std::endl;
			break;
		case 4:
			std::cout << "its out of your league" << std::endl;
			break;
		case 5:
			std::cout << "Are you sure you want to quit?" << std::endl;
			char quitChoice;
			std::cin >> quitChoice;
			if (quitChoice == 'y' || quitChoice == 'Y')
			{
				keepPlaying = false;
			}

			break;
		default:
			std::cout << "select one of the choices provided" << std::endl;
			break;

		}
		Utility::waitForEnter();


	}
	std::cout << "bye bye" << std::endl;
}


