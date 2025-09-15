#pragma once
#include <iostream>
#include <string>

enum class PokemonType;

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