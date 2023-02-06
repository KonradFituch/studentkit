/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow1
{
public:
    QAction *actionNowy;
    QAction *actionOtw_rz;
    QAction *actionZapisz;
    QAction *actionZapisz_jako;
    QAction *actionWytnij;
    QAction *actionKopiuj;
    QAction *actionWklej;
    QAction *actionCofnij;
    QAction *actionO_notatniku;
    QAction *actionPowt_rz;
    QAction *actionPrzejdz_do_menu_glownego;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuEdytuj;
    QMenu *menuO_programie;
    QMenu *menuMenu_g_wne;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow1)
    {
        if (MainWindow1->objectName().isEmpty())
            MainWindow1->setObjectName("MainWindow1");
        MainWindow1->resize(1364, 574);
        actionNowy = new QAction(MainWindow1);
        actionNowy->setObjectName("actionNowy");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNowy->setIcon(icon);
        actionOtw_rz = new QAction(MainWindow1);
        actionOtw_rz->setObjectName("actionOtw_rz");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOtw_rz->setIcon(icon1);
        actionZapisz = new QAction(MainWindow1);
        actionZapisz->setObjectName("actionZapisz");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZapisz->setIcon(icon2);
        actionZapisz_jako = new QAction(MainWindow1);
        actionZapisz_jako->setObjectName("actionZapisz_jako");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZapisz_jako->setIcon(icon3);
        actionWytnij = new QAction(MainWindow1);
        actionWytnij->setObjectName("actionWytnij");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWytnij->setIcon(icon4);
        actionKopiuj = new QAction(MainWindow1);
        actionKopiuj->setObjectName("actionKopiuj");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKopiuj->setIcon(icon5);
        actionWklej = new QAction(MainWindow1);
        actionWklej->setObjectName("actionWklej");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWklej->setIcon(icon6);
        actionCofnij = new QAction(MainWindow1);
        actionCofnij->setObjectName("actionCofnij");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCofnij->setIcon(icon7);
        actionO_notatniku = new QAction(MainWindow1);
        actionO_notatniku->setObjectName("actionO_notatniku");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionO_notatniku->setIcon(icon8);
        actionPowt_rz = new QAction(MainWindow1);
        actionPowt_rz->setObjectName("actionPowt_rz");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPowt_rz->setIcon(icon9);
        actionPrzejdz_do_menu_glownego = new QAction(MainWindow1);
        actionPrzejdz_do_menu_glownego->setObjectName("actionPrzejdz_do_menu_glownego");
        centralwidget = new QWidget(MainWindow1);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 1361, 511));
        MainWindow1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1364, 21));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName("menuPlik");
        menuEdytuj = new QMenu(menubar);
        menuEdytuj->setObjectName("menuEdytuj");
        menuO_programie = new QMenu(menubar);
        menuO_programie->setObjectName("menuO_programie");
        menuMenu_g_wne = new QMenu(menubar);
        menuMenu_g_wne->setObjectName("menuMenu_g_wne");
        MainWindow1->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow1);
        statusbar->setObjectName("statusbar");
        MainWindow1->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow1);
        toolBar->setObjectName("toolBar");
        MainWindow1->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuEdytuj->menuAction());
        menubar->addAction(menuO_programie->menuAction());
        menubar->addAction(menuMenu_g_wne->menuAction());
        menuPlik->addAction(actionNowy);
        menuPlik->addAction(actionOtw_rz);
        menuPlik->addSeparator();
        menuPlik->addAction(actionZapisz);
        menuPlik->addAction(actionZapisz_jako);
        menuEdytuj->addAction(actionWytnij);
        menuEdytuj->addAction(actionKopiuj);
        menuEdytuj->addAction(actionWklej);
        menuEdytuj->addSeparator();
        menuEdytuj->addAction(actionCofnij);
        menuEdytuj->addAction(actionPowt_rz);
        menuO_programie->addAction(actionO_notatniku);
        menuMenu_g_wne->addAction(actionPrzejdz_do_menu_glownego);
        toolBar->addAction(actionNowy);
        toolBar->addAction(actionOtw_rz);
        toolBar->addAction(actionZapisz);
        toolBar->addAction(actionZapisz_jako);
        toolBar->addSeparator();
        toolBar->addAction(actionWytnij);
        toolBar->addAction(actionKopiuj);
        toolBar->addAction(actionWklej);
        toolBar->addSeparator();
        toolBar->addAction(actionPowt_rz);
        toolBar->addAction(actionCofnij);
        toolBar->addSeparator();
        toolBar->addAction(actionO_notatniku);
        toolBar->addSeparator();

        retranslateUi(MainWindow1);

        QMetaObject::connectSlotsByName(MainWindow1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow1)
    {
        MainWindow1->setWindowTitle(QCoreApplication::translate("MainWindow1", "Edytor notatek", nullptr));
        actionNowy->setText(QCoreApplication::translate("MainWindow1", "Nowy", nullptr));
        actionOtw_rz->setText(QCoreApplication::translate("MainWindow1", "Otw\303\263rz", nullptr));
        actionZapisz->setText(QCoreApplication::translate("MainWindow1", "Zapisz", nullptr));
        actionZapisz_jako->setText(QCoreApplication::translate("MainWindow1", "Zapisz jako", nullptr));
        actionWytnij->setText(QCoreApplication::translate("MainWindow1", "Wytnij", nullptr));
        actionKopiuj->setText(QCoreApplication::translate("MainWindow1", "Kopiuj", nullptr));
        actionWklej->setText(QCoreApplication::translate("MainWindow1", "Wklej", nullptr));
        actionCofnij->setText(QCoreApplication::translate("MainWindow1", "Cofnij", nullptr));
        actionO_notatniku->setText(QCoreApplication::translate("MainWindow1", "O notatniku", nullptr));
        actionPowt_rz->setText(QCoreApplication::translate("MainWindow1", "Powt\303\263rz", nullptr));
        actionPrzejdz_do_menu_glownego->setText(QCoreApplication::translate("MainWindow1", "Przejdz do menu glownego", nullptr));
        menuPlik->setTitle(QCoreApplication::translate("MainWindow1", "Plik", nullptr));
        menuEdytuj->setTitle(QCoreApplication::translate("MainWindow1", "Edytuj", nullptr));
        menuO_programie->setTitle(QCoreApplication::translate("MainWindow1", "O programie", nullptr));
        menuMenu_g_wne->setTitle(QCoreApplication::translate("MainWindow1", "Menu g\305\202\303\263wne", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow1", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow1: public Ui_MainWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
