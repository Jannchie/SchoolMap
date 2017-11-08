#-------------------------------------------------
#
# Project created by QtCreator 2017-06-06T14:52:39
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SchoolMap
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Activity.cpp \
    MGraph.cpp \
    DijkstraFindPath.cpp \
    Additem.cpp \
    activitylinklist.cpp \
    PathQueue.cpp \
    PaintLabel.cpp \
    login.cpp

HEADERS  += mainwindow.h \
    MGraph.h \
    dijkstraFindPath.h \
    paintlabel.h \
    activity.h \
    additem.h \
    activitylinklist.h \
    pathqueue.h \
    login.h

FORMS    += mainwindow.ui \
    additem.ui \
    login.ui


RESOURCES += \
    qrc.qrc

DISTFILES +=
