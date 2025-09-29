#pragma once
#include "Item.h"

class Pokeball : public Item
{
public: 
	Pokeball();
	Pokeball(std::string Iname);
	Pokeball(std::string Iname, int Ipower);

	void useItem(Pokemon* target);
private:
	int power = 1;
};