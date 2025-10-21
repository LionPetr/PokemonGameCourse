#pragma once
#include "../Pokemon.hpp"

class Charmander : public Pokemon
{
public:
	Charmander();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};