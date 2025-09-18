#pragma once
#include "../../Utility/Interfaces/IStatusEffect.h"

class ParalyzedEffect : public IStatusEffect
{
public:
	ParalyzedEffect();

	void applyEffect(Pokemon* target);
	std::string getEffectName();
	bool turnEndEffect(Pokemon* target);
	void clearEffect(Pokemon* target);

private: 
	int turnsleft;
};