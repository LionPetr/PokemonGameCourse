#include "Game.h"
#include "Player.hpp"
#include <iostream>
#include <limits>
#include "ProfessorOak.h"









int main()
{
	Player player;
	ProfessorOak professor;

	professor.greetTrainer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);

	Game game;
	game.gameLoop(player);

	return 0;
}
