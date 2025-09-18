#pragma once
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, 10) {};

void Bulbasaur::vineWhip(Pokemon& target)
{
	std::cout << name << " uses Bug Bite on " << target.getName() << "!" << std::endl;
	target.TakeDamange(20);
}