#pragma once

class ExperienceManager
{

public:
	ExperienceManager();

	int getLevel();
	int getExperiencePoints();
	int getMaxLevelPoints();

	void levelUp();

	void addExperience(int IexpAmount);

private:

	int calculateNextLevelXP();

	int level;
	int experiencePoints;
	int levelMaxPoints;
};