#pragma once
#include "../../Utility/EventBus.h"
#include "LevelUpEvent.h"

class ExperienceManager
{

public:
	ExperienceManager(EventBus& eventBus);

	int getLevel();
	int getExperiencePoints();
	int getMaxLevelPoints();

	void levelUp();

	void addExperience(int IexpAmount);

private:

	int calculateNextLevelXP();

	EventBus& bus;

	int level;
	int experiencePoints;
	int levelMaxPoints;
};