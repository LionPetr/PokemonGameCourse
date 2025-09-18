#pragma once
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Pikachu::Pikachu()
	: Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
			Move("THUNDER BOLT", 25),
			Move("TACKLE", 10)
		}) {
};

void Pikachu::attack(Move selectedMove, Pokemon* target)
{
	if (selectedMove.name == "THUNDER BOLT")
	{
		if (rand() % 4 != 1)
		{
			Pokemon::attack(selectedMove, target);
		}
	}
	else
	{
		Pokemon::attack(selectedMove, target);
	}
}

