#pragma once
#include <string>
using std::string;
#include <iostream>
using std::istream;
using std::ostream;

class Quest {
public:
	string name;
	int gold;

	Quest() {}

	friend istream& operator>> (istream& is, Quest& q) {
		getline(is, q.name, '|');
		if (q.name == "")
			return is;

		string gold;
		getline(is, gold, '\n');
		q.gold = stoi(gold);

		return is;
	}

	friend ostream& operator<< (ostream& os, Quest& q) {
		os << q.name << '|' << q.gold << '\n';

		return os;
	}

	string toString() {
		return name + '|' + std::to_string(gold);
	}

	~Quest() {}
};

