#-------------------------------------------------
#
# Project created by QtCreator 2017-12-29T19:22:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = smartCradle
TEMPLATE = app


SOURCES += main.cpp\
        cradlewindow.cpp \
    logindialog.cpp \
    usermanger.cpp \
    heathcare.cpp \
    learndiolag.cpp \
    safetymonitor.cpp

HEADERS  += cradlewindow.h \
    logindialog.h \
    usermanger.h \
    heathcare.h \
    learndiolag.h \
    safetymonitor.h

FORMS    += cradlewindow.ui \
    logindialog.ui \
    usermanger.ui \
    heathcare.ui \
    learndiolag.ui \
    safetymonitor.ui

RESOURCES += \
    mypicture.qrc

CONFIG += qwt
DEFINES += QT_DLL QWT_DLL
LIBS += -L"F:\QT5.5.1\qctr\qwt-6.1.3\qwt-6.1.3\lib" -lqwtd
LIBS += -L"F:\QT5.5.1\qctr\qwt-6.1.3\qwt-6.1.3\lib" -lqwt
INCLUDEPATH += F:\QT5.5.1\5.5\mingw492_32\include\QWT
