#pragma once
#include "Pokemon.hpp"

Pokemon::Pokemon()
{
	name = "Pikachu";
	type = PokemonType::ELECTRIC;
	health = 120;
}

Pokemon::Pokemon(std::string Iname, PokemonType Itype, int Ihealth)
{
	name = Iname;
	type = Itype;
	health = Ihealth;
}

void Pokemon::attack()
{
	std::cout << name << " attacks with a powerful move!" << std::endl;
}