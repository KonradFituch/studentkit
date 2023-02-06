/********************************************************************************
** Form generated from reading UI file 'mainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QAction *actionPowr_t_do_menu_g_wnego;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuMenu_g_wne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName("MainWindow3");
        MainWindow3->resize(597, 415);
        MainWindow3->setMouseTracking(true);
        actionPowr_t_do_menu_g_wnego = new QAction(MainWindow3);
        actionPowr_t_do_menu_g_wnego->setObjectName("actionPowr_t_do_menu_g_wnego");
        centralwidget = new QWidget(MainWindow3);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setUnderline(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(62, 124, 186));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(58, 117, 175));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setBackground(QColor(58, 117, 175));
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        __qtablewidgetitem3->setBackground(QColor(58, 117, 175));
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        __qtablewidgetitem4->setBackground(QColor(58, 117, 175));
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QFont font2;
        font2.setBold(true);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font2);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font2);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font2);
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font2);
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font2);
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font2);
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font2);
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font2);
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font2);
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem14);
        QBrush brush(QColor(58, 117, 175, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setBackground(brush);
        tableWidget->setItem(0, 0, __qtablewidgetitem15);
        QBrush brush1(QColor(58, 117, 175, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setBackground(brush1);
        tableWidget->setItem(0, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem23);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: #E0FFFF;\n"
"text-align:center;"));

        verticalLayout->addWidget(tableWidget);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow3);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 597, 21));
        menuMenu_g_wne = new QMenu(menubar);
        menuMenu_g_wne->setObjectName("menuMenu_g_wne");
        MainWindow3->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow3);
        statusbar->setObjectName("statusbar");
        MainWindow3->setStatusBar(statusbar);

        menubar->addAction(menuMenu_g_wne->menuAction());
        menuMenu_g_wne->addAction(actionPowr_t_do_menu_g_wnego);

        retranslateUi(MainWindow3);

        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QCoreApplication::translate("MainWindow3", "Plan Zaj\304\231\304\207", nullptr));
        actionPowr_t_do_menu_g_wnego->setText(QCoreApplication::translate("MainWindow3", "Powr\303\263t do menu g\305\202\303\263wnego", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow3", "Poniedzia\305\202ek", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow3", "Wtorek", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow3", "\305\232roda", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow3", "Czwartek", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow3", "Pi\304\205tek", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow3", "8-9", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow3", "9-10", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow3", "10-11", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow3", "11-12", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow3", "12-13", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow3", "13-14", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow3", "14-15", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow3", "15-16", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow3", "16-17", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow3", "17-18", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow3", "Metody num. s.310", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow3", "Rachunek prawd. s.457", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 4);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow3", "Elektronika  s.567", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow3", " WF s.9", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow3", "C++ s.101", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow3", "Fizyka s.60", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow3", "J. ang s.21", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow3", " Python s.333", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        menuMenu_g_wne->setTitle(QCoreApplication::translate("MainWindow3", "Menu g\305\202\303\263wne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H
