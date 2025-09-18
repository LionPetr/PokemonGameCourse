#pragma once
#include "../Pokemon.hpp"

class Bulbasaur : public Pokemon
{
public:
	Bulbasaur();
private:
	void attack(Pokemon* target) override;

	void vineWhip(Pokemon* target);
};
