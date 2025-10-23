#pragma once
#include "../Pokemon.hpp"

class Squirtle : public Pokemon
{
public:
	Squirtle();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};
