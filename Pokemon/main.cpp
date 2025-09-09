#include <iostream>


void waitForEnter()
{
	std::cin.get();
}

void clearConsole()
{
#ifdef _WIN32
	system("cls");
#else
	(void)system("clear");
#endif
}
enum class PokemonChoice
{
	Balbasour,
	Charmander,
	Squirtle,
	InvalidChoice
};

enum class PokemonType
{
	Fire,
	Water,
	Electric,
	Grass
};

class Pokemon
{
public:
	std::string name;
	PokemonType type;
	int health;

	Pokemon()
	{
		name = "Pikachu";
		type = PokemonType::Electric;
		health = 120;
	}
	Pokemon(std::string Iname, PokemonType Itype, int Ihealth)
	{
		name = Iname;
		type = Itype;
		health = Ihealth;
	}

	void attack()
	{
		std::cout << name << " attacks with a powerful move!" << std::endl;
	}

};

class Trainer
{
public:
	std::string name;
	Pokemon chosenPokemon;

	Trainer()
	{
		name = "Trainer";
		chosenPokemon = Pokemon();
	}

	Trainer(std::string p_name, Pokemon p_chosenPokemon)
	{
		name = p_name;
		chosenPokemon = p_chosenPokemon;
	}



	void choosePokemon(int choice)
	{
		switch (PokemonChoice(choice - 1))
		{
		case PokemonChoice::Balbasour:
			chosenPokemon = Pokemon("Balbasour", PokemonType::Grass, 100);
			break;
		case PokemonChoice::Charmander:
			chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 80);
			break;
		case PokemonChoice::Squirtle:
			chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
			break;
		default:
			chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 110);
			std::cout << "Invalid choice, chose Pickachu" << std::endl;
			break;
		}

		std::cout << "You chose " << chosenPokemon.name << std::endl;
		


	}
};

class ProfessorOak
{
public:
	std::string name;

	ProfessorOak()
	{
		name = "Oak";
	}

	void greetTrainer(Trainer& trainer)
	{
		clearConsole();
		std::cout << name << ": Hello there! Welcome to the world of Pokemons!\n";
		waitForEnter();
		std::cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
		waitForEnter();
		std::cout << name << ": But enough about me. Let's talk about you!\n";
		waitForEnter();
	}

	void offerPokemonChoices(Trainer& trainer)
	{
		clearConsole();

		//setting player name
		std::cout << name << ": First, what do they call you?\n";
		std::cin >> trainer.name;
		std::cout << name << ": Ah," << trainer.name << "! What a great name!\n";
		waitForEnter();
		std::cout << name << ": You must be eager to start. But first you need a Pokemon\n";
		waitForEnter();

		//getting player choice for a pokemon
		std::cout << name << ": I have three Pokemon here with me.\n";
		waitForEnter();
		std::cout << name << ": Choose wisely...\n";
		waitForEnter();
		std::cout << "1. Bulbasaur - The grass type.\n";
		std::cout << "2. grass - The fire type. \n";
		std::cout << "3. Squirtle- The water type. \n";
		waitForEnter();


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

		trainer.choosePokemon(choice);
		waitForEnter();

	}

	void explainMainQuest(Trainer& trainer)
	{
		//clearConsole();

		std::cout << name << ": Oak-ay " << trainer.name << ", I am about to explain you about your upcoming grand adventure." << std::endl;
		waitForEnter();
		std::cout << name << ": You see, becoming a Pokemon master is no easy feat. It takes courage, wisdom, and a bit of luck." << std::endl;
		waitForEnter();
		std::cout << name << ": Your mission, should you choose to accept it (and trust me, you really don't have a choice) is to collect all the Pokemon Badges and conquer the Pokemon League" << std::endl;
		waitForEnter();
		std::cout << trainer.name << ": Wait... that sounds a lot like every other Pokemon game out there." << std::endl;
		waitForEnter();
		std::cout << name << ": Shhh! dont break the fourth wall " << trainer.name << "! This is serious business." << std::endl;
		waitForEnter();
		std::cout << name << ": To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter" << std::endl;
		waitForEnter();
		std::cout << name << ": Along the way, you'll capture new Pokemon to strengthen your team. Just remember - there's a limit to how many Pokemon you can carry, so choose wisely" << std::endl;
		waitForEnter();
		std::cout << trainer.name << ": Sounds like a walk in the park... right?" << std::endl;
		waitForEnter();
		std::cout << name << ": Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be startin from square one." << std::endl;
		waitForEnter();
		std::cout << name << ": So, what do you say? Are you ready to become the next Pokemon Champion?" << std::endl;
		waitForEnter();
		std::cout << trainer.name << ": Ready as I'll ever be, Professor!" << std::endl;
		waitForEnter();
		std::cout << name << ": That's the spirit! Now, your journey begins." << std::endl;
		waitForEnter();
		std::cout << name << ": But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << std::endl;
		waitForEnter();



	}
};






int main()
{
	Trainer player;
	ProfessorOak professor;

	professor.greetTrainer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);




	std::cout << "good luck on your journy" << std::endl;

	return 0;
}
