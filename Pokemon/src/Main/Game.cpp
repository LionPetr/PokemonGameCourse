#pragma once
#include "../../include/Main/Game.h"
#include "../../include/Utility/Utility.h"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/Grass.h"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Battle/WildEncounterManager.h"
#include "../../include/Battle/BattleManager.h"

Game::Game()
{
	forestGrass =
	{
		"Forest",
		{{"Pidgey", PokemonType::NORMAL, 40, 20}, {"Caterpie", PokemonType::BUG, 35, 20}},
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
			cout << "A wild " << encounteredPokemon.getName() << " appeared!\n";
			BattleManager battleManager;
			battleManager.startBattle(player, encounteredPokemon);

			break;
		}
		case 2:
			std::cout << "You visited the PokeCenter" << std::endl;
			player.chosenPokemon.heal();
			std::cout << player.chosenPokemon.getName() << "'s health is fully restored" << std::endl;
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


