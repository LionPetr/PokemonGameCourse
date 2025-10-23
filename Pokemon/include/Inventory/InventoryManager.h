#pragma once
#include "HealingPotion.h"
#include "DamagePotion.h"
#include "StunPotion.h"
#include "Pokeball.h"
#include <vector>
#include "../Battle/BattleState.h"
#include "../Utility/EventBus.h"
#include "../Character/Player/LevelUpEvent.h"

class InventoryManager
{
public:
	InventoryManager(EventBus& bus);
	~InventoryManager();

	void printInventory();
	int getSize();
	void addItem(Item& item);
	void useItem(int position, BattleState& state);
	std::vector<int> getIndexMap();

	void onLevelUp(const LevelUpEvent& e);


private:
	std::vector<Item*> itemList;
	std::vector<int> indexMap;
};