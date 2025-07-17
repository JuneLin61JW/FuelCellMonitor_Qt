#include "bootloader.h"
#include "ui_bootloader.h"

bootloader::bootloader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bootloader)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_ShowModal,true);

    ui->Erase_Btn->setEnabled(false);
    ui->Download_Btn->setEnabled(false);
    ui->new_baudrate_cbx->setCurrentIndex(3);

}

bootloader::~bootloader()
{
    delete usetool;
    delete ui;
}


int bootloader::CAN_BL_check(UINT DevIndex, UINT CANIndex, UINT NodeAddr)
{
    VCI_ClearBuffer(4, DevIndex, CANIndex);
    unsigned int ret;
    VCI_CAN_OBJ can_send_msg,can_read_msg[1000];
    can_send_msg.DataLen = 8;
    can_send_msg.SendType = 1;
    can_send_msg.RemoteFlag = 0;
    can_send_msg.ExternFlag = 0;
    can_send_msg.ID = NodeAddr;
    can_send_msg.Data[0] = 0x00;
    can_send_msg.Data[1] = 0x00;
    can_send_msg.Data[2] = 0x00;
    can_send_msg.Data[3] = 0x00;
    can_send_msg.Data[4] = 0x00;
    can_send_msg.Data[5] = 0x00;
    can_send_msg.Data[6] = 0x00;
    can_send_msg.Data[7] = 0x00;
    ret = VCI_Transmit(4, DevIndex, CANIndex, &can_send_msg, 1);
    if (ret == -1) {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r获取固件类型命令发送失败！\t" );
        QMessageBox::warning(this, "警告", "数据发送失败！");
        return CAN_ERR_USB_WRITE_FAIL;
    } else {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r开始获取固件类型\t" );
    }

    //-------------延时后读取回复帧------------------------
    usetool->Delay_MSec(1000);
    int read_num = 0;
    QString HardWareVer;
    QString SoftVer;
    int TypeCode = 0;

    read_num = VCI_GetReceiveNum(4, DevIndex, CANIndex);
    if (read_num == 0) {
        return CAN_BL_ERR_TIME_OUT;
    } else if (read_num == -1) {
        return CAN_ERR_USB_READ_FAIL;
    } else {
        ret = VCI_Receive(4, DevIndex, CANIndex, &can_read_msg[0], 1000, 0);
        //qDebug()<<"checkret:"<<ret;
        if (ret == -1) {
            VCI_ClearBuffer(4, DevIndex, CANIndex);
            QMessageBox::warning(this, "警告", "读数据错误");
            return CAN_ERR_USB_READ_FAIL; //USB读数据失败
        } else {
            for (uint i = 0; i < ret; i++) {
                //qDebug()<<"checkID:"<<can_read_msg[i].ID;
                if (can_read_msg[i].ID == 0x7FA) {
                    HardWareVer = usetool->versionList.at(can_read_msg[i].Data[0]);
                    SoftVer = usetool->versionList.at(can_read_msg[i].Data[1]);
                    FLASH_SIZE = can_read_msg[i].Data[3];
                    TypeCode = can_read_msg[i].Data[4] << 0x18 | can_read_msg[i].Data[5] << 0x10 | can_read_msg[i].Data[6] << 0x08 | can_read_msg[i].Data[7] << 0x00;
                    switch (TypeCode) {
                    case 0x55555555: {
                        TypeStr = "BOOTLOADER";
                        ui->Type->setStyleSheet("color:green;border:1px solid #242424;");
                        ui->Erase_Btn->setEnabled(true);
                        ui->Download_Btn->setEnabled(true);
                    }
                        break;
                    case 0xAAAAAAAA: {
                        TypeStr = "APPLICATION";
                        ui->Type->setStyleSheet("color:blue;border:1px solid #242424;");
                        ui->Erase_Btn->setEnabled(false);
                        ui->Download_Btn->setEnabled(false);
                    }
                        break;
                    default: {
                        TypeStr = "获取错误";
                        ui->Type->setStyleSheet("color:black;border:1px solid #242424;");
                        ui->Erase_Btn->setEnabled(false);
                        ui->Download_Btn->setEnabled(false);
                    }
                        break;
                    }
                    QString FLASH_STR;
                    switch (FLASH_SIZE) {
                    case FLASH_64K:
                    {
                        FLASH_STR = "FLASH容量:64K";
                    }
                        break;
                    case FLASH_128K:
                    {
                        FLASH_STR = "FLASH容量:128K";
                    }
                        break;
                    case FLASH_256K:
                    {
                        FLASH_STR = "FLASH容量:256K";
                    }
                        break;
                    case FLASH_512K:
                    {
                        FLASH_STR = "FLASH容量:512K";
                    }
                        break;
                    case FLASH_1000K:
                    {
                        FLASH_STR = "FLASH容量:1000K";
                    }
                        break;
                    default:
                    {
                        FLASH_STR = "";
                    }
                        break;
                    }
                    QString str = QString("硬件版本号:%1,软件版本号:%2,固件类型:%3,%4").arg(HardWareVer).arg(SoftVer).arg(TypeStr).arg(FLASH_STR);
                    //qDebug()<<"str="<<str;
                    ui->Version->display(HardWareVer);
                    ui->Version_2->display(SoftVer);
                    ui->Type->setText(TypeStr);
                    ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r接收成功\t" + str);
                    VCI_ClearBuffer(4, DevIndex, CANIndex);
                    return CAN_SUCCESS;
                }
            }
        }
    }

    VCI_ClearBuffer(4,DevIndex,CANIndex);
    return  CAN_BL_ERR_TIME_OUT;//超时错误
}

