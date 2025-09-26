#pragma once
#include <string>
#include "ItemType.h"

class Item
{
public:
	Item();
	Item(std::string Iname);
	Item(std::string Iname, ItemType IitemType);

	virtual std::string getName();
	int getQuantity();
	void increaseQuantity();
	void decreaseQuantity();

	bool operator==(const Item& other);
	

private:
	std::string name;
	ItemType itemType;
	int itemQuantity = 1;

};