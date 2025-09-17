#include "../../include/Battle/WildEncounterManager.h"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
	int randomIndex = rand() % grass.PokemonList.size();
	return grass.PokemonList[randomIndex];
}
