#pragma once
#include "../Pokemon.hpp"

class Zubat : public Pokemon
{
	Zubat();
private:
	void attack(Pokemon* target) override;
	void supersonic(Pokemon* target);
};