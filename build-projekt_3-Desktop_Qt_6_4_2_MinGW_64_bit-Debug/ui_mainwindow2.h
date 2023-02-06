/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QAction *actionDodaj_zadanie;
    QAction *actionUsu_zadanie;
    QAction *actionLista_zada;
    QAction *actionPowr_t_do_menu_g_wnego;
    QWidget *centralwidget;
    QCalendarWidget *calendarWidget;
    QFrame *frame;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuEdytuj;
    QMenu *menuZadania;
    QMenu *menuMenu_G_wne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName("MainWindow2");
        MainWindow2->resize(1056, 607);
        actionDodaj_zadanie = new QAction(MainWindow2);
        actionDodaj_zadanie->setObjectName("actionDodaj_zadanie");
        actionUsu_zadanie = new QAction(MainWindow2);
        actionUsu_zadanie->setObjectName("actionUsu_zadanie");
        actionLista_zada = new QAction(MainWindow2);
        actionLista_zada->setObjectName("actionLista_zada");
        actionPowr_t_do_menu_g_wnego = new QAction(MainWindow2);
        actionPowr_t_do_menu_g_wnego->setObjectName("actionPowr_t_do_menu_g_wnego");
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName("centralwidget");
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(10, 0, 531, 571));
        calendarWidget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(540, 0, 501, 561));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 99, 36));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";"));
        label->setTextFormat(Qt::AutoText);
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(170, 450, 166, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        dateTimeEdit = new QDateTimeEdit(frame);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(200, 310, 111, 25));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 340, 471, 16));
        dateTimeEdit_2 = new QDateTimeEdit(frame);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");
        dateTimeEdit_2->setGeometry(QRect(200, 360, 111, 25));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 110, 471, 16));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 130, 471, 24));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 290, 471, 16));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 60, 471, 16));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 80, 471, 24));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 160, 461, 20));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 190, 471, 81));
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1056, 21));
        menuEdytuj = new QMenu(menubar);
        menuEdytuj->setObjectName("menuEdytuj");
        menuZadania = new QMenu(menubar);
        menuZadania->setObjectName("menuZadania");
        menuMenu_G_wne = new QMenu(menubar);
        menuMenu_G_wne->setObjectName("menuMenu_G_wne");
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName("statusbar");
        MainWindow2->setStatusBar(statusbar);

        menubar->addAction(menuEdytuj->menuAction());
        menubar->addAction(menuZadania->menuAction());
        menubar->addAction(menuMenu_G_wne->menuAction());
        menuEdytuj->addAction(actionDodaj_zadanie);
        menuEdytuj->addAction(actionUsu_zadanie);
        menuZadania->addAction(actionLista_zada);
        menuMenu_G_wne->addAction(actionPowr_t_do_menu_g_wnego);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "Kalendarz", nullptr));
        actionDodaj_zadanie->setText(QCoreApplication::translate("MainWindow2", "Dodaj zadanie", nullptr));
        actionUsu_zadanie->setText(QCoreApplication::translate("MainWindow2", "Usu\305\204 zadanie", nullptr));
        actionLista_zada->setText(QCoreApplication::translate("MainWindow2", "Lista zada\305\204", nullptr));
        actionPowr_t_do_menu_g_wnego->setText(QCoreApplication::translate("MainWindow2", "Powr\303\263t do menu g\305\202\303\263wnego", nullptr));
        label->setText(QCoreApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\">          zadania</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\">Data zako\305\204czenia</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\">Przedmiot:</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\">Data rozpocz\304\231cia</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\">      Nazwa zadania:</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\">Opis zadania:</p></body></html>", nullptr));
        menuEdytuj->setTitle(QCoreApplication::translate("MainWindow2", "Edytuj", nullptr));
        menuZadania->setTitle(QCoreApplication::translate("MainWindow2", "Zadania", nullptr));
        menuMenu_G_wne->setTitle(QCoreApplication::translate("MainWindow2", "Menu G\305\202\303\263wne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
