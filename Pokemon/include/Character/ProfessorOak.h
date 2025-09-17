#pragma once
#include <iostream>
#include "../../include/Character/Player/Player.hpp"

class ProfessorOak
{
public:
	std::string name;

	ProfessorOak();

	void greetTrainer(Player& player);

	void offerPokemonChoices(Player& player);

	void explainMainQuest(Player& player);
};