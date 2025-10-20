#pragma once
#include "Item.h"


class HealingPotion : public Item
{
public:
	HealingPotion();
	HealingPotion(std::string Iname);
	HealingPotion(std::string Iname, int IhealingAmount);

	void useItem(Pokemon* target) override;

private:
	int healingAmount = 5;


};