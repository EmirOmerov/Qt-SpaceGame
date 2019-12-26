#-------------------------------------------------
#
# Project created by Emir H-Omerovic
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nova_igra
TEMPLATE = app


SOURCES += main.cpp \
    game.cpp \
    raketa.cpp \
    asteroid.cpp \
    poeni.cpp \
    zivoti.cpp \
    igrac.cpp

HEADERS  += \
    game.h \
    raketa.h \
    asteroid.h \
    poeni.h \
    zivoti.h \
    igrac.h

FORMS    +=

RESOURCES += \
    resursi.qrc \
