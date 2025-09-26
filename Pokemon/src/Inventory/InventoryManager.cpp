#include "../../include/Inventory/InventoryManager.h"
#include <iostream>
#include "../../include/Utility/Utility.h"


/*
	How the inventory system works is I have a predetermined set of items 
	and whenever their quantity isnt 0 the player can see and use them. 
	whenever the quantity of an item is 0 then it doesnt get printed as 
	part of the player inventory and doesnt get saved to the indexMap so
	the player can never access those items. 
*/
InventoryManager::InventoryManager()
{
	itemList.push_back(new Item("small magic potion", ItemType::POTION));
}

InventoryManager::~InventoryManager()
{
	for (Item* item : itemList)
	{
		delete item;
	}
}

void InventoryManager::printInventory()
{
	indexMap.clear();
	int itemNumber = 1;
	for (int i = 0; i < itemList.size(); i++)
	{
		if (itemList[i]->getQuantity() > 0)
		{
			std::cout << itemNumber << ". " << itemList[i]->getName() << " - " << itemList[i]->getQuantity() << std::endl;
			indexMap.push_back(i);
			itemNumber++;
		}
	}
	std::cout << itemNumber << ". go back" << std::endl;
}

int InventoryManager::getSize()
{
	return static_cast<int>(itemList.size());
}

void InventoryManager::addItem(Item& item)
{
	for (Item* Oitem : itemList)
	{
		if (*Oitem == item)
		{
			Oitem->increaseQuantity();
		}
	}
}

void InventoryManager::useItem(int position)
{
	std::cout << itemList[position]->getName() << " was used" << std::endl;
	//implement the effects of the item
	Utility::waitForEnter();
	itemList[position]->decreaseQuantity();
}

std::vector<int> InventoryManager::getIndexMap()
{
	return indexMap;
}
