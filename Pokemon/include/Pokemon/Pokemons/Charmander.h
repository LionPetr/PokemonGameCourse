#pragma once
#include "../Pokemon.hpp"

class Charmander : public Pokemon
{
public:
	Charmander();
private:
	void attack(Pokemon* target) override;

};