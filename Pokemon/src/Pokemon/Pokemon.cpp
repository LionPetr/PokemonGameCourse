#pragma once
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

Pokemon::Pokemon()
{
	name = "Pikachu";
	type = PokemonType::ELECTRIC;
	health = 120;
	maxHealth = health;
	attackPower = 10;
}

Pokemon::Pokemon(std::string Iname, PokemonType Itype, int Ihealth, int IattackPower)
{
	name = Iname;
	type = Itype;
	health = Ihealth;
	maxHealth = Ihealth;
	attackPower = IattackPower;
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
	int damage = attackPower;
	std::cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
	target.TakeDamange(damage);
	std::cout << target.name << " has: " << target.health << "/" << target.maxHealth << " health left\n";
}

void Pokemon::heal()
{
	health = maxHealth;
}

std::string Pokemon::getName()
{
	return name;
}
