#include "mainwindow.h"
#include "crashhandler.h"
#include <QApplication>
//#include "vld.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CrashHandler::initCrashHandler(); // 注册崩溃处理功能
    MainWindow w;
    w.show();
    return a.exec();
}
