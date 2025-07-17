#ifndef WRITE_DATA_H
#define WRITE_DATA_H

#include <QWidget>
#include <globaldata.h>
#include <QStandardItem>
#include <QStandardItemModel>
#include <buttondelegate.h>
#include <editDelegate.h>
#include "canthread.h"
#include "usetool.h"
#include <QJsonObject> //封装JSON对象 { }
#include <QJsonArray> //封装JSON数组 [ ]
#include <QJsonDocument> //读写JSON文档
#include <QJsonValue> //封装JSON值 int，float，double，bool，{ }，[ ]等
#include <QJsonParseError> //报告JSON处理过程中出现的错误
#include <QFileDialog>
#include <oem_protocol.h>



namespace Ui {
class write_data;
}

class write_data : public QWidget {
    Q_OBJECT

public:
    explicit write_data(QWidget* parent = nullptr);
    ~write_data();

private:
    Ui::write_data* ui;

    //自定义delegate
    editDelegate* ed = nullptr;
    //buttonDelegate* bd = nullptr;

    UseTool* usetool = new UseTool();

    CANThread* canthread = CANThread::getInstance();

    void initModel();
    void initDelegate();
    void initView();
    void initOperate();

    bool isOnline = false;

    //存储自定义数据的通用模型
    QStandardItemModel* MODEL_DCF = nullptr;
    QStandardItemModel* MODEL_FCCB_AD = nullptr;
    QStandardItemModel* MODEL_FCCB_PARAMETER = nullptr;
    QStandardItemModel* MODEL_FCCB_CONTROL = nullptr;
    QStandardItemModel* MODEL_FCCB_PROTECT = nullptr;
    QStandardItemModel* MODEL_FCCB_DCDC = nullptr;

    //定义数据名称值表
    QStringList LIST_DCF;
    QStringList LIST_ENG_DCF;

    QStringList LIST_FCCB_AD;
    QStringList LIST_ENG_FCCB_AD;

    QStringList LIST_FCCB_PARAMETER;
    QStringList LIST_ENG_FCCB_PARAMETER;

    QStringList LIST_FCCB_CONTROL;
    QStringList LIST_ENG_FCCB_CONTROL;

    QStringList LIST_FCCB_PROTECT;
    QStringList LIST_ENG_FCCB_PROTECT;

    QStringList LIST_FCCB_DCDC;
    QStringList LIST_ENG_FCCB_DCDC;

    bool handled = false;

private slots:
    void on_projectConfig_cbx_currentIndexChanged(int index);
    void on_check_module_clicked();
    void on_read_module_clicked();

    void onGetProtocolData(VCI_CAN_OBJ *vci,unsigned int dwRel,unsigned int channel);
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();

};

#endif // WRITE_DATA_H
