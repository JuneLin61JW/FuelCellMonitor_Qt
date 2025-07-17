#include "write_data.h"
#include "ui_write_data.h"
#include <QDebug>
#include <QtEndian>
#include <QMessageBox>
#include <QToolTip>

write_data::write_data(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::write_data)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
    //隐藏加载参数的功能，暂时用不上
    ui->pushButton_9->setVisible(false);
    ui->pushButton_10->setVisible(false);

    initModel();
    initDelegate();
    initView();
    initOperate();

    connect(canthread,&CANThread::getProtocolData,this,&write_data::onGetProtocolData,Qt::UniqueConnection);

    usetool->setLED(ui->module_led,1,12);

}

write_data::~write_data()
{
    delete usetool;
    delete ed;
    delete ui;
}

void write_data::initModel()
{
    //QStandardItemModel类提供用于存储自定义数据的通用模型
    MODEL_DCF = new QStandardItemModel(this);

    //MODEL_FCCB_AD = new QStandardItemModel(this);
    //MODEL_FCCB_PARAMETER = new QStandardItemModel(this);
    //MODEL_FCCB_CONTROL = new QStandardItemModel(this);
    //MODEL_FCCB_PROTECT = new QStandardItemModel(this);
    //MODEL_FCCB_DCDC = new QStandardItemModel(this);

    //初始化设置列数与水平表头
    MODEL_DCF->setColumnCount(3);

    //MODEL_FCCB_AD->setColumnCount(3);
    //MODEL_FCCB_PARAMETER->setColumnCount(3);
    //MODEL_FCCB_CONTROL->setColumnCount(3);
    //MODEL_FCCB_PROTECT->setColumnCount(3);
    //MODEL_FCCB_DCDC->setColumnCount(3);

    QStringList HorizontalHeader = {"参数名称","值","修改"};
    for (int i=0;i<HorizontalHeader.size();i++) {
        MODEL_DCF->setHeaderData(i,Qt::Horizontal,HorizontalHeader.at(i));

        //MODEL_FCCB_AD->setHeaderData(i,Qt::Horizontal,HorizontalHeader.at(i));
        //MODEL_FCCB_PARAMETER->setHeaderData(i,Qt::Horizontal,HorizontalHeader.at(i));
        //MODEL_FCCB_CONTROL->setHeaderData(i,Qt::Horizontal,HorizontalHeader.at(i));
        //MODEL_FCCB_PROTECT->setHeaderData(i,Qt::Horizontal,HorizontalHeader.at(i));
        //MODEL_FCCB_DCDC->setHeaderData(i,Qt::Horizontal,HorizontalHeader.at(i));
    }

    //初始化设置行数与参数名称等值
//=========================================================DCF模块=========================================================
    LIST_DCF <<"DAC芯片的参考电压(mV)"<<"STM32芯片ADC的参考电压(mV)"<<"风扇DC驱动源选择"<<"DCF类型参数"<<"DCF输入电流传感静态偏差值(mA)"<<"DCF输入电流传感灵敏度值(mV/A)"<<"燃料电池电压检测高边电阻(0.1KΩ)"<<"燃料电池电压检测低边电阻(0.1KΩ)"<<"电池电压检测高边电阻(0.1KΩ)"<<"电池电压检测低边电阻(0.1KΩ)"<<"DCF输出电压最大值(mV)"<<"DCF输入电流最大值(mA)"<<"DCF预设置的输出电压值(0.1V)";

    LIST_ENG_DCF<<"MCP4728_VIN (mV)"<<"ADC_REF_VOL (mV)"<<"FAN_DC_TYPE"<<"DCF_PARAMETER"<<"DCF_Iin_ERROR (mA)"<<"DCF_Iin_SENS (mV/A)"<<"DCF_Uin_HRes (0.1KΩ)"<<"DCF_Uin_LRes (0.1KΩ)"<<"DCF_Uout_HRes (0.1KΩ)"<<"DCF_Uout_LRes (0.1KΩ)"<<"DCF_Uout_MAX (mV)"<<"DCF_Iin_MAX (mA)"<<"DCF_PRESET_Uout_VALUE (0.1V)";
    MODEL_DCF->setRowCount(LIST_DCF.size());
    for (int i = 0; i < LIST_DCF.size(); i++) {
        QStandardItem *item = new QStandardItem(LIST_DCF.at(i));
        item->setToolTip(LIST_ENG_DCF.at(i));
        MODEL_DCF->setItem(i,0,item);
        MODEL_DCF->setItem(i, 1, new QStandardItem("0"));
        MODEL_DCF->setItem(i, 2, new QStandardItem("0"));
    }
    ui->TableView_DCF->setModel(MODEL_DCF);





}

