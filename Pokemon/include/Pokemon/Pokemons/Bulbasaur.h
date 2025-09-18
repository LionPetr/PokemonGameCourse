#pragma once
#include "../Pokemon.hpp"

class Bulbasaur : public Pokemon
{
	Bulbasaur();
private:
	void attack(Pokemon* target) override;

	void vineWhip(Pokemon* target);
};
