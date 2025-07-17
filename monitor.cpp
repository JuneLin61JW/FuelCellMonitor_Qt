#include "monitor.h"
#include "ui_monitor.h"
#include "QDebug"

#pragma pack(1)
typedef struct
{
    int PRODUCT_CODE;
    int FCU_LIFE;
    int FCU_HARDWARE;
    int FCU_SOFTWARE;
    int FCU_ONOFF;
}adc_value;
adc_value get_value;
#pragma pack()

QString fileName;
void CreateProfile()
{
    //保存为TXT文件
    bool exist;
    QDateTime datetime;
    QDir *folder = new QDir;
    QString time_str = datetime.currentDateTime().toString("yyyy-MM-dd HH-mm-ss-zzz");

    if(folder==NULL)
    {
        qDebug()<<"folder指针不是空指针";
    }
    //QString str = "this is testing for save data to txt file by Qt programming.";
    exist = folder->exists("D:/fuel cell data (can)");//查看目录是否存在（例子是保存到桌面）

    if(!exist)
    {//不存在就创建
        bool ok = folder->mkdir("D:/fuel cell data (can)");
        if(ok){
            //QMessageBox::warning(this,tr("创建目录"),tr("创建成功!"));//添加提示方便查看是否成功创建
        }else{
            //QMessageBox::warning(this,tr("创建目录"),tr("创建失败"));
        }
    }

    fileName ="D:/fuel cell data (can)/"+ time_str + ".txt";
    delete folder;
    folder=NULL;
    QFile file(fileName);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text)){//追加写入 添加结束符\r\n
        //QMessageBox::warning(this,tr("错误"),tr("打开文件失败,数据保存失败"));
        return ;
    }

    QTextStream textStream(&file);
    textStream<<time_str<<","<<"PRODUCT_CODE"<<","<<"FCU_HARDWARE"<<","<<"FCU_SOFTWARE"<<",";

}

void saveData()
{
    QFile file(fileName);
    QDateTime datetime;
    QString time_str = datetime.currentDateTime().toString("yyyy-MM-dd HH-mm-ss-zzz");
    //qDebug()<<time_str;
    if(!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
    {   //追加写入 添加结束符\r\n
        //QMessageBox::warning(this,tr("错误"),tr("打开文件失败,数据保存失败"));
        return ;
    }
    QTextStream textStream(&file);

    textStream<<time_str<<","<<get_value.PRODUCT_CODE<<","<<get_value.FCU_HARDWARE<<","<<get_value.FCU_SOFTWARE<<",";

    //file.close();
}


monitor::monitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::monitor)
{
    ui->setupUi(this);
    CreateProfile();
    dataTimer = new QTimer();
    dataTimer->setInterval(60);
    dataTimer->start();

    connect(canthread,&CANThread::getProtocolData,this,&monitor::onGetProtocolData,Qt::UniqueConnection);
    connect(dataTimer, SIGNAL(timeout()), this, SLOT(showData()));
}

monitor::~monitor()
{
    delete dataTimer;
    delete ui;

}



void monitor::onGetProtocolData(VCI_CAN_OBJ *vci,unsigned int dwRel,unsigned int channel)
{
    for(unsigned int i = 0;i < dwRel;i ++)
    {
        QString str = "";
        if(vci[i].RemoteFlag == 0)//数据帧显示数据
        {
            int j;
            for(j = 0;j < vci[i].DataLen;j ++)
                str += QString("%1").arg(vci[i].Data[j],8,2,QChar('0'));//第一个参数是要填充的数字，第二个参数为最小宽度，第三个参数为进制，第四个参数为当原始数字长度不足最小宽度时用于填充的字符
            //qDebug()<<vci[i].Data[j];
        }

        bool ok;
        //strID="0x" + QString("%1").arg(vci[i].ID,3,16,QChar('0'));

        switch(vci[i].ID){
        case 529:
        {
            //0x211

            get_value.PRODUCT_CODE=str.midRef(0,32).toInt(&ok,2);//正则表达式去除字符串空格str.midRef(p,n) p为起始位，n为长度进行截取字符串

            get_value.FCU_LIFE=str.midRef(32,8).toInt(&ok,2);

            get_value.FCU_HARDWARE=str.midRef(40,8).toInt(&ok,2);

            get_value.FCU_SOFTWARE=str.midRef(48,8).toInt(&ok,2);

            get_value.FCU_ONOFF=str.midRef(56,8).toInt(&ok,2);
            break;
        }


        }

    }
}

void monitor::showData()
{
    ui->PRODUCT_CODE->display(get_value.PRODUCT_CODE);
    ui->FCU_LIFE->display(get_value.FCU_LIFE);
    ui->FCU_HARDWARE->display(get_value.FCU_HARDWARE);
    ui->FCU_SOFTWARE->display(get_value.FCU_SOFTWARE);
    ui->FCU_ONOFF->display(get_value.FCU_ONOFF);


    saveData();

    //解析状态与故障信息

}

void monitor::setLabel(QLabel *label, int bg_color ,QString text)
{
    // 设置字体颜色为白色
    QString font_color = "color: #ffffff;";
    // 设置背景颜色
    QString background = "background-color:";
    switch (bg_color) {
    case 0:
        // 绿色
        background += "#00aa00;";
        break;
    case 1:
        // 红色
        background += "#aa0000;";
        break;
    default:
        break;
    }

    QString SheetStyle = font_color + background;
    label->setStyleSheet(SheetStyle);
    label->setText(text);
}

void monitor::FC1_State(uint8_t value)
{
    uint8_t work = value >> 4;
    uint8_t temp = (value & 0x08) >> 3;
    uint8_t voltage = (value & 0x04) >> 2;
    uint8_t pressure = (value & 0x02) >> 1;
    uint8_t vent = value & 0x01;
    /*qDebug()<<"work="<<work;
    qDebug()<<"temp="<<temp;
    qDebug()<<"voltage="<<voltage;
    qDebug()<<"pressure="<<pressure;
    qDebug()<<"vent="<<vent;*/

    switch (work) {
    case 0:
    {
        setLabel(ui->FC1_WORK,0,"无故障");
        break;
    }
    case 1:
    {
        setLabel(ui->FC1_WORK,0,"初始化");
        break;
    }
    case 2:
    {
        setLabel(ui->FC1_WORK,0,"待机");
        break;
    }
    case 3:
    {
        setLabel(ui->FC1_WORK,0,"正常开机中");
        break;
    }
    case 4:
    {
        setLabel(ui->FC1_WORK,0,"低温开机中");
        break;
    }

    default:
        break;
    }

    if (temp) {
        setLabel(ui->FC1_FAULT_T,1,"堆温过高");
    } else {
        setLabel(ui->FC1_FAULT_T,0,"堆温正常");
    }
}





