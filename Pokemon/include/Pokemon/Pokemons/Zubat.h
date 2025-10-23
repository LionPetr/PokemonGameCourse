#pragma once
#include "../Pokemon.hpp"

class Zubat : public Pokemon
{
public:
	Zubat();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};