#pragma once
#include "../Pokemon.hpp"

class Squirtle : public Pokemon
{
public:
	Squirtle();
private:
	void attack(Pokemon* target) override;
	void waterSplash(Pokemon* target);
}; 
