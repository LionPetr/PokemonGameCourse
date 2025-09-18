#pragma once
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Squirtle::Squirtle()
	: Pokemon("Squirtle", PokemonType::WATER, 100, {
		Move("WATER SPLASH", 25),
		Move("TACKLE", 10)
		}) {
};

void Squirtle::attack(Pokemon* target)
{
	selectAndUseMove(target);
}

