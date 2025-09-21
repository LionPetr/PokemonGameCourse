#pragma once
#include "../../../include/Battle/BattleEffects/SleepingEffect.h"
#include "../../../include/Battle/BattleEffects/StatusEffectType.h"

SleepingEffect::SleepingEffect()
{
}

void SleepingEffect::applyEffect(Pokemon* target)
{
	turnsleft = (rand() % 3) + 1; //either 1, 2, or 3 turns 
	std::cout << target->getName() << " is now asleep for " << turnsleft << " turns" << std::endl;
}

std::string SleepingEffect::getEffectName()
{
	return "Sleeping";
}

bool SleepingEffect::turnEndEffect(Pokemon* target)
{
	if (turnsleft <= 0)
	{
		clearEffect(target);
		return true;
	}
	turnsleft -= 1;

	if (rand() % 4 != 0)
	{
		std::cout << target->getName() << " is still sleeping" << std::endl;
		return false;
	}

	std::cout << target->getName() << " wakes up and can move!" << std::endl;
	return true;
}

void SleepingEffect::clearEffect(Pokemon* target)
{
	std::cout << target->getName() << " is no longer sleeping" << std::endl;
	target->clearEffect();
}
