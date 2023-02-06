#include "mainwindow.h"
/*#include "mainwindow1.h"
#include "mainwindow2.h"
#include "mainwindow3.h"*/
#include <mainwindow4.h>

#include <QApplication>

#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "projekt_3_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }



    MainWindow window;
    window.show();





    return a.exec();
}
