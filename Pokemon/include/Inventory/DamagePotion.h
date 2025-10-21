#pragma once
#include "Item.h"

class DamagePotion : public Item
{
public:
	DamagePotion();
	DamagePotion(std::string Iname);
	DamagePotion(std::string Iname, int IDamageAmount);

	void useItem(Pokemon* target) override;

private:
	int damageAmount = 5;


};
