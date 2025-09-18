#pragma once
#include "../Pokemon.hpp"

class Bulbasaur : public Pokemon
{
	Bulbasaur();
private:
	void vineWhip(Pokemon& target);
};