void write_data::initDelegate()
{
    ed = new editDelegate;
    ui->TableView_DCF->setItemDelegate(ed);
    ui->TableView_FCCB_FCU->setItemDelegate(ed);
    ui->TableView_FCCB_DCF->setItemDelegate(ed);
    ui->TableView_FCCB_BAT->setItemDelegate(ed);
}

void write_data::initView()
{
    //单行选中=按行选中+单次选择
    ui->TableView_DCF->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->TableView_DCF->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->TableView_FCCB_FCU->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->TableView_FCCB_FCU->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->TableView_FCCB_DCF->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->TableView_FCCB_DCF->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->TableView_FCCB_BAT->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->TableView_FCCB_BAT->setSelectionMode(QAbstractItemView::SingleSelection);

    //取消编辑
    ui->TableView_DCF->setEditTriggers(QAbstractItemView::CurrentChanged);

    ui->TableView_FCCB_FCU->setEditTriggers(QAbstractItemView::CurrentChanged);

    ui->TableView_FCCB_DCF->setEditTriggers(QAbstractItemView::CurrentChanged);

    ui->TableView_FCCB_BAT->setEditTriggers(QAbstractItemView::CurrentChanged);

    //选中item时自动滚动以使其可见
    ui->TableView_DCF->setAutoScroll(false);

    ui->TableView_FCCB_FCU->setAutoScroll(false);

    ui->TableView_FCCB_DCF->setAutoScroll(false);

    ui->TableView_FCCB_BAT->setAutoScroll(false);

    //设置垂直表头是否可见
    ui->TableView_DCF->verticalHeader()->setVisible(false);

    ui->TableView_FCCB_FCU->verticalHeader()->setVisible(false);

    ui->TableView_FCCB_DCF->verticalHeader()->setVisible(false);

    ui->TableView_FCCB_BAT->verticalHeader()->setVisible(false);

    //取消表头高亮，取消之后选中checked样式不生效，不取消选中表头时字体加粗等没法直接去掉
    //ui->TableView_DCF->verticalHeader()->setHighlightSections(false);
    ui->TableView_DCF->horizontalHeader()->setHighlightSections(false);

    ui->TableView_FCCB_FCU->horizontalHeader()->setHighlightSections(false);

    ui->TableView_FCCB_DCF->horizontalHeader()->setHighlightSections(false);

    ui->TableView_FCCB_BAT->horizontalHeader()->setHighlightSections(false);

    //默认列宽
    /*ui->TableView_DCF->horizontalHeader()->setDefaultSectionSize(200);

    ui->TableView_FCCB_FCU->horizontalHeader()->setDefaultSectionSize(200);

    ui->TableView_FCCB_DCF->horizontalHeader()->setDefaultSectionSize(200);

    ui->TableView_FCCB_BAT->horizontalHeader()->setDefaultSectionSize(200);*/

    //所有列都扩展自适应宽度，填充充满整个屏幕宽度
    ui->TableView_DCF->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->TableView_FCCB_FCU->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->TableView_FCCB_DCF->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->TableView_FCCB_BAT->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //对第0列单独设置固定宽度
    //ui->TableView_FCCB_FCU->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    //ui->TableView_FCCB_FCU->setColumnWidth(0,300);

    //可以拖动交换列
    ui->TableView_DCF->horizontalHeader()->setSectionsMovable(true);

    ui->TableView_FCCB_FCU->horizontalHeader()->setSectionsMovable(true);

    ui->TableView_FCCB_DCF->horizontalHeader()->setSectionsMovable(true);

    ui->TableView_FCCB_BAT->horizontalHeader()->setSectionsMovable(true);

    //默认行高
    ui->TableView_DCF->verticalHeader()->setDefaultSectionSize(25);

    ui->TableView_FCCB_FCU->verticalHeader()->setDefaultSectionSize(25);

    ui->TableView_FCCB_DCF->verticalHeader()->setDefaultSectionSize(25);

    ui->TableView_FCCB_BAT->verticalHeader()->setDefaultSectionSize(25);

    //表头文字对齐
    //ui->TableView_DCF->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->TableView_DCF->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->TableView_FCCB_FCU->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->TableView_FCCB_DCF->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->TableView_FCCB_BAT->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

    //滚动默认是按照item宽，设置为平滑滚动
    //平滑 QAbstractItemView::ScrollPerPixel
    //元素 QAbstractItemView::ScrollPerItem
    ui->TableView_DCF->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->TableView_DCF->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

    ui->TableView_FCCB_FCU->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->TableView_FCCB_FCU->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

    ui->TableView_FCCB_DCF->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->TableView_FCCB_DCF->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

    ui->TableView_FCCB_BAT->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->TableView_FCCB_BAT->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

    //scrollbar的显示时机
    //ui->TableView_DCF->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //设置表格线是否可见
    ui->TableView_DCF->setShowGrid(false);

    ui->TableView_FCCB_FCU->setShowGrid(false);

    ui->TableView_FCCB_DCF->setShowGrid(false);

    ui->TableView_FCCB_BAT->setShowGrid(false);

    // 必须要设置此项，否则样式表的hover无法生效
    ui->TableView_DCF->setMouseTracking(true);

    ui->TableView_FCCB_FCU->setMouseTracking(true);

    ui->TableView_FCCB_DCF->setMouseTracking(true);

    ui->TableView_FCCB_BAT->setMouseTracking(true);

    //这种方式添加的控件拖动单元格大小时，拖动结束他才去适应大小
    //根据文档描述这是用于展示静态内容的接口
    //table->setIndexWidget(MODEL_DCF->index(0,0),new QPushButton("btn"));

    //设置代理控件是否一直显示
    //ui->TableView_DCF->openPersistentEditor(MODEL_DCF->index(0,2));
    //ui->TableView_DCF->openPersistentEditor(MODEL_DCF->index(1,2));
    //ui->TableView_DCF->openPersistentEditor(MODEL_DCF->index(2,2));


}

