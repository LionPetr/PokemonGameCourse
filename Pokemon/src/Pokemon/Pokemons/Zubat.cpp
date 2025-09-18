#pragma once
#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 10) {};

void Zubat::attack(Pokemon* target)
{
	supersonic(target);
}

void Zubat::supersonic(Pokemon* target)
{
	std::cout << name << " uses Supersonic on " << target->getName() << "!" << std::endl;
	target->TakeDamange(20);
}