#pragma once
#include "../../../include/Battle/BattleEffects/ParalyzedEffect.h"
#include "../../../include/Battle/BattleEffects/StatusEffectType.h"

ParalyzedEffect::ParalyzedEffect()
{
}

void ParalyzedEffect::applyEffect(Pokemon* target)
{
	turnsleft = (rand() % 3) + 1; //either 1, 2, or 3 turns 
	std::cout << target->getName() << " is now paralyzed for " << turnsleft << " turns" << std::endl;
}

std::string ParalyzedEffect::getEffectName()
{
	return "Paralyzed";
}

bool ParalyzedEffect::turnEndEffect(Pokemon* target)
{
	if (turnsleft <= 0)
	{
		clearEffect(target);
		return true;
	}
	turnsleft -= 1;

	if (rand() % 4 == 0)
	{
		std::cout << target->getName() << " is still paralyzed" << std::endl;
		return false;
	}

	std::cout << target->getName() << " shakes off the paralysis and is able to move!" << std::endl;
	return true;
}

void ParalyzedEffect::clearEffect(Pokemon* target)
{
	std::cout << target->getName() << " is no longer paralyzed" << std::endl;
	target->clearEffect();
}
