#-------------------------------------------------
#
# Project created by QtCreator 2014-07-21T19:28:48
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PETCollecter
TEMPLATE = app


SOURCES += main.cpp\
        petmainwindow.cpp \
    detector.cpp

HEADERS  += petmainwindow.h \
    AssistG.h \
    detector.h

FORMS    += petmainwindow.ui
