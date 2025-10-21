#pragma once
#include "HealingPotion.h"
#include "DamagePotion.h"
#include "StunPotion.h"
#include "Pokeball.h"
#include <vector>
#include "../Battle/BattleState.h"

class InventoryManager
{
public:
	InventoryManager();
	~InventoryManager();

	void printInventory();
	int getSize();
	void addItem(Item& item);
	void useItem(int position, BattleState& state);
	std::vector<int> getIndexMap();


private:
	std::vector<Item*> itemList;
	std::vector<int> indexMap;
};