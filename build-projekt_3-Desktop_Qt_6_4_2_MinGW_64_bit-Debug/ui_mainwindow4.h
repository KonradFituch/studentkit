/********************************************************************************
** Form generated from reading UI file 'mainwindow4.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW4_H
#define UI_MAINWINDOW4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow4
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow4)
    {
        if (MainWindow4->objectName().isEmpty())
            MainWindow4->setObjectName("MainWindow4");
        MainWindow4->resize(800, 600);
        menubar = new QMenuBar(MainWindow4);
        menubar->setObjectName("menubar");
        MainWindow4->setMenuBar(menubar);
        centralwidget = new QWidget(MainWindow4);
        centralwidget->setObjectName("centralwidget");
        MainWindow4->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow4);
        statusbar->setObjectName("statusbar");
        MainWindow4->setStatusBar(statusbar);

        retranslateUi(MainWindow4);

        QMetaObject::connectSlotsByName(MainWindow4);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow4)
    {
        MainWindow4->setWindowTitle(QCoreApplication::translate("MainWindow4", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow4: public Ui_MainWindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW4_H
