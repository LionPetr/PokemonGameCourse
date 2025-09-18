#pragma once
#include "../Pokemon.hpp"

class Charmander : public Pokemon
{
	Charmander();
private:
	void attack(Pokemon* target) override;

	void flameBurst(Pokemon* target);
};