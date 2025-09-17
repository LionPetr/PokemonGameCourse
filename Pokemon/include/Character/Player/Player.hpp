#pragma once
#include <string>
#include "../../../include/Pokemon/Pokemon.hpp"

class Player
{
public:
    std::string name;
    Pokemon chosenPokemon;

    // Constructors
    Player();

    Player(const std::string& p_name, const Pokemon& p_chosenPokemon);

    // Method to choose Pokemon
    void choosePokemon(int choice);
};