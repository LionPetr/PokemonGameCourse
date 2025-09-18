#pragma once
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Bulbasaur::Bulbasaur()
	: Pokemon("Bulbasaur", PokemonType::GRASS, 110, {
		Move("VINE WHIP", 25),
		Move("TACKLE", 10)
		}) {
}

void Bulbasaur::attack(Pokemon* target)
{
	selectAndUseMove(target);
}