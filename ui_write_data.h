/********************************************************************************
** Form generated from reading UI file 'write_data.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITE_DATA_H
#define UI_WRITE_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_write_data
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_21;
    QLCDNumber *SOFTWARE;
    QLCDNumber *HARDWARE;
    QLabel *label_20;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *read_module;
    QPushButton *check_module;
    QGridLayout *gridLayout_5;
    QComboBox *projectConfig_cbx;
    QLabel *module_led;
    QLabel *label_4;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_16;
    QTableView *TableView_DCF;
    QPushButton *DCF_WRITE;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *page_4;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QTableView *TableView_FCCB_FCU;
    QGridLayout *gridLayout_2;
    QLabel *label_31;
    QLabel *FCCB_Time;
    QTableView *TableView_FCCB_DCF;
    QTableView *TableView_FCCB_BAT;
    QPushButton *FCCB_WRITE;

    void setupUi(QWidget *write_data)
    {
        if (write_data->objectName().isEmpty())
            write_data->setObjectName(QString::fromUtf8("write_data"));
        write_data->resize(1216, 968);
        write_data->setStyleSheet(QString::fromUtf8("font: 25 9pt \"Microsoft YaHei\";"));
        gridLayout_4 = new QGridLayout(write_data);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_21 = new QLabel(write_data);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_21, 0, 2, 1, 1);

        SOFTWARE = new QLCDNumber(write_data);
        SOFTWARE->setObjectName(QString::fromUtf8("SOFTWARE"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SOFTWARE->sizePolicy().hasHeightForWidth());
        SOFTWARE->setSizePolicy(sizePolicy);
        SOFTWARE->setMinimumSize(QSize(70, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        SOFTWARE->setFont(font);

        gridLayout->addWidget(SOFTWARE, 0, 3, 1, 1);

        HARDWARE = new QLCDNumber(write_data);
        HARDWARE->setObjectName(QString::fromUtf8("HARDWARE"));
        sizePolicy.setHeightForWidth(HARDWARE->sizePolicy().hasHeightForWidth());
        HARDWARE->setSizePolicy(sizePolicy);
        HARDWARE->setMinimumSize(QSize(70, 30));
        HARDWARE->setFont(font);

        gridLayout->addWidget(HARDWARE, 0, 1, 1, 1);

        label_20 = new QLabel(write_data);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);

        gridLayout_4->addLayout(gridLayout, 0, 2, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        pushButton_9 = new QPushButton(write_data);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_12->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_10 = new QPushButton(write_data);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_12->addWidget(pushButton_10, 0, 3, 1, 1);

        read_module = new QPushButton(write_data);
        read_module->setObjectName(QString::fromUtf8("read_module"));

        gridLayout_12->addWidget(read_module, 0, 1, 1, 1);

        check_module = new QPushButton(write_data);
        check_module->setObjectName(QString::fromUtf8("check_module"));

        gridLayout_12->addWidget(check_module, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_12, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        projectConfig_cbx = new QComboBox(write_data);
        projectConfig_cbx->addItem(QString());
        projectConfig_cbx->addItem(QString());
        projectConfig_cbx->addItem(QString());
        projectConfig_cbx->addItem(QString());
        projectConfig_cbx->setObjectName(QString::fromUtf8("projectConfig_cbx"));
        projectConfig_cbx->setMinimumSize(QSize(150, 0));

        gridLayout_5->addWidget(projectConfig_cbx, 0, 3, 1, 1);

        module_led = new QLabel(write_data);
        module_led->setObjectName(QString::fromUtf8("module_led"));

        gridLayout_5->addWidget(module_led, 0, 2, 1, 1);

        label_4 = new QLabel(write_data);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(write_data);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_13 = new QGridLayout(page_3);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFont(font);
        gridLayout_16 = new QGridLayout(groupBox_7);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        TableView_DCF = new QTableView(groupBox_7);
        TableView_DCF->setObjectName(QString::fromUtf8("TableView_DCF"));
        TableView_DCF->setMinimumSize(QSize(260, 200));
        TableView_DCF->setMouseTracking(true);
        TableView_DCF->setStyleSheet(QString::fromUtf8("/* \350\241\250\346\240\274\350\256\276\347\275\256 */\n"
