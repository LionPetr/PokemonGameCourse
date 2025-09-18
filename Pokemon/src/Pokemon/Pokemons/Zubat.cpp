#pragma once
#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Zubat::Zubat()
	: Pokemon("Zubat", PokemonType::POISON, 100, {
		Move("LEECH LIFE", 25),
		Move("TACKLE", 10)
		}) {
};

void Zubat::attack(Move selectedMove, Pokemon* target)
{
	Pokemon::attack(selectedMove, target);

	if (selectedMove.name == "LEECH LIFE")
	{
		heal(selectedMove.power);
		std::cout << name << " healed himself for " << selectedMove.power << " health" << std::endl;
	}
}

