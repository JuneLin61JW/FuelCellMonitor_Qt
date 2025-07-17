#ifndef BOOTLOADER_H
#define BOOTLOADER_H

#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <QSettings>
#include <QDir>
#include <qmessagebox.h>
#include <QDebug>
#include <QTimer>
#include <QProgressDialog>
#include <QTime>
#include <qelapsedtimer.h>
#include "canthread.h"
#include "usetool.h"

#define CAN_SUCCESS                     (0)   //函数执行成功
#define CAN_ERR_NOT_SUPPORT             (-1)  //适配器不支持该函数
#define CAN_ERR_USB_WRITE_FAIL          (-2)  //USB写数据失败
#define CAN_ERR_USB_READ_FAIL           (-3)  //USB读数据失败
#define	CAN_BL_ERR_CONFIG		        (-20) //配置设备错误
#define	CAN_BL_ERR_SEND			        (-21) //发送数据出错
#define	CAN_BL_ERR_TIME_OUT		        (-22) //超时错误
#define	CAN_BL_ERR_CMD			        (-23) //执行命令失败
//---------------------------------------
#define File_None   0xF0 //无
#define File_bin    0xF1 //bin文件
#define File_hex    0xF2 //hex文件

//以下宏定义表示当前设备运行的固件属性
#define CAN_BL_BOOT     0x55555555
#define CAN_BL_APP      0xAAAAAAAA

//FLASH容量宏定义
#define FLASH_64K       0xA1
#define FLASH_128K      0xA2
#define FLASH_256K      0xA3
#define FLASH_512K      0xA4
#define FLASH_1000K     0xA5

typedef struct _SEND_INFO
{
    //unsigned char data[16388];//缓存数据
    unsigned char line_num;//表示读取数据的行数,最大为32;
    unsigned char read_start_flag;//表示开始读取数据标志位
    unsigned char line_cnt;//表示读取文件的函数,最大值不能大于line_num
    unsigned short int data_len;//表示需要发送的数据长度;
    unsigned short int data_cnt;//表示需要发送多少数据,最大值为1024
    unsigned short int pack_cnt;//表示当前已经发送的数据包的个数,仅仅是测试使用.
    unsigned short int pack_size;//表示每个每次读取bin文件的长度,仅仅是在读取bin文件时使用
    unsigned long int data_addr;//表示当前数据的写入地址对于hex文件表示实际的地址,对于bin文件是表示偏移地址
    unsigned char data[];//缓存数据
}SEND_INFO;

//-----------------------------------------
typedef struct _Bootloader_data
{
    union
    {
        unsigned long int all;
        struct
        {
            unsigned short int  cmd     :4; //命令
            unsigned short int  addr    :12; //设备地址
            unsigned short int  reserve :16; //保留位
        }bit;
    } ExtId; //扩展帧ID
    unsigned char IDE;   //帧类型,可为：CAN_ID_STD(标准帧),CAN_ID_EXT(扩展帧)
    unsigned char DLC;  //数据长度，可为0到8;
    unsigned char data[8];
}  bootloader_data;

namespace Ui {
class bootloader;
}

class bootloader : public QWidget
{
    Q_OBJECT

public:
    explicit bootloader(QWidget *parent = nullptr);
    ~bootloader();

private slots:
    void on_openDocument_clicked();

    void on_Download_Btn_clicked();

    void on_Erase_Btn_clicked();

    void on_Check_Btn_clicked();

    void on_ExcuteType_Btn_clicked();

    void on_SetBaudrate_Btn_clicked();

    void on_textBrowser_textChanged();

    void on_UpdateFirmware_Btn_clicked();

private:
    Ui::bootloader *ui;

    CANThread* canthread = CANThread::getInstance();
    UseTool* usetool = new UseTool();

    UINT DeviceIndex;
    UINT Channel;
    QString TypeStr="";
    QString warning_str;
    QString cmd_type;
    int CAN_BL_check(UINT DevIndex, UINT CANIndex, UINT NodeAddr);
    int CAN_BL_erase(UINT DevIndex, UINT CANIndex, UINT NodeAddr,unsigned int FlashSize,unsigned int TimeOut);
    int CAN_BL_excute(UINT DevIndex,UINT CANIndex,UINT NodeAddr,unsigned int Type);
    int CAN_BL_write(UINT DevIndex,UINT CANIndex,SEND_INFO *send_data);

    unsigned short int CRCcalc16( unsigned char *data, unsigned short int len);

    QString path="";
    float readfileSize=0;

    uint8_t FLASH_SIZE = 0;

    void MSG_CMD(int status, int type);
    void MSG_PRO(QString msg, bool isAlert);

};

#endif // BOOTLOADER_H
