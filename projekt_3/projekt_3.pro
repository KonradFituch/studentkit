QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    mainwindow2.cpp \
    mainwindow3.cpp \
    mainwindow4.cpp

HEADERS += \
    mainwindow.h \
    mainwindow1.h \
    mainwindow2.h \
    mainwindow3.h \
    mainwindow4.h

FORMS += \
    mainwindow.ui \
    mainwindow1.ui \
    mainwindow2.ui \
    mainwindow3.ui \
    mainwindow4.ui

TRANSLATIONS += \
    projekt_3_pl_PL.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../img/ikonki_notatnik.qrc \
    ../img/moje_ikony.qrc \
    ../img/moje_zasoby.qrc
