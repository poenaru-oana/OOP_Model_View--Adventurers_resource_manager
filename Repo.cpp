#include "Repo.h"

Repo::Repo() {
	ifstream cin("Party.txt");
	Character c;
	while (!cin.eof()) {
		cin >> c;
		if (c.name == "")
			break;
		characters.push_back(c);
	}
	cin.close();

	ifstream iin("Items.txt");
	Item i;
	while (!iin.eof()) {
		iin >> i;
		if (i.name == "")
			break;
		items.push_back(i);
	}
	iin.close();

	ifstream qin("Quests.txt");
	Quest q;
	while (!qin.eof()) {
		qin >> q;
		if (q.name == "")
			break;
		quests.push_back(q);
	}
	qin.close();
}

void Repo::updateKit(string iName, string newKit) {
	for (auto& i : items)
		if (i.name == iName) {
			i.kit = newKit;
			return;
		}
}

void Repo::updateType(string iName, string newType) {
	if (newType != "common" && newType != "uncommon" && newType != "rare")
		return;

	for (auto& i : items)
		if (i.name == iName) {
			i.type = newType;
			return;
		}
}
