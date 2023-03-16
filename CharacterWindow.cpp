#include "CharacterWindow.h"

CharacterWindow::CharacterWindow(ItemModel& im, QuestModel& qm, Character& c, QWidget *parent)
	: im{ im }, qm{ qm }, c{ c }, QWidget(parent)
{
	ui.setupUi(this);
	ui.tableView->setModel(&im);
	this->setWindowTitle(QString::fromStdString(c.name));
	setWindowColor();
	ui.tableView->setStyleSheet("background-color: white");
	ui.goldLabel->setText(QString::fromStdString(std::to_string(c.gold)));
	filter.setSourceModel(&im);
	
	connect(ui.pushButton_2, &QPushButton::clicked, this, &CharacterWindow::getQuests);
	connect(ui.canPurchasse, &QCheckBox::clicked, this, &CharacterWindow::filterPurchase);
	connect(ui.myObjects, &QCheckBox::clicked, this, &CharacterWindow::filterKit);
	connect(ui.buyButton, &QCheckBox::clicked, this, &CharacterWindow::purchaseButton);

}

void CharacterWindow::setWindowColor() {
	QString bg = QString::fromStdString("background-color: " + c.kit);
	this->setStyleSheet(bg);
}

void CharacterWindow::purchaseButton() {
	if (ui.tableView->currentIndex().siblingAtColumn(3).data().toString().toStdString() != "FOR SALE")
		return;

	int price = ui.tableView->currentIndex().siblingAtColumn(1).data().toInt();
	if (c.gold - price < 0)
		return;

	c.gold -= price;
	ui.goldLabel->setText(QString::fromStdString(std::to_string(c.gold)));

	im.setData(ui.tableView->currentIndex().siblingAtColumn(3), QString::fromStdString(c.kit));
}

void CharacterWindow::filterKit() {
	if (ui.myObjects->isChecked()) {
		if (c.kit != "") {
			QString exp = QString::fromStdString(c.kit);
			filter.setFilterRegularExpression(exp);
			filter.setFilterKeyColumn(3);
			filter.filterRegularExpression();
			ui.tableView->setModel(&filter);
		}
	}
	else {
		ui.tableView->setModel(&im);
	}
}

void CharacterWindow::filterPurchase() {
	if (ui.canPurchasse->isChecked()) {
		QString exp = QString::fromStdString("FOR SALE");
		filter.setFilterRegularExpression(exp);
		filter.setFilterKeyColumn(3);
		filter.filterRegularExpression();
		filter.sort(1);
		ui.tableView->setModel(&filter);
	}
	else {
		ui.tableView->setModel(&im);
	}
}

void CharacterWindow::getQuests() {
	int recGold = 0;
	QuestWindow* qWin = new QuestWindow(qm, c.gold, this);
	qWin->show();
}

CharacterWindow::~CharacterWindow()
{
}
