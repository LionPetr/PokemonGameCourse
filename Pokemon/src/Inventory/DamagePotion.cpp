#include "../../include/Inventory/DamagePotion.h"
#include "../../include/Pokemon/Pokemon.hpp"

DamagePotion::DamagePotion() : Item("Potion", ItemType::POTION) {}

DamagePotion::DamagePotion(std::string Iname) : Item(Iname, ItemType::POTION) {}

DamagePotion::DamagePotion(std::string Iname, int IDamageAmount) : Item(Iname, ItemType::POTION, ItemTarget::ENEMY)
{
	damageAmount = IDamageAmount;
}

void DamagePotion::useItem(Pokemon* target)
{
	std::cout <<  target->getName() << " takes " << damageAmount << " damage!" << std::endl;
	target->takeDamage(damageAmount);
	std::cout << target->getName() << " is at " << target->getHealth() << "/" << target->getMaxHealth() << " health" << std::endl;
}
