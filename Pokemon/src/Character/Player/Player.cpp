#pragma once
#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.h"

#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/Pokemons/Pikachu.h"


#include "iostream"

Player::Player()
{
	name = "Trainer";
}

Player::Player(const std::string& p_name)
{
	name = p_name;
}

Player::~Player()
{
	if (chosenPokemon != NULL)
	{
		delete(chosenPokemon);
	}
}


void Player::choosePokemon(int choice)
{
	switch (PokemonChoice(choice - 1))
	{
	case PokemonChoice::Balbasour:
		chosenPokemon = new Bulbasaur();
		break;
	case PokemonChoice::Charmander:
		chosenPokemon = new Charmander();
		break;
	case PokemonChoice::Squirtle:
		chosenPokemon = new Squirtle();
		break;
	default:
		chosenPokemon = new Pikachu();
		std::cout << "Invalid choice, chose Pickachu" << std::endl;
		break;
	}
	std::cout << "You chose " << chosenPokemon->getName() << std::endl;
}