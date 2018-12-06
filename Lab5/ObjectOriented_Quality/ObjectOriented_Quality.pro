#-------------------------------------------------
#
# Project created by QtCreator 2018-10-23T12:22:42
#
#-------------------------------------------------

QT       += core gui

QT       += testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ObjectOriented_Quality
CONFIG   += console
CONFIG   += app_bundle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    test_mainwindow.cpp \
    test_input.cpp

HEADERS  += mainwindow.h \
    test_mainwindow.h \
    test_input.h


FORMS    += mainwindow.ui
