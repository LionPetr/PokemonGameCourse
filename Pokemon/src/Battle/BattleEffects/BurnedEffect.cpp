#pragma once
#include "../../../include/Battle/BattleEffects/BurnedEffect.h"
#include "../../../include/Battle/BattleEffects/StatusEffectType.h"

BurnedEffect::BurnedEffect()
{
	damage = 2;
}

BurnedEffect::BurnedEffect(int Idamage)
{
	damage = Idamage;
}

void BurnedEffect::applyEffect(Pokemon* target)
{
	turnsleft = (rand() % 3) + 1; //either 1, 2, or 3 turns 
	std::cout << target->getName() << " is now burning for " << turnsleft << " turns" << std::endl;
}

std::string BurnedEffect::getEffectName()
{
	return "Burned";
}

bool BurnedEffect::turnEndEffect(Pokemon* target)
{
	if (turnsleft <= 0)
	{
		clearEffect(target);
		return true;
	}
	turnsleft -= 1;

	target->takeDamage(damage);

	std::cout << target->getName() << " takes " << damage << " burn damage!" << std::endl;
	return true;
}

void BurnedEffect::clearEffect(Pokemon* target)
{
	std::cout << target->getName() << " is no longer burning" << std::endl;
	target->clearEffect();
}
