#pragma once
#include <string>
using std::string;
#include <iostream>
using std::istream;
using std::ostream;

class Item {

public:
	string name;
	int price;
	string type;
	string kit;

	Item() {}

	friend istream& operator>> (istream& is, Item& i) {
		getline(is, i.name, '|');
		if (i.name == "")
			return is;

		string price;
		getline(is, price, '|');
		i.price = stoi(price);
		getline(is, i.type, '|');
		getline(is, i.kit, '\n');

		return is;
	}

	friend ostream& operator<< (ostream& os, Item& i) {
		os << i.name << '|' << i.price << '|' << i.type << '|' << i.kit << '\n';

		return os;
	}

	~Item() {}
};

