#include "../../include/Inventory/Pokeball.h"
#include "../../include/Pokemon/Pokemon.hpp"

Pokeball::Pokeball() : Item("Pokeball", ItemType::POKEBALL) {}

Pokeball::Pokeball(std::string Iname) : Item(Iname, ItemType::POKEBALL){}

Pokeball::Pokeball(std::string Iname, int Ipower) : Item(Iname, ItemType::POKEBALL, ItemTarget::ENEMY) 
{
	power = Ipower;
}

void Pokeball::useItem(Pokemon* target)
{
	std::cout << "You threw the " << getName() << " at " << target->getName() << std::endl;
}
