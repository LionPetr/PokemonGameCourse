#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../../include/Utility/Utility.h"
#include "../../include/Battle/Move.h"

struct Move;

enum class PokemonType;

class Pokemon
{
protected:
	std::string name;
	PokemonType type;
	int health;
	int maxHealth;
	std::vector<Move> moves;

public:
	Pokemon();
	Pokemon(std::string Iname, PokemonType Itype, int Ihealth, std::vector<Move> moveList);

	bool isFainted();
	void takeDamage(int damage);
	virtual void attack(Pokemon* target) = 0;
	void attack(Move selectedMove, Pokemon* target);
	void heal();
	std::string getName();
	int getHealth();
	int getMaxHealth();
	void selectAndUseMove(Pokemon* target);

protected:

	void printAvailableMoves();
	int selectMove();
	void useMove(Move selectedMove, Pokemon* target);



};