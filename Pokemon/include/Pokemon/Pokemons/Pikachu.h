#pragma once
#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
public:
	Pikachu();
private:
	void attack(Move selectedMove, Pokemon* target);
};