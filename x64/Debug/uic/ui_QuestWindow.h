/********************************************************************************
** Form generated from reading UI file 'QuestWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTWINDOW_H
#define UI_QUESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestWindow
{
public:
    QListView *listView;
    QPushButton *pushButton;
    QPushButton *OkButton;
    QPushButton *CancelButton;

    void setupUi(QWidget *QuestWindow)
    {
        if (QuestWindow->objectName().isEmpty())
            QuestWindow->setObjectName(QString::fromUtf8("QuestWindow"));
        QuestWindow->resize(646, 300);
        listView = new QListView(QuestWindow);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 10, 541, 231));
        pushButton = new QPushButton(QuestWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 110, 75, 24));
        OkButton = new QPushButton(QuestWindow);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setGeometry(QRect(470, 260, 75, 24));
        CancelButton = new QPushButton(QuestWindow);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(560, 260, 75, 24));

        retranslateUi(QuestWindow);

        QMetaObject::connectSlotsByName(QuestWindow);
    } // setupUi

    void retranslateUi(QWidget *QuestWindow)
    {
        QuestWindow->setWindowTitle(QCoreApplication::translate("QuestWindow", "QuestWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("QuestWindow", "Do Quest", nullptr));
        OkButton->setText(QCoreApplication::translate("QuestWindow", "OK", nullptr));
        CancelButton->setText(QCoreApplication::translate("QuestWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestWindow: public Ui_QuestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTWINDOW_H
