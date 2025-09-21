#pragma once
#include "../../Utility/Interfaces/IStatusEffect.h"

class PoisonedEffect : public IStatusEffect
{
public:
	PoisonedEffect();
	PoisonedEffect(int Idamage);

	void applyEffect(Pokemon* target);
	std::string getEffectName();
	bool turnEndEffect(Pokemon* target);
	void clearEffect(Pokemon* target);

private:
	int turnsleft;
	int damage;
}; 
