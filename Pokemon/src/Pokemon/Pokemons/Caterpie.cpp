#pragma once
#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Caterpie::Caterpie()
	: Pokemon("Caterpie", PokemonType::BUG, 100, {
		Move("STICKY WEB", 25),
		Move("TACKLE", 10)
		}) {
};

void Caterpie::attack(Move selectedMove, Pokemon* target)
{
	Pokemon::attack(selectedMove, target);

	if (selectedMove.name == "STICKY WEB")
	{
		moves[0].power -= 2;
		std::cout << name << " became weaker " << std::endl;
	}
}