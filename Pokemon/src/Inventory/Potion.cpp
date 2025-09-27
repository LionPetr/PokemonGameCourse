#include "../../include/Inventory/HealingPotion.h"
#include "../../include/Pokemon/Pokemon.hpp"

HealingPotion::HealingPotion() : Item("Potion", ItemType::POTION) {}

HealingPotion::HealingPotion(std::string Iname) : Item(Iname, ItemType::POTION) {}

HealingPotion::HealingPotion(std::string Iname, int IhealingAmount) : Item(Iname, ItemType::POTION)
{
	healingAmount = IhealingAmount;
}

void HealingPotion::useItem(Pokemon* target)
{
	std::cout << "healing potion heals " << target->getName() << " for " << healingAmount << " hp" << std::endl;
	target->heal(healingAmount);
}