/********************************************************************************
** Form generated from reading UI file 'Test4_practice_OOP.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST4_PRACTICE_OOP_H
#define UI_TEST4_PRACTICE_OOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test4_practice_OOPClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test4_practice_OOPClass)
    {
        if (Test4_practice_OOPClass->objectName().isEmpty())
            Test4_practice_OOPClass->setObjectName(QString::fromUtf8("Test4_practice_OOPClass"));
        Test4_practice_OOPClass->resize(600, 400);
        menuBar = new QMenuBar(Test4_practice_OOPClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Test4_practice_OOPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test4_practice_OOPClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test4_practice_OOPClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test4_practice_OOPClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test4_practice_OOPClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test4_practice_OOPClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test4_practice_OOPClass->setStatusBar(statusBar);

        retranslateUi(Test4_practice_OOPClass);

        QMetaObject::connectSlotsByName(Test4_practice_OOPClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test4_practice_OOPClass)
    {
        Test4_practice_OOPClass->setWindowTitle(QCoreApplication::translate("Test4_practice_OOPClass", "Test4_practice_OOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test4_practice_OOPClass: public Ui_Test4_practice_OOPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST4_PRACTICE_OOP_H
