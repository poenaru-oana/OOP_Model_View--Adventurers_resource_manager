#pragma once
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <vector>
using std::vector;
#include "Character.h"
#include "Item.h"
#include "Quest.h"

class Repo {
public:
	vector <Character> characters;
	vector <Item> items;
	vector <Quest> quests;

	Repo();

	void updateKit(string iName, string newKit);
	void updateType(string iName, string newType);

	~Repo() {};


};

