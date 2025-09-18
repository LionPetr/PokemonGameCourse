#pragma once
#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Pidgey::Pidgey()
	: Pokemon("Pidgey", PokemonType::NORMAL, 100, {
		Move("GUST", 25),
		Move("TACKLE", 10)
		}) {
};


void Pidgey::attack(Move selectedMove, Pokemon* target)
{
	if (selectedMove.name == "GUST")
	{
		if(rand() % 8 == 0)
		{
			target->takeDamage(target->getHealth());
			std::cout << name << " blew his opponent away" << std::endl;
		}
		else
		{
			Pokemon::attack(selectedMove, target);
		}
	}
	else
	{
		Pokemon::attack(selectedMove, target);
	}
}

