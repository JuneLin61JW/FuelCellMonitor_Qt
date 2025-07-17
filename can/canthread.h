#ifndef CANTHREAD_H
#define CANTHREAD_H

#include <QThread>
#include "ControlCAN.h"


class CANThread:public QThread
{
    Q_OBJECT
public:
    static CANThread* getInstance(); //单例化

    void stop();

    //1.打开设备
    bool openDevice(UINT deviceType,UINT debicIndex,UINT baundRate,UINT channel);

    //2.初始化CAN
    bool initCAN();

    //3.启动CAN
    bool startCAN();

    //4.发送数据
    bool sendData(UINT ID,BYTE remoteFlag,BYTE externFlag,const unsigned char *data,BYTE len);

    //5.关闭设备
    void closeDevice();

    //0.复位设备，  复位后回到3
    bool reSetCAN();

    UINT m_deviceType;
    UINT m_debicIndex;
    UINT m_baundRate;
    UINT m_debicCom;
    UINT m_channel;

    bool stopped;

signals:
    void getProtocolData(VCI_CAN_OBJ *vci,unsigned int dwRel,unsigned int channel);
    void boardInfo(VCI_BOARD_INFO vbi);

private:
    CANThread(); //单例化
    static CANThread* instance; //单例化

    void run();
    void sleep(int msec);

};

#endif // CANTHREAD_H
