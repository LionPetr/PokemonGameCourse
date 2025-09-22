#include "../../include/Inventory/InventoryManager.h"
#include <iostream>
#include "../../include/Utility/Utility.h"

InventoryManager::InventoryManager()
{
	itemList.push_back(new Item("small magic potion", ItemType::POTION));
}

void InventoryManager::printInventory()
{
	for (int i = 0; i < itemList.size(); i++)
	{
		std::cout << i + 1 << ". " << itemList[i]->getName() << " - " << itemList[i]->getQuantity() << std::endl;
	}
	std::cout << itemList.size() + 1 << ". go back" << std::endl;
}

int InventoryManager::getSize()
{
	return static_cast<int>(itemList.size());
}

void InventoryManager::useItem(int position)
{
	std::cout << itemList[position]->getName() << " was used" << std::endl;
	Utility::waitForEnter();
	itemList[position]->decreaseQuantity();
	if (itemList[position]->getQuantity() == 0)
	{
		delete itemList[position];
		itemList.erase(itemList.begin() + position);
	}
}