"QTableView{  /** QTableView\350\256\276\347\275\256 */\n"
"    border: none;\n"
"    selection-background-color: rgb(255, 214, 102,150); /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"	selection-color: #000000; /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"	background-color: #dfe4ea\n"
"}\n"
" \n"
"QHeaderView::section{         /*\350\241\250\345\244\264\350\256\276\347\275\256*/\n"
"    border: none;\n"
"	border-right: 2px solid #6d63c7;\n"
"    height:20px;    /*\350\241\250\345\244\264\351\253\230\345\272\246*/\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    font-weight: 900;\n"
"    background-color: #69c0ff;\n"
"	text-align: center;\n"
"}\n"
"\n"
""));

        gridLayout_16->addWidget(TableView_DCF, 0, 0, 1, 1);

        DCF_WRITE = new QPushButton(groupBox_7);
        DCF_WRITE->setObjectName(QString::fromUtf8("DCF_WRITE"));

        gridLayout_16->addWidget(DCF_WRITE, 1, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_7, 0, 0, 1, 2);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget->addWidget(page_6);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_6 = new QGridLayout(page_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea_2 = new QScrollArea(page_4);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1170, 883));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        TableView_FCCB_FCU = new QTableView(groupBox);
        TableView_FCCB_FCU->setObjectName(QString::fromUtf8("TableView_FCCB_FCU"));
        TableView_FCCB_FCU->setMinimumSize(QSize(260, 200));
        TableView_FCCB_FCU->setMouseTracking(true);
        TableView_FCCB_FCU->setStyleSheet(QString::fromUtf8("/* \350\241\250\346\240\274\350\256\276\347\275\256 */\n"
"QTableView{  /** QTableView\350\256\276\347\275\256 */\n"
"    border: none;\n"
"    selection-background-color: rgb(255, 214, 102,150); /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"	selection-color: #000000; /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"	background-color: #dfe4ea\n"
"}\n"
" \n"
"QHeaderView::section{         /*\350\241\250\345\244\264\350\256\276\347\275\256*/\n"
"    border: none;\n"
"	border-right: 2px solid #6d63c7;\n"
"    height:20px;    /*\350\241\250\345\244\264\351\253\230\345\272\246*/\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    font-weight: 900;\n"
"    background-color: #69c0ff;\n"
"	text-align: center;\n"
"}\n"
"\n"
""));

        gridLayout_3->addWidget(TableView_FCCB_FCU, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 3, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_31 = new QLabel(scrollAreaWidgetContents_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(140, 0));
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_31, 0, 0, 1, 1);

        FCCB_Time = new QLabel(scrollAreaWidgetContents_2);
        FCCB_Time->setObjectName(QString::fromUtf8("FCCB_Time"));
        FCCB_Time->setMinimumSize(QSize(100, 50));
        FCCB_Time->setFont(font);
        FCCB_Time->setStyleSheet(QString::fromUtf8("QLabel{border:1px solid #242424;}"));
        FCCB_Time->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(FCCB_Time, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 2);

        gridLayout_7->addLayout(gridLayout_2, 0, 1, 1, 1);

        TableView_FCCB_DCF = new QTableView(scrollAreaWidgetContents_2);
        TableView_FCCB_DCF->setObjectName(QString::fromUtf8("TableView_FCCB_DCF"));
        TableView_FCCB_DCF->setMinimumSize(QSize(260, 200));
        TableView_FCCB_DCF->setMouseTracking(true);
        TableView_FCCB_DCF->setStyleSheet(QString::fromUtf8("/* \350\241\250\346\240\274\350\256\276\347\275\256 */\n"
"QTableView{  /** QTableView\350\256\276\347\275\256 */\n"
"    border: none;\n"
"    selection-background-color: rgb(255, 214, 102,150); /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"	selection-color: #000000; /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"	background-color: #dfe4ea\n"
"}\n"
" \n"
"QHeaderView::section{         /*\350\241\250\345\244\264\350\256\276\347\275\256*/\n"
"    border: none;\n"
"	border-right: 2px solid #6d63c7;\n"
"    height:20px;    /*\350\241\250\345\244\264\351\253\230\345\272\246*/\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    font-weight: 900;\n"
"    background-color: #69c0ff;\n"
"	text-align: center;\n"
"}\n"
"\n"
""));

        gridLayout_7->addWidget(TableView_FCCB_DCF, 1, 1, 1, 1);

        TableView_FCCB_BAT = new QTableView(scrollAreaWidgetContents_2);
        TableView_FCCB_BAT->setObjectName(QString::fromUtf8("TableView_FCCB_BAT"));
        TableView_FCCB_BAT->setMinimumSize(QSize(260, 200));
        TableView_FCCB_BAT->setMouseTracking(true);
        TableView_FCCB_BAT->setStyleSheet(QString::fromUtf8("/* \350\241\250\346\240\274\350\256\276\347\275\256 */\n"
"QTableView{  /** QTableView\350\256\276\347\275\256 */\n"
"    border: none;\n"
"    selection-background-color: rgb(255, 214, 102,150); /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/\n"
"	selection-color: #000000; /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"	background-color: #dfe4ea\n"
"}\n"
" \n"
"QHeaderView::section{         /*\350\241\250\345\244\264\350\256\276\347\275\256*/\n"
"    border: none;\n"
"	border-right: 2px solid #6d63c7;\n"
"    height:20px;    /*\350\241\250\345\244\264\351\253\230\345\272\246*/\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    font-weight: 900;\n"
"    background-color: #69c0ff;\n"
"	text-align: center;\n"
"}\n"
"\n"
""));

        gridLayout_7->addWidget(TableView_FCCB_BAT, 2, 1, 1, 1);

        FCCB_WRITE = new QPushButton(scrollAreaWidgetContents_2);
        FCCB_WRITE->setObjectName(QString::fromUtf8("FCCB_WRITE"));

        gridLayout_7->addWidget(FCCB_WRITE, 3, 0, 1, 2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_6->addWidget(scrollArea_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        gridLayout_4->addWidget(stackedWidget, 1, 0, 1, 3);


        retranslateUi(write_data);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(write_data);
    } // setupUi

    void retranslateUi(QWidget *write_data)
    {
        write_data->setWindowTitle(QApplication::translate("write_data", "\345\212\250\346\200\201\345\217\202\346\225\260\345\206\231\345\205\245", nullptr));
        label_21->setText(QApplication::translate("write_data", "\350\275\257\344\273\266\347\211\210\346\234\254\357\274\232", nullptr));
        label_20->setText(QApplication::translate("write_data", "\347\241\254\344\273\266\347\211\210\346\234\254\357\274\232", nullptr));
        pushButton_9->setText(QApplication::translate("write_data", "\345\212\240\350\275\275\345\217\202\346\225\260\346\226\207\344\273\266", nullptr));
        pushButton_10->setText(QApplication::translate("write_data", "\344\277\235\345\255\230\345\217\202\346\225\260\346\226\207\344\273\266", nullptr));
        read_module->setText(QApplication::translate("write_data", "\350\257\273\345\217\226\346\225\260\346\215\256", nullptr));
        check_module->setText(QApplication::translate("write_data", "\346\250\241\345\235\227\346\237\245\350\257\242", nullptr));
        projectConfig_cbx->setItemText(0, QApplication::translate("write_data", "DCF(\347\207\203\346\226\231\347\224\265\346\261\240DC/DC\345\217\230\346\215\242\345\231\250)", nullptr));
        projectConfig_cbx->setItemText(1, QApplication::translate("write_data", "FCU(\347\207\203\346\226\231\347\224\265\346\261\240\346\216\247\345\210\266\347\263\273\347\273\237)", nullptr));
        projectConfig_cbx->setItemText(2, QApplication::translate("write_data", "HSCS(\344\276\233\346\260\242\347\233\221\346\265\213\345\222\214\346\216\247\345\210\266\347\263\273\347\273\237)", nullptr));
        projectConfig_cbx->setItemText(3, QApplication::translate("write_data", "FCPS-E_BIKE(\344\270\244\350\275\256\350\275\246\345\212\250\345\212\233\347\263\273\347\273\237)", nullptr));

        module_led->setText(QApplication::translate("write_data", "LED", nullptr));
        label_4->setText(QApplication::translate("write_data", "\347\263\273\347\273\237\351\205\215\347\275\256\357\274\232", nullptr));
        groupBox_7->setTitle(QApplication::translate("write_data", "DCF\345\217\202\346\225\260", nullptr));
        DCF_WRITE->setText(QApplication::translate("write_data", "\344\270\200\351\224\256\345\206\231\345\205\245", nullptr));
        groupBox->setTitle(QApplication::translate("write_data", " FCU\345\217\202\346\225\260", nullptr));
        label_31->setText(QApplication::translate("write_data", "\346\216\247\345\210\266\345\231\250RTC\346\227\266\351\227\264\357\274\232", nullptr));
        FCCB_Time->setText(QString());
        FCCB_WRITE->setText(QApplication::translate("write_data", "\344\270\200\351\224\256\345\206\231\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class write_data: public Ui_write_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITE_DATA_H
