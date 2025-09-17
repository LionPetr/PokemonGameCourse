#pragma once
#include "PokemonType.hpp"
#include "Pokemon.hpp"

Pokemon::Pokemon()
{
	name = "Pikachu";
	type = PokemonType::ELECTRIC;
	health = 120;
	maxHealth = health;
}

Pokemon::Pokemon(std::string Iname, PokemonType Itype, int Ihealth)
{
	name = Iname;
	type = Itype;
	health = Ihealth;
	maxHealth = Ihealth;
}

bool Pokemon::isFainted()
{
	return health <= 0;
}

void Pokemon::TakeDamange(int damage)
{
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
}

void Pokemon::attack(Pokemon& target)
{
	int damage = 10;;
	std::cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
	target.TakeDamange(damage);
	std::cout << target.name << " has: " << target.health << "/" << target.maxHealth << " health left\n";
}