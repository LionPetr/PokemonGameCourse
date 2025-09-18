#pragma once
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Pikachu::Pikachu()
	: Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
			Move("THUNDER SHOCK", 25),
			Move("TACKLE", 10)
		}) {
};

void Pikachu::attack(Pokemon* target)
{
	selectAndUseMove(target);
}

