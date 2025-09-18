#pragma once
#include "../Pokemon.hpp"

class Pidgey : public Pokemon
{
	Pidgey();
private:
	void attack(Pokemon* target) override;

	void wingAttack(Pokemon* target);
};