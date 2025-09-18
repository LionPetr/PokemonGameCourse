#pragma once
#include "../Pokemon.hpp"

class Caterpie : public Pokemon
{
public:
	Caterpie();
private:
	void attack(Pokemon* target) override;
	void bugBite(Pokemon* target);
};