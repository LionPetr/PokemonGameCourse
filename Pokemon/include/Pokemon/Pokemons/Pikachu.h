#pragma once
#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
public:
	Pikachu();
private:
	void attack(Pokemon* target) override;

	void thunderShock(Pokemon* target);
};