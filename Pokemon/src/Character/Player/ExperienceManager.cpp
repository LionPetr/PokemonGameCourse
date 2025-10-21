#include "../../../include/Character/Player/ExperienceManager.h"
#include <iostream>

ExperienceManager::ExperienceManager()
{
	experiencePoints = 0;
	level = 0;
	levelMaxPoints = 10;
}

int ExperienceManager::getLevel()
{
	return level;
}

int ExperienceManager::getExperiencePoints()
{
	return experiencePoints;
}

int ExperienceManager::getMaxLevelPoints()
{
	return levelMaxPoints;
}

void ExperienceManager::levelUp()
{
	level++;
	experiencePoints = 0;
	levelMaxPoints = calculateNextLevelXP();
	std::cout << "You just leveled up! Your new level is " << level << std::endl;
	return ;
}

void ExperienceManager::addExperience(int IexpAmount)
{
	std::cout << "You earn " << IexpAmount << " experience" << std::endl;
	experiencePoints += IexpAmount;
	if (experiencePoints >= levelMaxPoints)
	{
		int leftover = experiencePoints - levelMaxPoints;
		levelUp();
		experiencePoints += leftover;
	}

	std::cout << "You are now at " << experiencePoints << "/" << levelMaxPoints << " XP" << std::endl;
}

int ExperienceManager::calculateNextLevelXP()
{
	int nextLevelReq = level * 5 + levelMaxPoints * (3 / 2);
	return nextLevelReq;
}
