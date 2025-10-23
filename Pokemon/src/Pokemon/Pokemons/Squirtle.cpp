#pragma once
#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Squirtle::Squirtle()
	: Pokemon("Squirtle", PokemonType::WATER, 100, {
		Move("RAPID SPIN", 8),
		Move("TACKLE", 10)
		}) {
}
Pokemon* Squirtle::clone()
{
	return new Squirtle();
}
;

void Squirtle::attack(Move selectedMove, Pokemon* target)
{
	if (selectedMove.name == "RAPID SPIN")
	{
		Pokemon::attack(selectedMove, target);
		Pokemon::attack(selectedMove, target);
		Pokemon::attack(selectedMove, target);
	}
}

