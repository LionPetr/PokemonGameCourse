#pragma once
#include "../Pokemon.hpp"

class Caterpie : public Pokemon
{
	Caterpie();
private:
	void attack(Pokemon* target) override;
	void bugBite(Pokemon* target);
};