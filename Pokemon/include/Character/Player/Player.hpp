#pragma once
#include <string>
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../Inventory/InventoryManager.h"
#include "../../../include/Character/Player/ExperienceManager.h"

class Player
{
public:
    std::string name;
    Pokemon* chosenPokemon;

    // Constructors
    Player();
    ~Player();

    // Method to choose Pokemon
    void choosePokemon(int choice);
    InventoryManager& getInventory();
    void givePlayerItem(Item& item);

    ExperienceManager getExpManager();

private:

    EventBus bus;
    InventoryManager inventory;
    ExperienceManager expManager;
    
};