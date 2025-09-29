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

Item::Item(std::string Iname, ItemType IitemType, ItemTarget ItargetType)
{
	name = Iname;
	itemType = IitemType;
	targetType = ItargetType;
}

std::string Item::getName()
{
	return name;
}

ItemType& Item::getItemType()
{
	return itemType;
}

ItemTarget& Item::getItemTarget()
{
	return targetType;
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

