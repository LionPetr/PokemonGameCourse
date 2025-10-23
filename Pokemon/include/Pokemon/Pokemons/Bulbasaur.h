#pragma once
#include "../Pokemon.hpp"

class Bulbasaur : public Pokemon
{
public:
	Bulbasaur();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};
