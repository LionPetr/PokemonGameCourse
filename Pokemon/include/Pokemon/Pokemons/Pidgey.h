#pragma once
#include "../Pokemon.hpp"

class Pidgey : public Pokemon
{
	Pidgey();
private:
	void wingAttack(Pokemon& target);
};