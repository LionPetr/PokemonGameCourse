#pragma once
#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
	Pikachu();
private:
	void attack(Pokemon* target) override;

	void thunderShock(Pokemon* target);
};