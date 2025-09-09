#include <iostream>

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
        std::cout << "A player named " << name << "has been created" << std::endl;
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
        std::cout << name << ": Hello there! Welcome to the world of Poekmons!\n";
        std::cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        std::cout << name << ": But enough about me. Let's talk about you!\n";
    }

    void offerPokemonChoices(Trainer& trainer)
    {
        //setting player name
        std::cout << name << ": First, what do they call you?\n";
        std::cin >> trainer.name;
        std::cout << name << ": Ah," << trainer.name << "! What a great name!\n";
        std::cout << name << ": You must be eager to start. But first you need a Pokemon\n";

        //getting player choice for a pokemon
        std::cout << name << ": I have three Pokemon here with me.\n";
        std::cout << name << ": Choose wisely...\n";
        std::cout << "1. Bulbasaur - The grass type.\n";
        std::cout << "2. grass - The fire type. \n";
        std::cout << "3. Squirtle- The water type. \n";

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

        std::cout << choice << " your choice" << std::endl;

        trainer.choosePokemon(choice);

    }
};






int main() 
{   
    Trainer player;
    ProfessorOak professor;

    professor.greetTrainer(player);
    professor.offerPokemonChoices(player);




    std::cout << "good luck on your journy" << std::endl;
    
    return 0;
}
