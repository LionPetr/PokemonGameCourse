#pragma once
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {};

void Charmander::flameBurst(Pokemon& target)
{
	std::cout << getName() << " uses Flame Burst on " << target.getName() << "!" << std::endl;
	target.TakeDamange(20);
}