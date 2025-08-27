#include <iostream>

int main() 
{

    std::cout << "Please select a pokemon: 1 for Blbasaur, 2 for Charmander, 3 for Squirtle" << std::endl;
    int choice;
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "You chose Balbasour!";
    }
    else if (choice == 2)
    {
        std::cout << "You chose Charmander!";
    }
    else if (choice == 3)
    {
        std::cout << "You chose Squirtle!";
    }
    else
    {
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}
