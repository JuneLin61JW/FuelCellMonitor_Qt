#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <globaldata.h>
#include "port.h"
#include "sql_data.h"
#include "write_data.h"
#include "bootloader.h"
#include "canthread.h"
#include "usetool.h"
#include "monitor.h"
#include <QAbstractButton>
#include <QGraphicsDropShadowEffect>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();


private slots:
    void receiveData(QVariant config,int portType);

    void on_dev_con_triggered();

    void on_write_widget_triggered();

    void on_monitor_widget_triggered();

    void on_enter_bl_triggered();

    void on_standby_triggered();

    void on_history_data_triggered();

    void on_dev_discon_triggered();

    void on_normal_on_triggered();

    void on_low_on_triggered();

    void on_normal_off_triggered();

    void on_low_off_triggered();

private:
    Ui::MainWindow* ui;
    port* po;

    CANThread* canthread = CANThread::getInstance();

    UseTool *usetool;

    void SendOrder_Question(uint8_t OrderType,UINT ID,const unsigned char *data);

signals:


};
#endif // MAINWINDOW_H