void write_data::initOperate()
{

}






void write_data::on_projectConfig_cbx_currentIndexChanged(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
    //切换项目则设置模块为离线状态
    isOnline = false;
    usetool->setLED(ui->module_led,1,12);

}


void write_data::on_check_module_clicked()
{ //查询模块模块
    if (GlobalData::connect_status) {
        Check_Module cm;

        cm.OEM_SIZE = 24;
        cm.RESERVE1 = 0;
        cm.RESERVE2 = 0;
        cm.RESERVE3 = 0;
        switch (ui->projectConfig_cbx->currentIndex()) {
        case 1: //FCU
        {
            cm.DCF_WRITE = 0;
            cm.FCU_WRITE = 0x21;
            cm.HSCS_WRITE = 0;
            cm.FCCB_WRITE = 0;
            break;
        }
        default:
            break;
        }
        canthread->sendData(0x6A1,0,0,(uint8_t *)(&cm),8);
    } else {
        QMessageBox::warning(this, "警告", "设备未连接！");
    }

}

void write_data::onGetProtocolData(VCI_CAN_OBJ *vci,unsigned int dwRel,unsigned int channel)
{
    for(unsigned int i = 0;i < dwRel;i ++)
    {
        QString str = "";
        if(vci[i].RemoteFlag == 0)//数据帧显示数据
        {
            int j;
            for(j = 0;j < vci[i].DataLen;j ++)
                str += QString("%1").arg(vci[i].Data[j],2,16,QChar('0'));//第一个参数是要填充的数字，第二个参数为最小宽度，第三个参数为进制，第四个参数为当原始数字长度不足最小宽度时用于填充的字符
            //qDebug()<<vci[i].Data[j];
        }

        //qDebug()<<"写入模块获取到的数据ID："<<vci[i].ID;

        switch(vci[i].ID){
        case 0xffff: //判断模块在线
        {
            qDebug()<<"Check_ID:"<<str;
            if (vci[i].Data[1] == 0x31) { //DCF
                ui->HARDWARE->display(usetool->versionList.at( vci[i].Data[6]) );
                ui->SOFTWARE->display(usetool->versionList.at(vci[i].Data[7]));
                usetool->setLED(ui->module_led,2,12);
                isOnline = true;
            } else if (vci[i].Data[0] == 0x21) { //FCU

            } else if (vci[i].Data[2] == 0x41) { //HSCS

            } else {
                QMessageBox::warning(this, "警告", "未收到模块回应，或回应信息不正确！");
            }
            break;
        }
        case 0xff: //判断写入是否成功
        {
            qDebug()<<"Write_ID:"<<str;
            if (vci[i].Data[0] == 0x31 && vci[i].Data[3] == 0x00) { //DCF
                QMessageBox::warning(this, "警告", "DCF数据写入失败！");
            } else if (vci[i].Data[0] == 0x21 && vci[i].Data[3] == 0x00) { //FCU
                QMessageBox::warning(this, "警告", "FCU数据写入失败！");
            } else if (vci[i].Data[0] == 0x41 && vci[i].Data[3] == 0x00) { //HSCS
                QMessageBox::warning(this, "警告", "HSCS数据写入失败！");
            } else if (vci[i].Data[0] == 0x51 && vci[i].Data[3] == 0x00) { //FCCB
                QMessageBox::warning(this, "警告", "FCCB数据写入失败！");
            } else {
                QMessageBox::information(this, "信息", "数据写入成功！");
            }
            break;
        }

        default:
            break;
        }



    }

}


