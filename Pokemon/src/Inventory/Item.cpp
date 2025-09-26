#include "../../include/Inventory/Item.h"

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

bool Item::operator==(const Item& other)
{
	return name == other.name;
}

