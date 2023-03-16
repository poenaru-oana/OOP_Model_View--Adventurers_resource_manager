#pragma once
#include <QAbstractListModel>
#include "Repo.h"

class QuestModel : public QAbstractListModel {
public:
	Repo& r;
	QuestModel(Repo& r) : r{ r } {}

	int rowCount(const QModelIndex& parent = QModelIndex()) const override;
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;


	~QuestModel() {}

};

