#pragma once
#include <string>
using std::string;
#include <iostream>
using std::istream;
using std::ostream;

class Character {

public:
	string name;
	int gold;
	string kit;

	Character() {}

	friend istream& operator>> (istream& is, Character& c) {
		getline(is, c.name, '|');
		if (c.name == "")
			return is;

		string gold;
		getline(is, gold, '|');
		c.gold = stoi(gold);
		getline(is, c.kit, '\n');

		return is;
	}

	friend ostream& operator<< (ostream& os, Character& c) {
		os << c.name << '|' << c.gold << '|' << c.kit << '\n';

		return os;
	}

	~Character() {}
};

