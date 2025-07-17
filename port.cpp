#include "port.h"
#include "ui_port.h"
#include "QMessageBox"
#include "QDebug"

port::port(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::port)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);



}

port::~port()
{
    qDebug()<<"canthread_object:"<<canthread;
    delete ui;
}

void port::on_confirm_clicked()
{
    int typeIndex = ui->tabWidget->currentIndex();
    if (typeIndex) { //串口

    } else { //CAN接口
        CAN_CON co;
        QVariant variant;

        //CAN连接参数结构体赋值
        co.index = ui->can_index->currentIndex();
        if (ui->can_baudrate->currentText().indexOf("Kbps") != -1) {
            co.baudrate = ui->can_baudrate->currentText().remove("Kbps").toUInt();
        } else {
            co.baudrate = QVariant(ui->can_baudrate->currentText().remove("Mbps").toFloat()).toUInt();
        }
        co.devIndex = ui->can_tpye->currentIndex();
        co.name = ui->can_tpye->currentText();
        co.channel = ui->can_channel->currentIndex();

        //设备连接

        bool dev = canthread->openDevice(4,co.index,co.baudrate,ui->can_channel->currentIndex());
        if (dev == true) {
            if (canthread->initCAN()) {
                if (canthread->startCAN()) {
                    variant.setValue(co);
                    emit sendData(variant,typeIndex);
                    accept();
                } else {
                    QMessageBox::warning(this, "警告", "CAN启动失败！");
                }
            } else {
                QMessageBox::warning(this, "警告", "CAN初始化失败！");
            }
        } else {
            QMessageBox::warning(this, "警告", "打开设备失败！");
        }
    }


}

