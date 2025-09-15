#include "Utility.h"
#include <iostream>
#include <limits>
#include "Player.hpp"

class ProfessorOak
{
public:
	std::string name;

	ProfessorOak()
	{
		name = "Oak";
	}

	void greetTrainer(Player& player)
	{
		Utility::clearConsole();
		std::cout << name << ": Hello there! Welcome to the world of Pokemons!\n";
		Utility::waitForEnter();
		std::cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
		Utility::waitForEnter();
		std::cout << name << ": But enough about me. Let's talk about you!\n";
		Utility::waitForEnter();
	}

	void offerPokemonChoices(Player& player)
	{
		Utility::clearConsole();

		//setting player name
		std::cout << name << ": First, what do they call you?\n";
		std::cin >> player.name;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << name << ": Ah," << player.name << "! What a great name!\n";
		Utility::waitForEnter();
		std::cout << name << ": You must be eager to start. But first you need a Pokemon\n";
		Utility::waitForEnter();

		//getting player choice for a pokemon
		std::cout << name << ": I have three Pokemon here with me.\n";
		Utility::waitForEnter();
		std::cout << name << ": Choose wisely...\n";
		Utility::waitForEnter();
		std::cout << "1. Bulbasaur - The grass type.\n";
		std::cout << "2. grass - The fire type. \n";
		std::cout << "3. Squirtle- The water type. \n";
		Utility::waitForEnter();


		//prompt player to choose 
		int choice;
		std::cout << name << ": So, Which one will it be? enter the number of your choice: ";
		std::cin >> choice;

		//make sure choice is valid.
		while (choice != 1 && choice != 2 && choice != 3)
		{
			std::cout << "\n";
			std::cout << name << ": Sorry but that choice is invalid try again: ";
			std::cin >> choice;
		}

		player.choosePokemon(choice);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		Utility::waitForEnter();
		std::cout << "" << std::endl;


	}

	void explainMainQuest(Player& player)
	{
		Utility::clearConsole();

		std::cout << name << ": Oak-ay " << player.name << ", I am about to explain you about your upcoming grand adventure." << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": You see, becoming a Pokemon master is no easy feat. It takes courage, wisdom, and a bit of luck." << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": Your mission, should you choose to accept it (and trust me, you really don't have a choice) is to collect all the Pokemon Badges and conquer the Pokemon League" << std::endl;
		Utility::waitForEnter();
		std::cout << player.name << ": Wait... that sounds a lot like every other Pokemon game out there." << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": Shhh! dont break the fourth wall " << player.name << "! This is serious business." << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter" << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": Along the way, you'll capture new Pokemon to strengthen your team. Just remember - there's a limit to how many Pokemon you can carry, so choose wisely" << std::endl;
		Utility::waitForEnter();
		std::cout << player.name << ": Sounds like a walk in the park... right?" << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be startin from square one." << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": So, what do you say? Are you ready to become the next Pokemon Champion?" << std::endl;
		Utility::waitForEnter();
		std::cout << player.name << ": Ready as I'll ever be, Professor!" << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": That's the spirit! Now, your journey begins." << std::endl;
		Utility::waitForEnter();
		std::cout << name << ": But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << std::endl;
		Utility::waitForEnter();



	}
};

void gameLoop(Player& player)
{
	bool keepPlaying = true;
	int choice;

	while (keepPlaying)
	{
		Utility::clearConsole();
		std::cout << "What would you like to do next - " << player.name << std::endl;
		std::cout << "1. Battle Wild Pokemon" << std::endl;
		std::cout << "2. Visit PokeCenter" << std::endl;
		std::cout << "3. Challenge Gyms" << std::endl;
		std::cout << "4. Enter Pokemon League" << std::endl;
		std::cout << "5. Quit" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (choice)
		{
		case 1:
			std::cout << "you suck" << std::endl;
			break;
		case 2:
			std::cout << "wasnt built yet" << std::endl;
			break;
		case 3:
			std::cout << "hit the actual gym first" << std::endl;
			break;
		case 4:
			std::cout << "its out of your league" << std::endl;
			break;
		case 5:
			std::cout << "Are you sure you want to quit?" << std::endl;
			char quitChoice;
			std::cin >> quitChoice;
			if (quitChoice == 'y' || quitChoice == 'Y')
			{
				keepPlaying = false;
			}

			break;
		default:
			std::cout << "select one of the choices provided" << std::endl;
			break;

		}
		Utility::waitForEnter();


	}
	std::cout << "bye bye" << std::endl;
}






int main()
{
	Player player;
	ProfessorOak professor;

	professor.greetTrainer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);

	gameLoop(player);

	return 0;
}
