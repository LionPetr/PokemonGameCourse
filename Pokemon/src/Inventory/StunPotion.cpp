#include "../../include/Inventory/StunPotion.h"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Battle/BattleEffects/ParalyzedEffect.h"

StunPotion::StunPotion() : Item("Potion", ItemType::POTION, ItemTarget::ENEMY) {}

StunPotion::StunPotion(std::string Iname) : Item(Iname, ItemType::POTION, ItemTarget::ENEMY) {}

void StunPotion::useItem(Pokemon* target)
{
	effect = new ParalyzedEffect();
	target->setEffect(effect);
	effect->applyEffect(target, 1);
}
