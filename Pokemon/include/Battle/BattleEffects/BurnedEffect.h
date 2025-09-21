#pragma once
#include "../../Utility/Interfaces/IStatusEffect.h"

class BurnedEffect : public IStatusEffect
{
public:
	BurnedEffect();
	BurnedEffect(int Idamage);

	void applyEffect(Pokemon* target);
	std::string getEffectName();
	bool turnEndEffect(Pokemon* target);
	void clearEffect(Pokemon* target);

private:
	int turnsleft;
	int damage;
};