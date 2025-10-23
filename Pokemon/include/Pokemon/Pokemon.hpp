#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../../include/Utility/Utility.h"
#include "../../include/Battle/Move.h"
#include "../../include/Utility/Interfaces/IStatusEffect.h"
#include "../../include/Battle/BattleEffects/StatusEffectType.h"
#include "../Inventory/HealingPotion.h"

class Item;
struct Move;

enum class PokemonType;
class IStatusEffect;

class Pokemon
{
protected:
	std::string name;
	PokemonType type;
	int health;
	int maxHealth;
	std::vector<Move> moves;
	IStatusEffect* appliedEffect;

	std::vector<Item> dropList;


public:
	Pokemon();
	Pokemon(std::string Iname, PokemonType Itype, int Ihealth, std::vector<Move> moveList);
	Pokemon(const Pokemon& other);

	virtual Pokemon* clone();

	bool isFainted();
	void takeDamage(int damage);
	//virtual void attack(Pokemon* target) = 0;
	virtual void attack(Move selectedMove, Pokemon* target);
	void heal();
	void heal(int amount);
	std::string getName();
	int getHealth();
	int getMaxHealth();
	void selectAndUseMove(Pokemon* target, bool playerTurn);
	
	bool canAttack();
	void applyEffect(StatusEffectType effectToApply);
	void setEffect(IStatusEffect* effect);
	void clearEffect();
	bool canApplyEffect();

	const std::vector<Item>& getDropList();

protected:

	void printAvailableMoves();
	int selectMove();
	void useMove(Move selectedMove, Pokemon* target);



};