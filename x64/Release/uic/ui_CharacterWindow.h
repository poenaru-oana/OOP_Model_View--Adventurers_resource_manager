/********************************************************************************
** Form generated from reading UI file 'CharacterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERWINDOW_H
#define UI_CHARACTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterWindow
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *goldLabel;
    QCheckBox *myObjects;
    QCheckBox *canPurchasse;
    QPushButton *buyButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CharacterWindow)
    {
        if (CharacterWindow->objectName().isEmpty())
            CharacterWindow->setObjectName(QString::fromUtf8("CharacterWindow"));
        CharacterWindow->resize(643, 371);
        tableView = new QTableView(CharacterWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 70, 611, 181));
        label = new QLabel(CharacterWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 51, 31));
        goldLabel = new QLabel(CharacterWindow);
        goldLabel->setObjectName(QString::fromUtf8("goldLabel"));
        goldLabel->setGeometry(QRect(70, 10, 91, 31));
        myObjects = new QCheckBox(CharacterWindow);
        myObjects->setObjectName(QString::fromUtf8("myObjects"));
        myObjects->setGeometry(QRect(480, 10, 121, 20));
        canPurchasse = new QCheckBox(CharacterWindow);
        canPurchasse->setObjectName(QString::fromUtf8("canPurchasse"));
        canPurchasse->setGeometry(QRect(480, 40, 111, 20));
        buyButton = new QPushButton(CharacterWindow);
        buyButton->setObjectName(QString::fromUtf8("buyButton"));
        buyButton->setGeometry(QRect(10, 260, 121, 24));
        pushButton_2 = new QPushButton(CharacterWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(174, 310, 301, 51));

        retranslateUi(CharacterWindow);

        QMetaObject::connectSlotsByName(CharacterWindow);
    } // setupUi

    void retranslateUi(QWidget *CharacterWindow)
    {
        CharacterWindow->setWindowTitle(QCoreApplication::translate("CharacterWindow", "CharacterWindow", nullptr));
        label->setText(QCoreApplication::translate("CharacterWindow", "Balance:", nullptr));
        goldLabel->setText(QString());
        myObjects->setText(QCoreApplication::translate("CharacterWindow", "Objects in my kit", nullptr));
        canPurchasse->setText(QCoreApplication::translate("CharacterWindow", "Can purchase", nullptr));
        buyButton->setText(QCoreApplication::translate("CharacterWindow", "Purchase ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CharacterWindow", "Find quest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharacterWindow: public Ui_CharacterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERWINDOW_H
