#include "../include/Main/Game.h"
#include "../include/Character/Player/Player.hpp"
#include <iostream>
#include <limits>
#include "../include/Character/ProfessorOak.h"









int main()
{
	Player* player = new Player();
	ProfessorOak* professor = new ProfessorOak();

	professor->greetTrainer(*player);
	professor->offerPokemonChoices(*player);
	professor->explainMainQuest(*player);

	Game* game= new Game();;
	game->gameLoop(player);

	delete player;
	delete professor;
	delete game;

	return 0;
}
