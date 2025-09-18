#pragma once
#include "../Pokemon.hpp"

class Zubat : public Pokemon
{
public:
	Zubat();
private:
	void attack(Move selectedMove, Pokemon* target);
};