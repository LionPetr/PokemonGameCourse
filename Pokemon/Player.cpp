#pragma once
#include "Player.hpp"

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
		chosenPokemon = Pokemon("Balbasour", PokemonType::GRASS, 100);
		break;
	case PokemonChoice::Charmander:
		chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 80);
		break;
	case PokemonChoice::Squirtle:
		chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
		break;
	default:
		chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 110);
		std::cout << "Invalid choice, chose Pickachu" << std::endl;
		break;
	}
	std::cout << "You chose " << chosenPokemon.name << std::endl;
}