int bootloader::CAN_BL_erase(UINT DevIndex, UINT CANIndex, UINT NodeAddr, unsigned int FlashSize, unsigned int TimeOut)
{
    ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r擦除开始\t" );
    int ret = 0;
    int read_num = 0;
    VCI_ClearBuffer(4, DevIndex, CANIndex);
    VCI_CAN_OBJ can_send_msg, can_read_msg[1000];
    can_send_msg.DataLen = 4;
    can_send_msg.SendType = 1;
    can_send_msg.RemoteFlag = 0;
    can_send_msg.ExternFlag = 0;
    can_send_msg.ID = NodeAddr;
    can_send_msg.Data[0] = (FlashSize & 0xFF000000) >> 0x18;
    can_send_msg.Data[1] = (FlashSize & 0x00FF0000) >> 0x10;
    can_send_msg.Data[2] = (FlashSize & 0x0000FF00) >> 0x08;
    can_send_msg.Data[3] = (FlashSize & 0x000000FF) >> 0x00;

    ret = VCI_Transmit(4, DevIndex, CANIndex, &can_send_msg, 1);
    if (ret == -1) {
        return CAN_ERR_USB_WRITE_FAIL;
    }

    //-----------新增修改----------
    /*QMessageBox* eraseBox = new QMessageBox(this);
    eraseBox->setStandardButtons(0);
    eraseBox->setWindowTitle("擦除");
    eraseBox->setText("擦除进行中");
    eraseBox->setModal(false);
    eraseBox->setAttribute(Qt::WA_DeleteOnClose);
    eraseBox->setModal(true);
    eraseBox->show();*/

    //----------------------------
    usetool->Delay_MSec(TimeOut);
    //eraseBox->close();
    //delete eraseBox;
    read_num = VCI_GetReceiveNum(4, DevIndex, CANIndex);

    if (read_num == 0) {
        return CAN_BL_ERR_TIME_OUT;
    } else if (read_num == -1) {
        return CAN_ERR_USB_READ_FAIL;
    } else {
        ret = VCI_Receive(4, DevIndex, CANIndex, &can_read_msg[0], 1000, 0);
        if (ret == -1) {
            return 1; //错误代码1，读取缓存帧失败
            VCI_ClearBuffer(4, DevIndex, CANIndex);
        } else {
            switch (FLASH_SIZE) {
            case FLASH_64K:
            {
                for (int i = 0; i < ret; i++) {
                    if (can_read_msg[i].ID == 0x7F0) {
                        if (can_read_msg[i].Data[1] == 0x03)
                            return CAN_BL_ERR_CMD;
                    } else if (can_read_msg[i].ID == 0x7FA) {
                        if (can_read_msg[i].Data[1] == 0x04) {
                            return CAN_SUCCESS;
                        }
                    }
                }
            }
            break;
            case FLASH_1000K:
            {
                for (int i = 0; i < ret; i++) {
                    if (can_read_msg[i].ID == 0x7F0) {
                        if (can_read_msg[i].Data[1] == 0x03)
                            return CAN_BL_ERR_CMD;
                    } else if (can_read_msg[i].ID == 0x7FA) {
                        if (can_read_msg[i].Data[1] == 0x09) {
                            return CAN_SUCCESS;
                        }
                    }
                }
            }
            break;
            default:
            {
                return CAN_ERR_USB_READ_FAIL; //无法正确解析对应的数据
            }
            break;
            }

        }
    }

    VCI_ClearBuffer(4, DevIndex, CANIndex);
    return CAN_BL_ERR_TIME_OUT;
}

int bootloader::CAN_BL_excute(UINT DevIndex, UINT CANIndex, UINT NodeAddr, unsigned int Type)
{
    int ret = 0;
    VCI_ClearBuffer(4, DevIndex, CANIndex);
    VCI_CAN_OBJ can_send_msg;
    can_send_msg.DataLen = 4;
    can_send_msg.SendType = 1;
    can_send_msg.RemoteFlag = 0;
    can_send_msg.ExternFlag = 0;
    can_send_msg.ID = NodeAddr;
    can_send_msg.Data[0] = (Type & 0xFF000000) >> 0x18;
    can_send_msg.Data[1] = (Type & 0x00FF0000) >> 0x10;
    can_send_msg.Data[2] = (Type & 0x0000FF00) >> 0x08;
    can_send_msg.Data[3] = (Type & 0x000000FF) >> 0x00;

    ret = VCI_Transmit(4, DevIndex, CANIndex, &can_send_msg, 5);
    if (ret == -1) {
        return CAN_BL_ERR_SEND;
    } else {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r已下发“切换固件类型”命令，请再次获取固件状态\t" );
    }

    return CAN_SUCCESS;
}

