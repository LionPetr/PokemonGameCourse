#pragma once
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, 10) {};

void Bulbasaur::attack(Pokemon* target)
{
	vineWhip(target);
}

void Bulbasaur::vineWhip(Pokemon* target)
{
	std::cout << name << " uses Vine Whip on " << target->getName() << "!" << std::endl;
	target->TakeDamange(20);
}