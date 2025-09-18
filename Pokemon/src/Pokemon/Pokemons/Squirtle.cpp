#pragma once
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 35) {};

void Squirtle::waterSplash(Pokemon& target)
{
	std::cout << getName() << " uses Bug Bite on " << target.getName() << "!" << std::endl;
	target.TakeDamange(20);
}