int bootloader::CAN_BL_write(UINT DevIndex, UINT CANIndex, SEND_INFO *send_data)
{
    unsigned short int i;
    unsigned short int cnt = 0;
    int read_num = 0;
    int ret = 0;
    UINT crc_temp = 0x0000;

    /*if(ui->sendIDEdit->text().toInt(Q_NULLPTR,16) > 0x1FFFFFFF)
        {
            QMessageBox::warning(this,"警告","发送失败，扩展帧ID范围为0~0x1FFFFFFF！");
            return CAN_BL_ERR_CMD;
        }*/

    VCI_CAN_OBJ can_send_msg, can_read_msg[1000];

    can_send_msg.RemoteFlag = 0;
    can_send_msg.SendType = 1;
    if (send_data->data_len % 2 != 0) {
        send_data->data[send_data->data_len] = 0xFF;
        send_data->data_len += 1;
    }
    //进行crc计算,并且进行赋值
    crc_temp = CRCcalc16((unsigned char*)send_data->data, send_data->data_len);
    qDebug() << "crc:" << crc_temp;
    //对crc计算结果进行赋值;
    send_data->data[send_data->data_len] = crc_temp & 0xFF;
    send_data->data[send_data->data_len + 1] = (crc_temp >> 8) & 0xFF;

    can_send_msg.DataLen = 8;
    can_send_msg.ExternFlag = 0;
    can_send_msg.ID = 0x7F5;
    can_send_msg.Data[0] = (send_data->data_addr & 0xFF000000) >> 0x18;
    can_send_msg.Data[1] = (send_data->data_addr & 0x00FF0000) >> 0x10;
    can_send_msg.Data[2] = (send_data->data_addr & 0x0000FF00) >> 0x08;
    can_send_msg.Data[3] = (send_data->data_addr & 0x000000FF) >> 0x00;
    //----------------------------------------------------------------------
    can_send_msg.Data[4] = ((send_data->data_len + 2) & 0xFF000000) >> 0x18;
    can_send_msg.Data[5] = ((send_data->data_len + 2) & 0x00FF0000) >> 0x10;
    can_send_msg.Data[6] = ((send_data->data_len + 2) & 0x0000FF00) >> 0x08;
    can_send_msg.Data[7] = ((send_data->data_len + 2) & 0x000000FF) >> 0x00;
    ret = VCI_Transmit(4, DevIndex, CANIndex, &can_send_msg, 1);
    if (ret == -1) {
        return CAN_ERR_USB_WRITE_FAIL;
    }
    usetool->Delay_MSec(200); //延时函数
    read_num = VCI_GetReceiveNum(4, DevIndex, CANIndex);
    switch (read_num) {
    case 0:
        return CAN_BL_ERR_TIME_OUT;
        break;
    case -1:
        return CAN_ERR_USB_READ_FAIL;
        break;
    default:
    {
        ret = VCI_Receive(4, DevIndex, CANIndex, &can_read_msg[0], 1000, 0);
        if (ret == -1) {
            return CAN_ERR_USB_READ_FAIL;
            VCI_ClearBuffer(4, DevIndex, CANIndex);
        }
        if (ret == 1) {
            if (can_read_msg[0].ID != 0x7FA) {
                qDebug()<<"下载回复情况ID("<<__LINE__<<"):"<<can_read_msg[0].ID;
                    return CAN_BL_ERR_CMD;
            }
        }
    }
    break;
    }
    while (cnt < send_data->data_len + 2) {
        int temp;
        temp = send_data->data_len + 2 - cnt;
        if (temp >= 8) {
            can_send_msg.DataLen = 8;
            can_send_msg.ExternFlag = 0;
            can_send_msg.ID = 0x7F6;
            for (i = 0; i < 8; i++) {
                can_send_msg.Data[i] = send_data->data[cnt];
                cnt++;
                //qDebug()<<"can_send_msg.Data"<<i<<":"<<can_send_msg.Data[i];
            }
        } else {
            can_send_msg.DataLen = temp;
            can_send_msg.ExternFlag = 0;
            can_send_msg.ID = 0x7F6;
            for (i = 0; i < temp; i++) {
                can_send_msg.Data[i] = send_data->data[cnt];
                cnt++;
            }
        }
        ret = VCI_Transmit(4, DevIndex, CANIndex, &can_send_msg, 1);
        if (ret == -1) {
            return CAN_BL_ERR_SEND;
        }
    }
    for (i = 0; i < send_data->data_len + 2; i++) {
        send_data->data[cnt] = 0x00;
    }
    //发送数据完成，等待响应
    //-------------------------------------
    usetool->Delay_MSec(500);
    read_num = VCI_GetReceiveNum(4, DevIndex, CANIndex);
    qDebug() << "read_num:" << read_num;
    switch (read_num) {
    case 0:
        return CAN_BL_ERR_TIME_OUT;
        break;
    case -1:
        return CAN_ERR_USB_READ_FAIL;
        break;
    default:
    {
        ret = VCI_Receive(4, DevIndex, CANIndex, &can_read_msg[0], 1000, 0);
        if (ret == -1) {
            VCI_ClearBuffer(4, DevIndex, CANIndex);
            return CAN_ERR_USB_READ_FAIL;
        }
        if (ret == 1) {
            if (can_read_msg[0].ID != 0x7FA) {
                qDebug()<<"下载回复情况ID(958):"<<can_read_msg[0].ID;
                    return CAN_BL_ERR_CMD;
            }
        }
    }
    break;
    }
    //将数据清零准备下一次数据发送工作
    cnt = 0;
    return CAN_SUCCESS;
}

