#pragma once
#include <string>
#include "ItemType.h"
#include <iostream>

class Pokemon;

enum class ItemTarget
{
	SELF,
	ENEMY
};

class Item
{
public:
	Item();
	Item(std::string Iname);
	Item(std::string Iname, ItemType IitemType);
	Item(std::string Iname, ItemType IitemType, ItemTarget ItargetType);


	std::string getName();
	ItemType& getItemType();
	ItemTarget& getItemTarget();

	int getQuantity();
	void increaseQuantity();
	void decreaseQuantity();
	virtual void useItem(Pokemon* target);

	bool operator==(const Item& other);
	

private:
	std::string name;
	ItemType itemType;
	int itemQuantity = 1;

	ItemTarget targetType;

};