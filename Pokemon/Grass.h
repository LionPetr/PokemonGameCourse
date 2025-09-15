#include<string>
#include <vector>
#include "Pokemon.hpp"
using namespace std;

struct Grass
{
	string environmentType;
	vector<Pokemon> PokemonList;
	int encounterRate; //out of 100

};