unsigned short int bootloader::CRCcalc16(unsigned char *data, unsigned short len)
{
    unsigned short int crc_res = 0xFFFF;
    while (len--) {
        crc_res ^= *data++;
        for (int i = 0; i < 8; i++) {
            if (crc_res & 0x01) {
                crc_res = (crc_res >> 1) ^ 0x1021;
            } else {
                crc_res = (crc_res >> 1);
            }
        }
    }
    return crc_res;
}

void bootloader::MSG_CMD(int status, int type)
{
    switch (status) {
    case CAN_SUCCESS: {
        warning_str = "执行成功";
        break;
    }
    case CAN_ERR_NOT_SUPPORT: {
        warning_str = "适配器不支持该函数!";
        break;
    }
    case CAN_ERR_USB_WRITE_FAIL: {
        warning_str = "USB写数据失败!";
        break;
    }
    case CAN_ERR_USB_READ_FAIL: {
        warning_str = "USB读数据失败!";
        break;
    }
    case CAN_BL_ERR_CONFIG: {
        warning_str = "配置设备错误!";
        break;
    }
    case CAN_BL_ERR_SEND: {
        warning_str = "发送数据出错!";
        break;
    }
    case CAN_BL_ERR_TIME_OUT: {
        warning_str = "超时错误!";
        break;
    }
    case CAN_BL_ERR_CMD: {
        warning_str = "执行命令失败!";
        break;
    }
    default: {
        warning_str = "";
        break;
    }
    }

    switch (type) {
    case 0: { //check，获取固件类型
        cmd_type = "获取固件类型命令：";
        break;
    }
    case 1: { //erase，擦除
        cmd_type = "擦除命令：";
        break;
    }
    case 2: { //设置波特率
        cmd_type = "设置波特率命令：";
        break;
    }
    case 3: { //Write，写入flash
        cmd_type = "分包写入命令：";
        break;
    }
    case 4: { //excute，切换固件
        cmd_type = "切换固件类型命令：";
        break;
    }
    default: {
        cmd_type = "";
        break;
    }
    }

    ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r"+cmd_type+warning_str +"\t");
    QMessageBox::warning(this, "警告", cmd_type+warning_str);
}

void bootloader::MSG_PRO(QString msg, bool isAlert)
{
    ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r"+msg +"\t");
    if (isAlert) {
        QMessageBox::warning(this, "警告", msg);
    } else {
        QMessageBox::information(this, "信息", msg);
    }
}

void bootloader::on_openDocument_clicked()
{
    QString fileName;
    QString file_path = ui->firmwareLineEdit->text();
    QString history_ini_path = QCoreApplication::applicationDirPath() + "/config.ini";
    QSettings* read_history_ini = new QSettings(history_ini_path, QSettings::IniFormat);
    file_path = read_history_ini->value("/history/path").toString();
    if (file_path.endsWith("bin") == true) {
        fileName = QFileDialog::getOpenFileName(this,
                                                tr("Open files"),
                                                file_path,
                                                "Binary Files (*.bin);;Hex Files (*.hex);;All Files (*.*)");
    } else if (file_path.endsWith("hex") == true) {
        fileName = QFileDialog::getOpenFileName(this,
                                                tr("Open files"),
                                                file_path,
                                                "Hex Files (*.hex);;Binary Files (*.bin);;All Files (*.*)");
    } else {
        fileName = QFileDialog::getOpenFileName(this,
                                                tr("Open files"),
                                                file_path,
                                                "All Files (*.*);;Hex Files (*.hex);;Binary Files (*.bin)");
    }
    if (fileName.isNull()) {
        return;
    }
    ui->firmwareLineEdit->setText(fileName);

    //保存打开文件的历史记录
    //Qt中使用QSettings类读写ini文件
    //QSettings构造函数的第一个参数是ini文件的路径,第二个参数表示针对ini文件,第三个参数可以缺省
    QSettings* write_history_ini = new QSettings(history_ini_path, QSettings::IniFormat);
    write_history_ini->setValue("history/path", fileName);
    //写入完成后删除指针
    delete write_history_ini;
    delete read_history_ini;

    QFile readfile(ui->firmwareLineEdit->text());
    QFileInfo read_file_info(readfile);
    readfileSize = read_file_info.size() /1024.0 ;
    QString binSize = QString::number(readfileSize,'f',2);
    ui->fileSize->setText(binSize);
}

