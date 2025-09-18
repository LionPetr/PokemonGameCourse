#pragma once
#include "../Pokemon.hpp"

class Pikachu : public Pokemon
{
	Pikachu();
private:
	void thunderShock(Pokemon& target);
};