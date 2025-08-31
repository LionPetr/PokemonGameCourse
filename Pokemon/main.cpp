#include <iostream>

enum class PokemonChoice
{
    Balbasour,
    Charmander,
    Squirtle,
    InvalidChoice
};


int main() 
{
    PokemonChoice chosen_pokemon;

    std::cout << "Please select a pokemon: 1 for Blbasaur, 2 for Charmander, 3 for Squirtle" << std::endl;
    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        chosen_pokemon = PokemonChoice::Balbasour;
        std::cout << "You chose Balbasour!";
        break;
    case 2: 
        chosen_pokemon = PokemonChoice::Charmander;
        std::cout << "You chose Charmander!";
        break;
    case 3:
        chosen_pokemon = PokemonChoice::Squirtle;
        std::cout << "You chose Squirtle!";
        break;
    default: 
        chosen_pokemon = PokemonChoice::InvalidChoice;
        std::cout << "Invalid choice" << std::endl;
        break;
    }

    std::cout << "good luck on your journy" << std::endl;
    
    return 0;
}
