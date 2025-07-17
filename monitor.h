#ifndef MONITOR_H
#define MONITOR_H

#include <QWidget>
#include "canthread.h"
#include <QTimer>
#include <QDateTime>
#include <QDir>
#include "port.h"
#include <QLabel>



namespace Ui {
class monitor;
}

class monitor : public QWidget
{
    Q_OBJECT

public:
    explicit monitor(QWidget *parent = nullptr);
    ~monitor();

private slots:

    void onGetProtocolData(VCI_CAN_OBJ *vci,unsigned int dwRel,unsigned int channel);
    void showData();


private:
    Ui::monitor *ui;

    CANThread* canthread = CANThread::getInstance();

    QTimer *dataTimer;

    void setLabel(QLabel *label, int bg_color, QString text);

    void FC1_State(uint8_t value);
    void TK1_State(uint8_t value);
    void FC2_State(uint8_t value);
    void TK2_State(uint8_t value);
    void BAT_State(uint8_t value);
    void DCF_State(uint8_t value);
    void FCA_State(uint8_t value);
    void Fault_State(uint8_t value);

};

#endif // MONITOR_H
