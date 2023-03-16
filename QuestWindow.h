#pragma once

#include <QWidget>
#include "ui_QuestWindow.h"
#include "QuestModel.h"

class QuestWindow : public QWidget
{
	Q_OBJECT

public:
	QuestWindow(QuestModel& qm, int& gold, QWidget *parent = Q_NULLPTR);

	void doQuest();
	void exitSaving();
	void exitCancel();

	~QuestWindow();

private:
	Ui::QuestWindow ui;
	QWidget* parent;
	int& gold;
	QuestModel& qm;
	int tempGold = 0;
	vector<QModelIndex> completedQuestsIndex; 
};
