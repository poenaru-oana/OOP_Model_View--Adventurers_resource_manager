#pragma once

#include <QWidget>
#include "ui_CharacterWindow.h"
#include "Character.h"
#include "ItemModel.h"
#include "QuestWindow.h"
#include "QuestModel.h"
#include <QSortFilterProxyModel>

class CharacterWindow : public QWidget
{
	Q_OBJECT

public:
	Ui::CharacterWindow ui;
	CharacterWindow(ItemModel& im, QuestModel& qm, Character& c, QWidget *parent = Q_NULLPTR);

	void setWindowColor();
	void purchaseButton();
	void filterKit();
	void filterPurchase();

	void getQuests();

	~CharacterWindow();

private:
	ItemModel& im;
	QuestModel& qm;
	Character& c;
	QSortFilterProxyModel filter;
};
