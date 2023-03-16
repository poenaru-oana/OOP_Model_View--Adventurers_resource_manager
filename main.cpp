#include "Test4_practice_OOP.h"
#include <QtWidgets/QApplication>
#include "Repo.h"
#include "CharacterWindow.h"
#include "QuestModel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Repo r;
    ItemModel im{ r };
    QuestModel qm{ r };

    for (auto &c : r.characters) {
        CharacterWindow* cWin = new CharacterWindow(im, qm, c);
        cWin->show();
    }

    return a.exec();
}
