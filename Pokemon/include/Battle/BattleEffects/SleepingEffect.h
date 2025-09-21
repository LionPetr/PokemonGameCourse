#pragma once
#include "../../Utility/Interfaces/IStatusEffect.h"

class SleepingEffect : public IStatusEffect
{
public:
	SleepingEffect();

	void applyEffect(Pokemon* target);
	std::string getEffectName();
	bool turnEndEffect(Pokemon* target);
	void clearEffect(Pokemon* target);

private:
	int turnsleft;
}; 
