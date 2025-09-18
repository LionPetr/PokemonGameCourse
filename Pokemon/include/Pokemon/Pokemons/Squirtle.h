#pragma once
#include "../Pokemon.hpp"

class Squirtle : public Pokemon
{
public:
	Squirtle();
private:
	void attack(Move selectedMove, Pokemon* target);
};
