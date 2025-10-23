#pragma once
#include "../Pokemon.hpp"

class Pidgey : public Pokemon
{
public:
	Pidgey();

	Pokemon* clone() override;
private:
	void attack(Move selectedMove, Pokemon* target);
};