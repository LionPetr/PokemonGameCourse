#pragma once
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {};

void Pikachu::thunderShock(Pokemon& target)
{
	std::cout << name << " uses Thunder Shock on " << target.name << "!" << std::endl;
	target.TakeDamange(20);
}