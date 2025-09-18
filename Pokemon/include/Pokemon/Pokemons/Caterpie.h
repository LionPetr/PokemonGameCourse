#pragma once
#include "../Pokemon.hpp"

class Caterpie : public Pokemon
{
	Caterpie();
private:
	void bugBite(Pokemon& target);
};