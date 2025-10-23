#pragma once
#include "../Pokemon.hpp"

class Caterpie : public Pokemon
{
public:
	Caterpie();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};