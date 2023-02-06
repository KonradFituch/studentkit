/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label;
    QPushButton *otworz_notatnik;
    QPushButton *otworz_kalendarz;
    QPushButton *otworz_planzajec;
    QPushButton *wjdz_z_programu;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1618, 735);
        MainWindow->setMouseTracking(true);
        MainWindow->setTabShape(QTabWidget::Triangular);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font.setPointSize(28);
        font.setBold(true);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 40, 676, 173));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Viner Hand ITC")});
        font1.setPointSize(72);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(58, 117, 175)"));
        label->setLineWidth(1);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        label->setMargin(9);
        otworz_notatnik = new QPushButton(frame);
        otworz_notatnik->setObjectName("otworz_notatnik");
        otworz_notatnik->setGeometry(QRect(670, 230, 301, 111));
        otworz_notatnik->setCursor(QCursor(Qt::PointingHandCursor));
        otworz_notatnik->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 244, 255);\n"
"font: 700 22pt \"Rockwell\";\n"
"color: rgb(58, 117, 175);\n"
"border-color: rgb(58, 117, 175);\n"
""));
        otworz_kalendarz = new QPushButton(frame);
        otworz_kalendarz->setObjectName("otworz_kalendarz");
        otworz_kalendarz->setGeometry(QRect(670, 360, 301, 111));
        otworz_kalendarz->setCursor(QCursor(Qt::PointingHandCursor));
        otworz_kalendarz->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 244, 255);\n"
"font: 700 22pt \"Rockwell\";\n"
"color: rgb(58, 117, 175);\n"
"border-color: rgb(58, 117, 175);\n"
""));
        otworz_planzajec = new QPushButton(frame);
        otworz_planzajec->setObjectName("otworz_planzajec");
        otworz_planzajec->setGeometry(QRect(670, 490, 301, 111));
        otworz_planzajec->setCursor(QCursor(Qt::PointingHandCursor));
        otworz_planzajec->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 244, 255);\n"
"font: 700 22pt \"Rockwell\";\n"
"color: rgb(58, 117, 175);\n"
"border-color: rgb(58, 117, 175);\n"
""));
        wjdz_z_programu = new QPushButton(frame);
        wjdz_z_programu->setObjectName("wjdz_z_programu");
        wjdz_z_programu->setGeometry(QRect(780, 650, 80, 24));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font2.setPointSize(11);
        font2.setBold(true);
        wjdz_z_programu->setFont(font2);
        wjdz_z_programu->setCursor(QCursor(Qt::PointingHandCursor));
        wjdz_z_programu->setAutoFillBackground(false);
        wjdz_z_programu->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 117, 175);\n"
"\n"
"color: rgb(202, 244, 255);"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1618, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "S T U D E N T K I T", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "STUDENTKIT", nullptr));
        otworz_notatnik->setText(QCoreApplication::translate("MainWindow", "NOTATNIK", nullptr));
        otworz_kalendarz->setText(QCoreApplication::translate("MainWindow", "KALENDARZ", nullptr));
        otworz_planzajec->setText(QCoreApplication::translate("MainWindow", "PLAN ZAJEC", nullptr));
        wjdz_z_programu->setText(QCoreApplication::translate("MainWindow", "Wyjd\305\272 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
