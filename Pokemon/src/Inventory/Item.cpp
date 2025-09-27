#include "../../include/Inventory/Item.h"
#include <iostream>
Item::Item()
{
	name = "item";
	
}

Item::Item(std::string Iname)
{
	name = Iname;
}

Item::Item(std::string Iname, ItemType IitemType)
{
	name = Iname;
	itemType = IitemType;
}

std::string Item::getName()
{
	return name;
}

int Item::getQuantity()
{
	return itemQuantity;
}

void Item::increaseQuantity()
{
	itemQuantity++;
}

void Item::decreaseQuantity()
{
	itemQuantity--;
}



void Item::useItem(Pokemon* target)
{
	std::cout << "used item" << std::endl;
}

bool Item::operator==(const Item& other)
{
	return name == other.name;
}

