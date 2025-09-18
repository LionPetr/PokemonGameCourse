#pragma once
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Bulbasaur::Bulbasaur()
	: Pokemon("Bulbasaur", PokemonType::GRASS, 110, {
		Move("VINE WHIP", 25),
		Move("TACKLE", 10)
		}) {
}

void Bulbasaur::attack(Move selectedMove, Pokemon* target)
{
	Pokemon::attack(selectedMove, target);

	if (selectedMove.name == "VINE WHIP")
	{
		int secondHitChance = rand() % 2;

		if (secondHitChance == 1)
		{
			Pokemon::attack(selectedMove, target);
			std::cout << name << " hits again with a second " << selectedMove.name << "!" << std::endl;
		}
		else
		{
			std::cout << target->getName() << "dodged the second hit!" << std::endl;
		}
	}
}