void bootloader::on_Download_Btn_clicked()
{
    ui->Download_Btn->setEnabled(false);

    if (TypeStr != "BOOTLOADER") {
        QMessageBox::warning(this, "警告", "当前固件不为BootLoader");
        return;
    }

    unsigned char file_type = File_None;
    //此处是准备发送数据给下位机
    QFile firmwareFile(ui->firmwareLineEdit->text());
    if (firmwareFile.open(QFile::ReadOnly)) {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r" + "开始更新固件...\t");
        QProgressDialog writeDataProcess("正在更新固件...", "取消", 0, firmwareFile.size(), this);
        writeDataProcess.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
        writeDataProcess.setWindowTitle("更新固件");

        qint64 size_temp = 0;
        int file_size = 0;
        int status = CAN_SUCCESS;

        if (file_type = File_bin) {
            int packSize = 0;
            switch (FLASH_SIZE) {
            case FLASH_64K:
            {
                packSize = 1024;

            }
                break;
            case FLASH_1000K:
            {
                packSize = 16384;

            }
                break;
            default:
            {
                //packSize = 1024;
                //break;
                //ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r" + "警告：未正确获取FLASH容量...\t");
                //QMessageBox::warning(this, "警告", "未正确获取FLASH容量");
                MSG_PRO("未正确获取FLASH容量",true);
                return;
            }
            }
            SEND_INFO *send_data = (SEND_INFO*)malloc(sizeof(SEND_INFO) + sizeof(char)*(packSize + 4));
            memset(send_data->data,0,sizeof(char)*(packSize + 4));
            send_data->pack_size = packSize;
            send_data->pack_cnt = 0;
            qDebug()<<"send_data_size:"<<sizeof(send_data);

            size_temp = firmwareFile.size();

            writeDataProcess.setModal(true);
            writeDataProcess.show();
            QCoreApplication::processEvents(QEventLoop::AllEvents);
            while (file_size < firmwareFile.size()) {
                send_data->data_len = firmwareFile.read((char*)send_data->data, send_data->pack_size);
                qDebug() << "send_data->data_len =" << send_data->data_len;
                send_data->data_addr = file_size;
                status = CAN_BL_write(canthread->m_debicIndex, canthread->m_channel, send_data);
                if (status != CAN_SUCCESS) {
                    /*warning_str.sprintf("故障代码是%d,", status);
                    switch (status) {
                    case CAN_ERR_USB_WRITE_FAIL:
                        warning_str = warning_str + "USB写数据失败";
                        break;
                    case CAN_ERR_USB_READ_FAIL:
                        warning_str = warning_str + "USB读数据失败";
                        break;
                    case CAN_BL_ERR_SEND:
                        warning_str = warning_str + "发送数据出错";
                        break;
                    case CAN_BL_ERR_TIME_OUT:
                        warning_str = warning_str + "超时错误";
                        break;
                    case CAN_BL_ERR_CMD:
                        warning_str = warning_str + "写入执行命令失败";
                        break;
                    default:
                        warning_str = "";
                        break;
                    }
                    ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r"+"错误："+warning_str +"\t");
                    QMessageBox::warning(this, "警告", warning_str);*/
                    MSG_CMD(status,3);
                    return;
                }
                file_size = file_size + send_data->data_len;
                qDebug() << "file_size=" << file_size;

                ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r" + "分包烧写成功，已烧写包大小：" + QString::number(file_size) + " 字节\t");
                writeDataProcess.setValue(file_size);
                QCoreApplication::processEvents(QEventLoop::AllEvents);
                if (writeDataProcess.wasCanceled()) {
                    return;
                }
            }
            writeDataProcess.setValue(firmwareFile.size());
            QCoreApplication::processEvents(QEventLoop::AllEvents);
            if (writeDataProcess.wasCanceled()) {
                return;
            }
            /*ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r" + "整包烧写成功\t");
            QMessageBox::information(this, "进度", "整包烧写成功");*/
            MSG_PRO("整包烧写成功",false);

            //释放内存
            free(send_data);
            send_data = NULL;

        } else {
            QMessageBox::warning(this, "警告", "文件类型错误");
        }

    } else {
        QMessageBox::warning(this, "警告", "打开固件文件失败");
    }
    firmwareFile.close();
    ui->Download_Btn->setEnabled(true);
}


