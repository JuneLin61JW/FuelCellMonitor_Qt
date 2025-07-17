#ifndef PORT_H
#define PORT_H

#include <QDialog>
#include <QVariant>
#include "canthread.h"

typedef struct CAN_CON {
    QString name;
    int index;
    int baudrate;
    int devIndex;
    int channel;
} CAN_CON;

Q_DECLARE_METATYPE(CAN_CON)

namespace Ui {
class port;
}

class port : public QDialog {
    Q_OBJECT

public:
    explicit port(QWidget* parent = nullptr);
    ~port();

private slots:
    void on_confirm_clicked();

private:
    Ui::port* ui;

    CANThread* canthread = CANThread::getInstance();

signals:
    void sendData(QVariant config,int portType);
};

#endif // PORT_H
