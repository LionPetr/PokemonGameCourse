#pragma once
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.hpp"

Charmander::Charmander()
	: Pokemon("Charmander", PokemonType::FIRE, 100, {
		Move("FLAME BURST", 25),
		Move("TACKLE", 10)
		}) {
}
Pokemon* Charmander::clone()
{
	return new Charmander();
}
;

void Charmander::attack(Move selectedMove, Pokemon* target)
{
	Pokemon::attack(selectedMove, target);

	if (selectedMove.name == "FLAME BURST")
	{
		takeDamage(5);
		std::cout << name << " burns itself " << "health: " << health << "/" << maxHealth << std::endl;
		if (target->canApplyEffect())
		{
			target->applyEffect(StatusEffectType::BURNED);
		}
	}
}
