#pragma once
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Charmander::Charmander()
	: Pokemon("Charmander", PokemonType::FIRE, 100, {
		Move("FLAME BURST", 25),
		Move("TACKLE", 10)
		}) {
};

void Charmander::attack(Pokemon* target)
{
	selectAndUseMove(target);
}
