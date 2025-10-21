#pragma once
#include "Item.h"

class ParalyzedEffect; 

class StunPotion : public Item
{
public:
	StunPotion();
	StunPotion(std::string Iname);

	void useItem(Pokemon* target) override;

private:
	ParalyzedEffect* effect;
};

