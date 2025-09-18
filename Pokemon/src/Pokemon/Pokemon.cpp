#pragma once
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Battle/Move.h"

Pokemon::Pokemon()
{
	name = "Pikachu";
	type = PokemonType::ELECTRIC;
	health = 120;
	maxHealth = health;
}

Pokemon::Pokemon(std::string Iname, PokemonType Itype, int Ihealth, std::vector<Move> moveList)
{
	name = Iname;
	type = Itype;
	health = Ihealth;
	maxHealth = Ihealth;
	moves = moveList;
}

bool Pokemon::isFainted()
{
	return health <= 0;
}

void Pokemon::takeDamage(int damage)
{
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
}

void Pokemon::heal()
{
	health = maxHealth;
}

void Pokemon::heal(int amount)
{
	health += amount;
	if (health > maxHealth)
	{
		health = maxHealth;
	}
}

std::string Pokemon::getName()
{
	return name;
}

int Pokemon::getHealth()
{
	return health;
}

int Pokemon::getMaxHealth()
{
	return maxHealth;
}

void Pokemon::selectAndUseMove(Pokemon* target)
{
	printAvailableMoves();

	int choice = selectMove();
	Move selectedMove = moves[choice - 1];

	useMove(selectedMove, target);
}

void Pokemon::printAvailableMoves()
{
	std::cout << name << "'s available moves" << std::endl;

	for (size_t i = 0; i < moves.size(); i++)
	{
		std::cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")" << std::endl;
	}
}

int Pokemon::selectMove()
{
	int choice;
	std::cout << "Choose a move:";
	std::cin >> choice;

	while (choice < 1 || choice > static_cast<int>(moves.size()))
	{
		std::cout << "Invalid choice. try again" << std::endl;
		std::cin >> choice;
	}

	return choice;
}

void Pokemon::useMove(Move selectedMove, Pokemon* target)
{
	std::cout << name << " used " << selectedMove.name << std::endl;
	attack(selectedMove, target);

	Utility::waitForEnter();
}

void Pokemon::attack(Move selectedMove, Pokemon* target)
{
	target->takeDamage(selectedMove.power);
}

