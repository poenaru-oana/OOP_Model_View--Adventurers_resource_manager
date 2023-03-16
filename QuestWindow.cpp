#include "QuestWindow.h"
#include "CharacterWindow.h"

QuestWindow::QuestWindow(QuestModel& qm, int& gold, QWidget* parent)
	: qm{ qm }, gold{ gold }, parent{ parent }
{
	ui.setupUi(this);
	ui.listView->setModel(&qm);

	connect(ui.OkButton, &QPushButton::clicked, this, &QuestWindow::exitSaving);
	connect(ui.CancelButton, &QPushButton::clicked, this, &QuestWindow::exitCancel);
	connect(ui.pushButton, &QPushButton::clicked, this, &QuestWindow::doQuest);

}

void QuestWindow::doQuest() {
	completedQuestsIndex.push_back(ui.listView->currentIndex());
	tempGold += qm.r.quests[ui.listView->currentIndex().row()].gold;
}

void QuestWindow::exitSaving() {
	gold += tempGold;
	for (auto& q : completedQuestsIndex) {
		qm.removeRow(q.row());
		int i = 0;
		auto qst = qm.r.quests.begin();
		while (qst != qm.r.quests.end()) {
			if (i == q.row()) {
				qm.r.quests.erase(qst);
				break;
			}
			i++;  qst++;
		}
	}

	CharacterWindow* p = dynamic_cast <CharacterWindow*> (parent);
	p->ui.goldLabel->setText(QString::fromStdString(std::to_string(gold)));

	this->close();
}

void QuestWindow::exitCancel() {
	this->close();
}

QuestWindow::~QuestWindow() {

}
