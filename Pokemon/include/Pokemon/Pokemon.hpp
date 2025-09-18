#pragma once
#include <iostream>
#include <string>

enum class PokemonType;

class Pokemon
{
protected:
	std::string name;
	PokemonType type;
	int health;
	int maxHealth;
	int attackPower;
public:
	Pokemon();
	Pokemon(std::string Iname, PokemonType Itype, int Ihealth, int IattackPower);

	bool isFainted();
	void TakeDamange(int damage);
	void attack(Pokemon& target);
	void heal();
	std::string getName();

};