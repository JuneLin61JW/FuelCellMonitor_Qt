﻿#include "usetool.h"

UseTool::UseTool()
{

}

// 该函数将label控件变成一个圆形指示灯，需要指定颜色color以及直径size
// color 0:grey 1:red 2:green 3:yellow
// size  单位是像素
void UseTool::setLED(QLabel *label, int color, int size)
{
    // 将label中的文字清空
    label->setText("");
    // 先设置矩形大小
    // 如果ui界面设置的label大小比最小宽度和高度小，矩形将被设置为最小宽度和最小高度；
    // 如果ui界面设置的label大小比最小宽度和高度大，矩形将被设置为最大宽度和最大高度；
    QString min_width = QString("min-width: %1px;").arg(size); // 最小宽度：size
    QString min_height = QString("min-height: %1px;").arg(size); // 最小高度：size
    QString max_width = QString("max-width: %1px;").arg(size); // 最小宽度：size
    QString max_height = QString("max-height: %1px;").arg(size); // 最小高度：size
    // 再设置边界形状及边框
    QString border_radius = QString("border-radius: %1px;").arg(size / 2); // 边框是圆角，半径为size/2
    QString border = QString("border:1px solid black;"); // 边框为1px黑色
    // 最后设置背景颜色
    QString background = "background-color:";
    switch (color) {
    case 0:
        // 灰色
        background += "rgb(190,190,190)";
        break;
    case 1:
        // 红色
        background += "rgb(255,0,0)";
        break;
    case 2:
        // 绿色
        background += "rgb(0,255,0)";
        break;
    case 3:
        // 黄色
        background += "rgb(255,255,0)";
        break;
    default:
        break;
    }

    const QString SheetStyle = min_width + min_height + max_width + max_height + border_radius + border + background;
    label->setStyleSheet(SheetStyle);
}

//------------------子事件循环延时函数(不阻塞）------------------------
void UseTool::Delay_MSec(unsigned int msec)
{
    QEventLoop loop; //定义一个新的事件循环
    QTimer::singleShot(msec, &loop, SLOT(quit())); //创建单次定时器，槽函数为事件循环的退出函数
    loop.exec(); //事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
}
