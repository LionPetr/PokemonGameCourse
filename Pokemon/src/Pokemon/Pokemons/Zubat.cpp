#pragma once
#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Zubat::Zubat() 
		: Pokemon("Zubat", PokemonType::POISON, 100, {
			Move("BUG BITE", 25),
			Move("TACKLE", 10)
			}) {};

void Zubat::attack(Pokemon* target)
{
	selectAndUseMove(target);
}

