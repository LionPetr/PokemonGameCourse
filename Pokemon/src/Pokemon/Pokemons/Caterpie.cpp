#pragma once
#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {};

void Caterpie::attack(Pokemon* target)
{
	bugBite(target);
}

void Caterpie::bugBite(Pokemon* target)
{
	std::cout << name << " uses Bug Bite on " << target->getName() << "!" << std::endl;
	target->TakeDamange(20);
}