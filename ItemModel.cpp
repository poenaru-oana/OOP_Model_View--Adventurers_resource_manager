#include "ItemModel.h"

int ItemModel::rowCount(const QModelIndex& parent) const {
    return repo.items.size();
}

int ItemModel::columnCount(const QModelIndex& parent) const {
    return 4;
}

QVariant ItemModel::data(const QModelIndex& index, int role) const {
    int row = index.row();
    int col = index.column();

    Item i = repo.items[row];
    if (role == Qt::DisplayRole) {
        switch (col) {
        case 0:
            return QString::fromStdString(i.name);
        case 1:
            return QString::fromStdString(std::to_string(i.price));
        case 2:
            return QString::fromStdString(i.type);
        case 3:
            if (i.kit == "")
                return "FOR SALE";
            return QString::fromStdString(i.kit);
        }
    }

    return QVariant();
}

QVariant ItemModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return "Name";
        case 1:
            return "Price";
        case 2:
            return "Type";
        case 3:
            return "Kit";
        }
    }

    return QVariant();
}

bool ItemModel::setData(const QModelIndex& index, const QVariant& value, int role) {
    if(!index.isValid() || role != Qt::EditRole)
       return false;

    string iName = index.siblingAtColumn(0).data().toString().toStdString();

    if (index.column() == 2)
        repo.updateType(iName, value.toString().toStdString());
    if (index.column() == 3)
        repo.updateKit(iName, value.toString().toStdString());

    emit dataChanged(index, index);
    return true;
}

Qt::ItemFlags ItemModel::flags(const QModelIndex& index) const {
    if (index.column() == 2)
        return Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsEnabled;

    return Qt::ItemIsSelectable | Qt::ItemIsEnabled;
}
