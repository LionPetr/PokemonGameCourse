#pragma once
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {};

void Charmander::attack(Pokemon* target)
{
	flameBurst(target);
}

void Charmander::flameBurst(Pokemon* target)
{
	std::cout << name << " uses Flame Burst on " << target->getName() << "!" << std::endl;
	target->TakeDamange(20);
}