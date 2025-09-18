#pragma once
#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.h"
#include "iostream"

Player::Player()
{
	name = "Trainer";
	chosenPokemon = Pokemon();
}

Player::Player(const std::string& p_name, const Pokemon& p_chosenPokemon)
{
	name = p_name;
	chosenPokemon = p_chosenPokemon;
}


void Player::choosePokemon(int choice)
{
	switch (PokemonChoice(choice - 1))
	{
	case PokemonChoice::Balbasour:
		chosenPokemon = Pokemon("Balbasour", PokemonType::GRASS, 100, 20);
		break;
	case PokemonChoice::Charmander:
		chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 80, 30);
		break;
	case PokemonChoice::Squirtle:
		chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 25);
		break;
	default:
		chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 110, 15);
		std::cout << "Invalid choice, chose Pickachu" << std::endl;
		break;
	}
	std::cout << "You chose " << chosenPokemon.getName() << std::endl;
}