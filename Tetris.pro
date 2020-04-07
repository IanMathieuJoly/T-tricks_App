TEMPLATE     = vcapp
TARGET       = Tetris
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += forme.h game.h level.h test.h mainwindow.h optionwindow.h gamewindow.h 
SOURCES     += forme.cpp game.cpp level.cpp test.cpp mainwindow.cpp optionwindow.cpp gamewindow.cpp  main.cpp
INCLUDEPATH += ../Tetris
QT += widgets multimedia
