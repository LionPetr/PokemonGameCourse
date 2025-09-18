#pragma once
#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {};

void Pidgey::wingAttack(Pokemon& target)
{
	std::cout << name << " uses Wing Attack on " << target.getName() << "!" << std::endl;
	target.TakeDamange(20);
}