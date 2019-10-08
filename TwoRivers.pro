#-------------------------------------------------
#
# Project created by QtCreator 2019-09-10T14:40:38
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TwoRivers
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    employee.cpp \
    employeelist.cpp \
    employeehandler.cpp \
    employeereader.cpp \
    employeewriter.cpp \
    model.cpp \
    employeeabsmodel.cpp \
    simplewriter.cpp

HEADERS  += mainwindow.h \
    employee.h \
    employeelist.h \
    employeehandler.h \
    employeereader.h \
    employeewriter.h \
    model.h \
    employeeabsmodel.h \
    simplewriter.h

FORMS    += mainwindow.ui
