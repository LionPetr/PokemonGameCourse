#pragma once
#include "../Pokemon.hpp"

class Pidgey : public Pokemon
{
public:
	Pidgey();
private:
	void attack(Move selectedMove, Pokemon* target);
};