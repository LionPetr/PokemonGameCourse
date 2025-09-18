#pragma once
#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Pidgey::Pidgey()
	: Pokemon("Pidgey", PokemonType::NORMAL, 100, {
		Move("WING ATTACK", 25),
		Move("TACKLE", 10)
		}) {
};


void Pidgey::attack(Pokemon* target)
{
	selectAndUseMove(target);
}

