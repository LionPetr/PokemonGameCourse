#pragma once
#include "../../../include/Battle/BattleEffects/PoisonedEffect.h"
#include "../../../include/Battle/BattleEffects/StatusEffectType.h"

PoisonedEffect::PoisonedEffect()
{
	damage = 2;
}

PoisonedEffect::PoisonedEffect(int Idamage)
{
	damage = Idamage;
}

void PoisonedEffect::applyEffect(Pokemon* target)
{
	turnsleft = (rand() % 3) + 1; //either 1, 2, or 3 turns 
	std::cout << target->getName() << " is now burning for " << turnsleft << " turns" << std::endl;
}

std::string PoisonedEffect::getEffectName()
{
	return "Burned";
}

bool PoisonedEffect::turnEndEffect(Pokemon* target)
{
	if (turnsleft <= 0)
	{
		clearEffect(target);
		return true;
	}
	turnsleft -= 1;

	target->takeDamage(damage);

	std::cout << target->getName() << " takes " << damage << " poison damage!" << std::endl;
	return true;
}

void PoisonedEffect::clearEffect(Pokemon* target)
{
	std::cout << target->getName() << " is no longer burning" << std::endl;
	target->clearEffect();
}
