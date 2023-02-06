/********************************************************************************
** Form generated from reading UI file 'lesson.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LESSON_H
#define UI_LESSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lesson
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lesson)
    {
        if (Lesson->objectName().isEmpty())
            Lesson->setObjectName("Lesson");
        Lesson->resize(800, 600);
        menubar = new QMenuBar(Lesson);
        menubar->setObjectName("menubar");
        Lesson->setMenuBar(menubar);
        centralwidget = new QWidget(Lesson);
        centralwidget->setObjectName("centralwidget");
        Lesson->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Lesson);
        statusbar->setObjectName("statusbar");
        Lesson->setStatusBar(statusbar);

        retranslateUi(Lesson);

        QMetaObject::connectSlotsByName(Lesson);
    } // setupUi

    void retranslateUi(QMainWindow *Lesson)
    {
        Lesson->setWindowTitle(QCoreApplication::translate("Lesson", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lesson: public Ui_Lesson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LESSON_H
