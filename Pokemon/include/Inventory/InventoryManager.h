#pragma once
#include "Item.h"
#include <vector>

class InventoryManager
{
public:
	InventoryManager();

	void printInventory();
	int getSize();
	void addItem(const Item& item);
	void useItem(int position);


private:
	std::vector<Item*> itemList;
};