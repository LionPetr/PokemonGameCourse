#pragma once
#include <iostream>
#include <string>

enum class PokemonType {
	FIRE,
	GRASS,
	WATER,
	ELECTRIC,
	NORMAL // Added for the default constructor
};

class Pokemon
{
public:
	std::string name;
	PokemonType type;
	int health;

	Pokemon();
	Pokemon(std::string Iname, PokemonType Itype, int Ihealth);

	void attack();

};