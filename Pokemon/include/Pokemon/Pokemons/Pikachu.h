#pragma once
#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
public:
	Pikachu();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};