void bootloader::on_Erase_Btn_clicked()
{
    ui->Erase_Btn->setEnabled(false);

    if (TypeStr != "BOOTLOADER") {
        MSG_PRO("请先获取固件类型为BOOTLOADER!",true);
        ui->Erase_Btn->setEnabled(true);
        return;
    }
    //--------------节点地址与命令合并成ID并发送参数数据----------------
    int status = CAN_SUCCESS;
    UINT ID = 0xfff;

    QFile firmwareFile(ui->firmwareLineEdit->text());
    if (firmwareFile.open(QFile::ReadOnly)) {



        qint64 size_temp = 0;
        size_temp = firmwareFile.size();
        qDebug() << "size_temp:" << size_temp;


        //计算擦除超时时间
        unsigned int erase_timeout_temp = 0;
        if(size_temp <= 64*1024)
        {
            if(size_temp%0xFFFF == 0)
            {
                erase_timeout_temp = size_temp/0xFFFF;
            }
            else
            {
                erase_timeout_temp = (size_temp/0xFFFF)+1;
            }
            erase_timeout_temp    = 550*erase_timeout_temp;
        }
        else if((size_temp>64*1024)&&(size_temp<=128*1024))
        {
            erase_timeout_temp =4*550+1000;//都表示超时时间为毫秒
        }
        else if((size_temp>128*1024)&&(size_temp<=850*1024))
        {
            if((size_temp-128*1024)%0x20000 == 0)
            {
                erase_timeout_temp = size_temp/0x20000;
            }
            else
            {
                erase_timeout_temp = (size_temp/0x20000)+1;
            }
            erase_timeout_temp = 2000*erase_timeout_temp+4*550+1000;
        }
        else if(size_temp>850*1024)
        {
            /*ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r文件过大,超过1M!\t" );
            QMessageBox::warning(this,"警告","文件过大,超过1M!");*/
            MSG_PRO("文件过大,超过1M!",true);
            firmwareFile.close();
            ui->Erase_Btn->setEnabled(true);
            return;
        }
        else
        {
            /*ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r文件大小未知!\t" );
            QMessageBox::warning(this,"警告","文件大小未知!");*/
            MSG_PRO("文件大小未知!",true);
            firmwareFile.close();
            ui->Erase_Btn->setEnabled(true);
            return;
        }

        //开始擦除函数
        status = CAN_BL_erase(canthread->m_debicIndex, canthread->m_channel, ID,size_temp, erase_timeout_temp+1000);
        //qDebug()<<"status="<<status;
        if (status != CAN_SUCCESS) {
            /*warning_str.sprintf("故障代码是%d,擦除Flash失败！", status);
            ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r擦除Flash失败\t" );
            QMessageBox::warning(this, "警告", warning_str);*/
            MSG_CMD(status,1);
        } else {
            /*ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r擦除完成\t" );
            QMessageBox::information(this, "信息", "擦除完成");*/
            MSG_PRO("擦除完成",false);
        }


    } else {
        //ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r打开固件文件失败\t" );
        QMessageBox::warning(this, "警告", "打开固件文件失败");
    }
    firmwareFile.close();
    ui->Erase_Btn->setEnabled(true);
}


void bootloader::on_Check_Btn_clicked()
{
    int status = CAN_SUCCESS;
    UINT ID = 0xfff;

    status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,ID);
    if (status != CAN_SUCCESS) {
        status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,0x222);
        if (status != CAN_SUCCESS) {
            MSG_CMD(status,0);
        }
    }
}


void bootloader::on_ExcuteType_Btn_clicked()
{

    int status = CAN_SUCCESS;
    UINT ID = 0xfff;

    if (TypeStr == "BOOTLOADER") {
        status = CAN_BL_excute(canthread->m_debicIndex, canthread->m_channel, ID, CAN_BL_APP);
    } else if (TypeStr == "APPLICATION") {
        status = CAN_BL_excute(canthread->m_debicIndex, canthread->m_channel, ID, CAN_BL_BOOT);
    } else {
        //QMessageBox::warning(this, "警告", "请先获取正确的固件类型信息!");
        MSG_PRO("请先获取正确的固件类型信息!",true);
        return;
    }

    if (status != CAN_SUCCESS) {
        MSG_CMD(status,4);
    }
}


