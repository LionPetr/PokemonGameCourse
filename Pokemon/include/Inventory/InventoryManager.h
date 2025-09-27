#pragma once
#include "HealingPotion.h"
#include <vector>

class InventoryManager
{
public:
	InventoryManager();
	~InventoryManager();

	void printInventory();
	int getSize();
	void addItem(Item& item);
	void useItem(int position, Pokemon* target);
	std::vector<int> getIndexMap();


private:
	std::vector<Item*> itemList;
	std::vector<int> indexMap;
};