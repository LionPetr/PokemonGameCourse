#pragma once
#include "../Pokemon.hpp"

class Squirtle : public Pokemon
{
	Squirtle();
private:
	void waterSplash(Pokemon& target);
}; 
