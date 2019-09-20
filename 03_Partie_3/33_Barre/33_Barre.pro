TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        barre.cpp \
        barrecarree.cpp \
        barreequerre.cpp \
        barrehexagonale.cpp \
        barrehexagonale_creuse.cpp \
        barreoctogonal_creuse.cpp \
        barreoctogonale.cpp \
        barrerectangle.cpp \
        barreronde.cpp \
        barreronde_creuse.cpp \
        main.cpp

HEADERS += \
    barre.h \
    barrecarree.h \
    barreequerre.h \
    barrehexagonale.h \
    barrehexagonale_creuse.h \
    barreoctogonal_creuse.h \
    barreoctogonale.h \
    barrerectangle.h \
    barreronde.h \
    barreronde_creuse.h
