QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

include($$PWD/sqlite/sqlite.pri)
include($$PWD/Delegate/Delegate.pri)
include($$PWD/can/can.pri)
include($$PWD/qcustomplot/qcustomplot.pri)
include($$PWD/utils/utils.pri)
include($$PWD/CrashHandler/CrashHandler.pri)

INCLUDEPATH += \
    $$PWD/sqlite \
    $$PWD/can \
    $$PWD/Delegate \
    $$PWD/qcustomplot \
    $$PWD/utils \
    $$PWD/CrashHandler

SOURCES += \
    bootloader.cpp \
    main.cpp \
    mainwindow.cpp \
    monitor.cpp \
    port.cpp \
    sql_data.cpp \
    write_data.cpp

HEADERS += \
    bootloader.h \
    mainwindow.h \
    monitor.h \
    oem_protocol.h \
    port.h \
    sql_data.h \
    write_data.h

FORMS += \
    bootloader.ui \
    mainwindow.ui \
    monitor.ui \
    port.ui \
    sql_data.ui \
    write_data.ui


RESOURCES += \
    res.qrc

msvc{
    QMAKE_CXXFLAGS += /source-charset:utf-8 /execution-charset:utf-8
}



unix:!macx|win32: LIBS += -L$$PWD/lib/ -lControlCAN

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

contains(QT_ARCH, x86_64){
strLib = Win64
} else {
strLib = Win32
}
INCLUDEPATH += $$quote(D:\Program Files (x86)\Visual Leak Detector\include)
#LIBS += -L$$quote(D:/Program Files (x86)/Visual Leak Detector/lib/$$strLib) -lvld

