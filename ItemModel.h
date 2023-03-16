#pragma once
#include <QAbstractTableModel>
#include "Repo.h"

class ItemModel  : public QAbstractTableModel {

public:
	Repo& repo;

	ItemModel(Repo& r) : repo{ r } {}

	int rowCount(const QModelIndex& parent = QModelIndex()) const override;
	int columnCount(const QModelIndex& parent = QModelIndex()) const override;
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;

	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

	bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole) override;
	Qt::ItemFlags flags(const QModelIndex& index) const override;

	~ItemModel() {}
};

