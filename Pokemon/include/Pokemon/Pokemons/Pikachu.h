#pragma once
#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
	Pikachu();

	void thunderShock(Pokemon& target);
};