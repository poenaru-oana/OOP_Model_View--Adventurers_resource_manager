#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test4_practice_OOP.h"

class Test4_practice_OOP : public QMainWindow
{
    Q_OBJECT

public:
    Test4_practice_OOP(QWidget *parent = Q_NULLPTR);

private:
    Ui::Test4_practice_OOPClass ui;
};