void bootloader::on_SetBaudrate_Btn_clicked()
{

    UINT baudRate = 0;
    //---------波特率处理-------------
    if(ui->new_baudrate_cbx->currentText().indexOf("Kbps") != -1)
        baudRate = ui->new_baudrate_cbx->currentText().remove("Kbps").toUInt()*1000;
    else
        baudRate = ui->new_baudrate_cbx->currentText().remove("Mbps").toFloat()*1000000;
    qDebug()<<"baudrate="<<baudRate;
    int ret=0;
    int read_num=0;

    VCI_ClearBuffer(4,DeviceIndex,Channel);//清除缓存
    VCI_CAN_OBJ can_send_msg,can_read_msg[1000];

    ui->Check_Btn->setEnabled(false);

    //--------------节点地址与命令合并成ID并发送参数数据----------------
    can_send_msg.DataLen = 8;
    can_send_msg.ID = 0x111;
    can_send_msg.SendType = 1;
    can_send_msg.RemoteFlag = 0;
    can_send_msg.ExternFlag = 0;
    can_send_msg.Data[0] = ( baudRate  & 0xFF000000 )>> 0x18;
    can_send_msg.Data[1] = ( baudRate  & 0x00FF0000 )>> 0x10;
    can_send_msg.Data[2] = ( baudRate  & 0x0000FF00 )>> 0x08;
    can_send_msg.Data[3] = ( baudRate  & 0x000000FF )>> 0x00;
    can_send_msg.Data[4] = 0x00;
    can_send_msg.Data[5] = 0x00;
    can_send_msg.Data[6] = 0x00;
    can_send_msg.Data[7] = 0x00;
    /*qDebug()<<"sdata[0]="<<can_send_msg.Data[0];
    qDebug()<<"sdata[1]="<<can_send_msg.Data[1];
    qDebug()<<"sdata[2]="<<can_send_msg.Data[2];
    qDebug()<<"sdata[3]="<<can_send_msg.Data[3];
    qDebug()<<"sdata[4]="<<can_send_msg.Data[4];
    qDebug()<<"sdata[5]="<<can_send_msg.Data[5];
    qDebug()<<"sdata[6]="<<can_send_msg.Data[6];
    qDebug()<<"sdata[7]="<<can_send_msg.Data[7];*/
    ret=VCI_Transmit(4,canthread->m_debicIndex, canthread->m_channel,&can_send_msg,1);
    if(ret==-1)
    {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r警告：下发“设置新波特率”命令失败！\t" );
        QMessageBox::warning(this,"警告","写入数据失败");
    } else {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========" + "\r已下发设置新波特率命令，请尽快重新配置CAN设备新波特率并打开，否则会提示接受命令超时！\t" );
    }
    usetool->Delay_MSec(5000);

    //-------------延时后读取回复帧------------------------
    read_num=VCI_GetReceiveNum(4,DeviceIndex,Channel);
    if(read_num==0)
    {
        QMessageBox::warning(this,"警告","接收命令超时");
    }
    else if(read_num==-1)
    {
        QMessageBox::warning(this,"警告","读数据错误");
    }
    else
    {
        ret=VCI_Receive(4,canthread->m_debicIndex, canthread->m_channel,&can_read_msg[0],1000,0);
        if(ret==-1)
        {
            QMessageBox::warning(this,"警告","读数据错误");
            VCI_ClearBuffer(4,canthread->m_debicIndex, canthread->m_channel);
        }
        else
        {
            for(int i = 0;i<ret;i++)
            {
                if(can_read_msg[i].ID == 0x111 )
                {
                    if(can_read_msg[i].Data[7]==0x01)
                        ui->textBrowser->append("设置波特率成功");
                    else if(can_read_msg[i].Data[7]==0x00)
                        ui->textBrowser->append("设置波特率失败");
                    VCI_ClearBuffer(4,canthread->m_debicIndex, canthread->m_channel);
                }
            }
        }
    };

    ui->Check_Btn->setEnabled(true);
}


void bootloader::on_textBrowser_textChanged()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
}