void write_data::on_pushButton_10_clicked()
{
    //保存文件对话框
    QString file_path = QFileDialog::getSaveFileName(this,"保存文件","D:","Json File(*.json)"); //file_path即为文件即将保存的绝对路径。形参中的第二个为对话框标题，第三个为打开后的默认给路径，第四个为文件类型过滤器
    if (!file_path.isEmpty()) {
        //一些处理工作，写数据到文件中
        QFile file(file_path);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            qDebug() << "can't open error!";
            return;
        }

        //创建JSON对象与文档
        QJsonObject dataObj;
        for (int i = 0; i < MODEL_DCF->rowCount(); i++) {
            dataObj.insert(MODEL_DCF->item(i,0)->text(),MODEL_DCF->item(i,2)->text());
        }
        qDebug()<<"json:"<<dataObj;

        //定义根节点 也即是最外层 { }
        QJsonObject OBJ;
        switch (ui->projectConfig_cbx->currentIndex()) {
        case 0:
        {

            OBJ.insert("DCF_OEM",dataObj);
            break;
        }
        default:
            break;
        }
        // 将json对象里的数据转换为字符串
        QJsonDocument doc;
        // 将object设置为本文档的主要对象
        doc.setObject(OBJ);

        //创建文本流
        QTextStream stream(&file);
        stream.setCodec("UTF-8");		// 设置写入编码是UTF8
        // 写入文件
        stream << doc.toJson();
        file.close();
    }
}


void write_data::on_pushButton_9_clicked()
{
    //打开文件对话框
    QString file_name = QFileDialog::getOpenFileName(this,"打开文件","D:","Json File(*.json)"); //形参中的第二个为文件对话框的标题，第三个是打开的默认路径，第四个是文件类型过滤器
    if (!file_name.isEmpty()) {
        QFile file(file_name);
        if (!file.open(QFile::ReadOnly | QFile::Text)) {
            QMessageBox::critical(this, "错误", "文件无法打开，请检查文件权限！");
            //qDebug() << "can't open error!";
            return;
        }

        // 读取文件的全部内容
        QTextStream stream(&file);
        stream.setCodec("UTF-8");		// 设置读取编码是UTF8
        QString str = stream.readAll();

        file.close();

        //将字符串解析成QJsonDocument对象
        QJsonParseError jsonError; //QJsonParseError类用于在JSON解析期间报告错误。
        // 将json解析为UTF-8编码的json文档，并从中创建一个QJsonDocument。
        // 如果解析成功，返回QJsonDocument对象，否则返回null
        QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(), &jsonError);
        // 判断是否解析失败
        if (jsonError.error != QJsonParseError::NoError && !doc.isNull()) {
            QMessageBox::critical(this, "错误", "Json格式错误！"+jsonError.error);
            //qDebug() << "Json格式错误！" << jsonError.error;
            return;
        }

        //获取根 { }
        QJsonObject rootObj = doc.object();

        QJsonValue DCF_Value = rootObj.value("DCF_OEM");
        // 判断是否是object类型
        if (DCF_Value.isObject()) {
            // 转换为QJsonObject类型
            QJsonObject DATA_OBJ = DCF_Value.toObject();

            for (int i = 0; i < LIST_DCF.length(); i++) {
                QString DATA = DATA_OBJ.value(LIST_DCF.at(i)).toString();
                //qDebug() << "DATA = " << DATA;
                MODEL_DCF->setData(MODEL_DCF->index(i, 2), DATA);
            }



        } else {
            QMessageBox::critical(this, "错误", "加载失败，请确认JSON文件是否正确！");
        }

    }
}


void write_data::on_read_module_clicked()
{
    if (isOnline) { //读取数据命令
        Read_Module rm;
        rm.OEM_SIZE = 24;
        rm.RESERVE1 = 0;
        rm.RESERVE2 = 0;
        rm.RESERVE3 = 0;
        switch (ui->projectConfig_cbx->currentIndex()) {
        case 1: //FCU
        {
            rm.DCF_READ = 0;
            rm.FCU_READ = 0x21;
            rm.HSCS_READ = 0;
            rm.FCCB_READ = 0;
            break;
        }
        default:
            break;
        }
        canthread->sendData(0x111,0,0,(uint8_t *)(&rm),8);
    } else {
        QMessageBox::warning(this, "警告", "模块未确认，请点击<模块查询>按钮！");
    }
}

