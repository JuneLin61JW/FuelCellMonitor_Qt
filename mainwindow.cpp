#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

#define STANDBY     0x00
#define NORMAL_ON   0x01
#define LOW_ON      0x02
#define NORMAL_OFF  0x03
#define LOW_OFF     0x04


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_7->setVisible(false);
    ui->collection_led->setVisible(false);

    po = new port;

    //ui->write->setIcon(QIcon(":/picture/write"));
    //ui->write->setIconSize(QSize(20, 20));
    //ui->write->setToolButtonStyle(Qt::ToolButtonIconOnly);

    usetool = new UseTool();
    usetool->setLED(ui->connect_led, 1, 12);
    usetool->setLED(ui->collection_led, 1, 12);
    ui->port_name->adjustSize();
    ui->database_name->adjustSize();
    ui->statusbar->addWidget(ui->port_status);
    ui->statusbar->addWidget(ui->database_status);

    //ui->stackedWidget->setCurrentIndex(0);


    QList<QMenu *> listMenu;
    //手动添加需要设置的QMenu
    listMenu<<ui->menu<<ui->menu_2<<ui->menu_3<<ui->menu_bat<<ui->menu_fca<<ui->menu_dc;

    //为所有的Menu 取消原装直角阴影 添加Qt的阴影
    foreach (QMenu *menu, listMenu) {
        menu->setWindowFlags(menu->windowFlags()  | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
        menu->setAttribute(Qt::WA_TranslucentBackground,true);
        QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
        shadow->setOffset(0, 0);
        shadow->setColor(QColor("#444444"));
        shadow->setBlurRadius(10);
        menu->setGraphicsEffect(shadow);
    }



}

MainWindow::~MainWindow()
{
    qDebug()<<"canthread_object:"<<canthread;
    delete po;
    delete usetool;
    canthread->stop();
    canthread->terminate();
    delete canthread;

    delete ui;


}




void MainWindow::receiveData(QVariant config,int portType)
{
    if (portType) {

    } else {
        CAN_CON cc = config.value<CAN_CON>();
        //qDebug()<<cc.baudrate;
        QString pname = cc.name;
        ui->port_name->setText(pname);
        usetool->setLED(ui->connect_led,2,12);
        GlobalData::connect_status = true;
        canthread->start();
        qDebug()<<"CAN连接线程："<<canthread->currentThreadId();
    }

}

void MainWindow::on_dev_con_triggered()
{
    connect(po, SIGNAL(sendData(QVariant,int)), this, SLOT(receiveData(QVariant,int)), Qt::UniqueConnection); //增加Qt::UniqueConnection避免信号触发多次槽函数
    po->exec();
}

void MainWindow::on_dev_discon_triggered()
{
    canthread->stop();
    canthread->reSetCAN();
    canthread->closeDevice();
    usetool->setLED(ui->connect_led,1,12);
    GlobalData::connect_status = false;
}

void MainWindow::on_write_widget_triggered()
{
    qDebug()<<"CAN写入线程："<<canthread->currentThreadId();
    qDebug()<<"CAN线程运行状态："<<canthread->isRunning();
    if (GlobalData::connect_status) {
        if (!canthread->isRunning()) {
            canthread->start();
            qDebug()<<"写入窗口重新启动CAN线程";
        }
        ui->stackedWidget->setCurrentIndex(1);
    } else {
        QMessageBox::warning(this, "警告", "设备未连接！");
    }
}

void MainWindow::on_monitor_widget_triggered()
{
    qDebug()<<"CAN监测线程："<<canthread->currentThreadId();
    if (GlobalData::connect_status) {
        if (!canthread->isRunning()) {
            canthread->start();
            qDebug()<<"监测窗口重新启动CAN线程";
        }
        ui->stackedWidget->setCurrentIndex(0);
    } else {
        QMessageBox::warning(this, "警告", "设备未连接！");
    }

}

void MainWindow::on_enter_bl_triggered()
{
    if (GlobalData::connect_status) {
        canthread->stop();
        qDebug()<<"CAN线程运行状态："<<canthread->isRunning();
        ui->stackedWidget->setCurrentIndex(2);
    } else {
        QMessageBox::warning(this, "警告", "设备未连接！");
    }

}

void MainWindow::on_history_data_triggered()
{
    if (GlobalData::connect_status) {
        ui->stackedWidget->setCurrentIndex(3);
    } else {
        QMessageBox::warning(this, "警告", "设备未连接！");
    }

}

void MainWindow::SendOrder_Question(uint8_t OrderType, UINT ID, const unsigned char *data)
{
    QString typeStr;
    if (GlobalData::connect_status) {
        switch (OrderType) {
        case STANDBY:
        {
            typeStr = "待机状态";
            break;
        }
        case NORMAL_ON:
        {
            typeStr = "正常开机";
            break;
        }
        case LOW_ON:
        {
            typeStr = "低温开机";
            break;
        }
        case NORMAL_OFF:
        {
            typeStr = "正常关机";
            break;
        }
        case LOW_OFF:
        {
            typeStr = "低温关机";
            break;
        }
        default:
            break;
        }

        //QFont font;//实例化QFont对象

        //font.setFamily("微软雅黑");//字体

        // 创建一个question弹出对话框，添加两个按钮：Yes和No
        QMessageBox *msgBox = new QMessageBox(QMessageBox::Question, "确认", "确认要发送["+typeStr+"]命令吗?", QMessageBox::Yes | QMessageBox::No);

        //弹窗设置字体
        //msgBox->setFont(font);

        // 将原本显示“Yes”的按钮改为显示“是”
        msgBox->button(QMessageBox::Yes)->setText("是");

        // 将原本显示“No”的按钮改为显示“否”
        msgBox->button(QMessageBox::No)->setText("否");

        // 启动对话框，用res变量记录用户最终点选的按钮
        int res = msgBox->exec();
        if (res == QMessageBox::Yes) {
            canthread->sendData(ID,0,0,data,8);
        }
    } else {
        QMessageBox::warning(this, "警告", "设备未连接！");
    }
}

void MainWindow::on_standby_triggered()
{
    unsigned char data[8];
    memset(data,0,8);
    SendOrder_Question(STANDBY,0x123,data);

}

void MainWindow::on_normal_on_triggered()
{
    unsigned char data[8];
    memset(data,0,8);
    data[7] = 0x01;
    SendOrder_Question(NORMAL_ON,0x123,data);
}




void MainWindow::on_low_on_triggered()
{
    unsigned char data[8];
    memset(data,0,8);
    data[7] = 0x02;
    SendOrder_Question(LOW_ON,0x123,data);
}


void MainWindow::on_normal_off_triggered()
{
    unsigned char data[8];
    memset(data,0,8);
    data[7] = 0x03;
    SendOrder_Question(NORMAL_OFF,0x123,data);
}


void MainWindow::on_low_off_triggered()
{
    unsigned char data[8];
    memset(data,0,8);
    data[7] = 0x04;
    SendOrder_Question(LOW_OFF,0x123,data);
}

