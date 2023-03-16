#include "QuestModel.h"

int QuestModel::rowCount(const QModelIndex& parent) const {
    return r.quests.size();
}

QVariant QuestModel::data(const QModelIndex& index, int role) const {
    int row = index.row();

    Quest q = r.quests[row];
    if (role == Qt::DisplayRole)
        return QString::fromStdString(q.toString());

    return QVariant();
}