void bootloader::on_UpdateFirmware_Btn_clicked()
{

    int status = CAN_SUCCESS;
    //1.先判断文件是否打开,开始进度窗口
    unsigned char file_type = File_None;

    QFile firmwareFile(ui->firmwareLineEdit->text());
    if (firmwareFile.open(QFile::ReadOnly)) {
        ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r" + "开始更新固件...\t");

        int maxValue = ceil( firmwareFile.size()/0.94 );
        //qDebug()<<"maxValue:"<<maxValue;
        int checkValue = ceil(maxValue*0.01);
        //qDebug()<<"checkValue:"<<checkValue;
        int checkAgainValue = ceil( maxValue*0.03);
        //qDebug()<<"checkAgainValue:"<<checkAgainValue;
        int eraseValue = ceil( maxValue*0.05);
        //qDebug()<<"eraseValue:"<<eraseValue;

        QProgressDialog writeDataProcess("正在更新固件...", "取消", 0, maxValue, this);
        writeDataProcess.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
        writeDataProcess.setWindowTitle("更新固件");

        writeDataProcess.setModal(true);
        writeDataProcess.show();
        QCoreApplication::processEvents(QEventLoop::AllEvents);

        //2.获取固件类型
        status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,0x222);
        qDebug()<<"获取类型状态："<<status;
        if (status != CAN_SUCCESS) {
            status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,0x222);
            if (status != CAN_SUCCESS) {
                MSG_CMD(status,0);
                return;
            }
        }
        writeDataProcess.setValue(checkValue);
        //3.判断固件类型，若是APP则切换固件并再次获取固件类型，若是BOOTLOADER则开始下载流程
        if (TypeStr != "BOOTLOADER") {
            //切换固件
            status = CAN_BL_excute(canthread->m_debicIndex, canthread->m_channel, 0x333, CAN_BL_BOOT);
            if (status != CAN_SUCCESS) {
                MSG_CMD(status,4);
                return;
            }
            //4.延迟5s后再次获取固件类型
            usetool->Delay_MSec(5000);
            //5.再次获取固件类型
            status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,0x222);
            if (status != CAN_SUCCESS) {
                status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,0x222);
                if (status != CAN_SUCCESS) {
                    MSG_CMD(status,0);
                    return;
                } else if (TypeStr != "BOOTLOADER") {
                    MSG_PRO("进入BOOT模式失败！",true);
                    return;
                }
            }
        }
        writeDataProcess.setValue(checkAgainValue);
        //=============================================

        //6.计算擦除超时时间
        qint64 size_temp = 0;
        size_temp = firmwareFile.size();
        unsigned int erase_timeout_temp = 0;
        if(size_temp <= 64*1024)
        {
            if(size_temp%0xFFFF == 0)
            {
                erase_timeout_temp = size_temp/0xFFFF;
            }
            else
            {
                erase_timeout_temp = (size_temp/0xFFFF)+1;
            }
            erase_timeout_temp    = 550*erase_timeout_temp;
        }
        else if((size_temp>64*1024)&&(size_temp<=128*1024))
        {
            erase_timeout_temp =4*550+1000;//都表示超时时间为毫秒
        }
        else if((size_temp>128*1024)&&(size_temp<=850*1024))
        {
            if((size_temp-128*1024)%0x20000 == 0)
            {
                erase_timeout_temp = size_temp/0x20000;
            }
            else
            {
                erase_timeout_temp = (size_temp/0x20000)+1;
            }
            erase_timeout_temp = 2000*erase_timeout_temp+4*550+1000;
        }
        else if(size_temp>850*1024)
        {
            MSG_PRO("文件过大,超过1M!",true);
            firmwareFile.close();
            return;
        }
        else
        {
            MSG_PRO("文件大小未知!",true);
            firmwareFile.close();
            return;
        }

        //7.开始擦除
        status = CAN_BL_erase(canthread->m_debicIndex, canthread->m_channel, 0x7F3,size_temp, erase_timeout_temp+1000);
        if (status != CAN_SUCCESS) {
            MSG_CMD(status,1);
            return;
        }
        writeDataProcess.setValue(eraseValue);

        //8.此处准备烧写

        int file_size = 0;

        if (file_type = File_bin) {
            int packSize = 0;
            switch (FLASH_SIZE) {
            case FLASH_64K:
            {
                packSize = 1024;

            }
                break;
            case FLASH_1000K:
            {
                packSize = 16384;

            }
                break;
            default:
            {
                MSG_PRO("未正确获取FLASH容量",true);
                firmwareFile.close();
                return;
            }
            }
            SEND_INFO *send_data = (SEND_INFO*)malloc(sizeof(SEND_INFO) + sizeof(char)*(packSize + 4));
            memset(send_data->data,0,sizeof(char)*(packSize + 4));
            send_data->pack_size = packSize;
            send_data->pack_cnt = 0;
            qDebug()<<"send_data_size:"<<sizeof(send_data);

            while (file_size < firmwareFile.size()) {
                send_data->data_len = firmwareFile.read((char*)send_data->data, send_data->pack_size);
                qDebug() << "send_data->data_len =" << send_data->data_len;
                send_data->data_addr = file_size;
                status = CAN_BL_write(canthread->m_debicIndex, canthread->m_channel, send_data);
                if (status != CAN_SUCCESS) {
                    MSG_CMD(status,3);
                    //释放内存
                    free(send_data);
                    send_data = NULL;
                    firmwareFile.close();
                    return;
                }
                file_size = file_size + send_data->data_len;
                qDebug() << "file_size=" << file_size;

                ui->textBrowser->append(QTime::currentTime().toString("hh:mm:ss:zzz") + "==========\r" + "分包烧写成功，已烧写包大小：" + QString::number(file_size) + " 字节\t");
                writeDataProcess.setValue(eraseValue+file_size);
                QCoreApplication::processEvents(QEventLoop::AllEvents);
                if (writeDataProcess.wasCanceled()) {
                    firmwareFile.close();
                    //释放内存
                    free(send_data);
                    send_data = NULL;
                    return;
                }
            }
            if (writeDataProcess.wasCanceled()) {
                firmwareFile.close();
                //释放内存
                free(send_data);
                send_data = NULL;
                return;
            }

            //释放内存
            free(send_data);
            send_data = NULL;

            //9.切换回APP固件，并延迟等待再次获取固件类型
            status = CAN_BL_excute(canthread->m_debicIndex, canthread->m_channel, 0x333, CAN_BL_APP);
            if (status != CAN_SUCCESS) {
                MSG_CMD(status,4);
                return;
            }
            usetool->Delay_MSec(2000);
            status = CAN_BL_check(canthread->m_debicIndex, canthread->m_channel,0x222);
            if (status != CAN_SUCCESS) {
                MSG_CMD(status,0);
                return;
            }

            writeDataProcess.setValue(maxValue);
            QCoreApplication::processEvents(QEventLoop::AllEvents);

            MSG_PRO("更新成功",false);


        } else {
            QMessageBox::warning(this, "警告", "文件类型错误");

        }

    } else {
        QMessageBox::warning(this, "警告", "打开固件文件失败");
    }
    firmwareFile.close();
}

