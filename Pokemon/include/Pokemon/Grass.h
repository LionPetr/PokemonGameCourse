#pragma once
#include<string>
#include <vector>
#include "Pokemon.hpp"
using namespace std;

struct Grass
{
	string environmentType;
	vector<Pokemon*> PokemonList;
	int encounterRate; //out of 100

	//~Grass()
	//{
	//	for (Pokemon* p : PokemonList)
	//	{
	//		delete p;
	//	}
	//	PokemonList.clear();
	//}
};