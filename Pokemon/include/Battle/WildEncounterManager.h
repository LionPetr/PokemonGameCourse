#include "../../include/Pokemon/Grass.h"
#include <vector>

class WildEncounterManager
{
public:
	WildEncounterManager();
	Pokemon* getRandomPokemonFromGrass(const Grass& grass);
};
