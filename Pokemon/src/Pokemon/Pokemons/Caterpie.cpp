#pragma once
#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Caterpie::Caterpie() 
		: Pokemon("Caterpie", PokemonType::BUG, 100,{
			Move("BUG BITE", 25),
			Move("TACKLE", 10) 
			}){};

void Caterpie::attack(Pokemon* target)
{
	selectAndUseMove(target);
}