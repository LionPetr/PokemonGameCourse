#pragma once
#include "../Pokemon.hpp"

class Bulbasaur : public Pokemon
{
public:
	Bulbasaur();
private:
	void attack(Move selectedMove, Pokemon* target);
};
