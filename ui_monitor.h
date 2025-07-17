/********************************************************************************
** Form generated from reading UI file 'monitor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITOR_H
#define UI_MONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_monitor
{
public:
    QGridLayout *gridLayout_14;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLCDNumber *PRODUCT_CODE;
    QLabel *label_19;
    QLCDNumber *FCU_HARDWARE;
    QLabel *label_15;
    QLCDNumber *FCU_LIFE;
    QLabel *label_20;
    QLCDNumber *FCU_SOFTWARE;
    QLabel *label_21;
    QLCDNumber *FCU_ONOFF;
    QGroupBox *groupBox_30;
    QGridLayout *gridLayout_12;
    QLabel *label_44;
    QLCDNumber *FAULT_CODE;
    QLabel *FAULT_FC1;
    QLabel *FAULT_FC2;
    QLabel *FAULT_TK1;
    QLabel *FAULT_TK2;
    QLabel *FAULT_BAT;
    QLabel *FAULT_SYS;
    QLabel *FAULT_SHUTDOWN;
    QLabel *FAULT_DCF;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_10;
    QLabel *label_144;
    QLCDNumber *SYS_PARAMETER;
    QLabel *label_145;
    QLCDNumber *SYS_VOLTAGE;
    QLabel *label_149;
    QLabel *label_146;
    QLCDNumber *SYS_CURRENT;
    QLabel *label_150;
    QLabel *label_147;
    QLCDNumber *SYS_POWER;
    QLabel *label_151;
    QLabel *label_178;
    QLCDNumber *SYS_SPEED;
    QLabel *label_193;
    QLabel *label_148;
    QLCDNumber *SYS_STATE;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_11;
    QLabel *label_172;
    QLCDNumber *H2PPM1;
    QLabel *label_155;
    QLabel *label_173;
    QLCDNumber *H2PPM2;
    QLabel *label_169;
    QLabel *label_171;
    QLCDNumber *ATMOS1_TEMP;
    QLabel *label_174;
    QLabel *label_170;
    QLCDNumber *ATMOS1_HUMI;
    QLabel *label_175;
    QLabel *label_153;
    QLCDNumber *ATMOS2_TEMP;
    QLabel *label_176;
    QLabel *label_154;
    QLCDNumber *ATMOS2_HUMI;
    QLabel *label_177;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_17;
    QLabel *label_17;
    QLCDNumber *BAT_PARAMETER;
    QLabel *label_16;
    QLCDNumber *BAT_VOLTAGE;
    QLabel *label_136;
    QLabel *label_18;
    QLCDNumber *BAT_CURRENT;
    QLabel *label_137;
    QLabel *label_22;
    QLCDNumber *BAT_POWER;
    QLabel *label_138;
    QLabel *label_23;
    QLCDNumber *BAT_MaxCellVol;
    QLabel *label_139;
    QLabel *label_24;
    QLCDNumber *BAT_MinCellVol;
    QLabel *label_140;
    QLabel *label_131;
    QLCDNumber *BAT_MaxCellTemp;
    QLabel *label_141;
    QLabel *label_132;
    QLCDNumber *BAT_MinCellTemp;
    QLabel *label_142;
    QLabel *label_134;
    QLCDNumber *BAT_SOC;
    QLabel *label_143;
    QLabel *label_25;
    QLCDNumber *BAT_LIFE;
    QLabel *label_135;
    QLCDNumber *BAT_EN;
    QLabel *label_133;
    QLCDNumber *BAT_STATE;
    QGridLayout *gridLayout_9;
    QLabel *BAT_MOS;
    QLabel *BAT_LOW_SOC;
    QLabel *BAT_BATTERY_CONSISTENT;
    QLabel *BAT_WORK;
    QLabel *BAT_OVER_VOLTAGE;
    QLabel *label_187;
    QLabel *BAT_OVER_CURRENT;
    QLabel *BAT_OVER_TEMP;
    QLabel *BAT_SOC_MATCH;
    QLabel *label_188;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_2;
    QLabel *label_47;
    QLCDNumber *DCF_PARAMETER;
    QLabel *label_48;
    QLCDNumber *DCF_IN_VOLTAGE;
    QLabel *label_81;
    QLabel *label_49;
    QLCDNumber *DCF_IN_CURRENT;
    QLabel *label_82;
    QLabel *label_50;
    QLCDNumber *DCF_IN_POWER;
    QLabel *label_83;
    QLabel *label_52;
    QLCDNumber *DCF_OUT_VOLTAGE;
    QLabel *label_85;
    QLabel *label_53;
    QLCDNumber *DCF_OUT_CURRENT;
    QLabel *label_86;
    QLabel *label_54;
    QLCDNumber *DCF_OUT_POWER;
    QLabel *label_87;
    QLabel *label_55;
    QLCDNumber *DCF_OVOL;
    QLabel *label_88;
    QLabel *label_61;
    QLCDNumber *DCF_UVOL;
    QLabel *label_89;
    QLabel *label_56;
    QLCDNumber *DCF_TEMP;
    QLabel *label_90;
    QLabel *label_57;
    QLCDNumber *DCF_SET_VOLTAGE;
    QLabel *label_91;
    QLabel *label_58;
    QLCDNumber *DCF_SET_CURRENT;
    QLabel *label_92;
    QLabel *label_59;
    QLCDNumber *DCF_SET_CURRENT_SLOPE;
    QLabel *label_93;
    QLabel *label_51;
    QLCDNumber *DCF_LIFE;
    QLabel *label_60;
    QLCDNumber *DCF_EN;
    QLabel *label_62;
    QLCDNumber *DCF_STATE;
    QLabel *label_192;
    QLabel *DCF_WORK;
    QLabel *label_191;
    QLabel *DCF_FAULT;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout;
    QLCDNumber *TK1_HP;
    QLabel *label_113;
    QLabel *label_112;
    QLCDNumber *TK1_MP;
    QLabel *label_115;
    QLCDNumber *TK1_SOC;
    QLabel *label_118;
    QLabel *label_116;
    QLCDNumber *TK1_TEMP;
    QLabel *label_119;
    QLabel *label_117;
    QLabel *label_111;
    QLabel *label_120;
    QLCDNumber *TK1_PARAMETER;
    QLabel *label_114;
    QLCDNumber *TK1_STATE;
    QLabel *label_185;
    QLabel *TK1_WORK;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_7;
    QLabel *label_121;
    QLCDNumber *TK2_PARAMETER;
    QLabel *label_127;
    QLCDNumber *TK2_MP;
    QLabel *label_123;
    QLabel *label_126;
    QLCDNumber *TK2_SOC;
    QLabel *label_129;
    QLabel *label_128;
    QLCDNumber *TK2_HP;
    QLabel *label_124;
    QLabel *label_125;
    QLCDNumber *TK2_TEMP;
    QLabel *label_130;
    QLabel *label_122;
    QLCDNumber *TK2_STATE;
    QLabel *label_186;
    QLabel *TK2_WORK;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_5;
    QLabel *label_161;
    QLCDNumber *FCA_PARAMETER;
    QLabel *label_162;
    QLCDNumber *FCA_VOLTAGE;
    QLabel *label_164;
    QLabel *label_163;
    QLCDNumber *FCA_CURRENT;
    QLabel *label_165;
    QLabel *label_159;
    QLCDNumber *FCA_POWER;
    QLabel *label_166;
    QLabel *label_160;
    QLCDNumber *FCA_SET_CURRENT;
    QLabel *label_167;
    QLabel *label_157;
    QLCDNumber *FCA_SET_CURRENT_SLOPE;
    QLabel *label_168;
    QLabel *label_156;
    QLCDNumber *FCA_LIFE;
    QLabel *label_158;
    QLCDNumber *FCA_EN;
    QLabel *label_152;
    QLCDNumber *FCA_STATE;
    QLabel *label_190;
    QLabel *FCA_WORK;
    QLabel *label_189;
    QLabel *FCA_FAULT;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_15;
    QLabel *label_26;
    QLCDNumber *FC1_PARAMETER;
    QLabel *label_27;
    QLCDNumber *FC1_VOLTAGE;
    QLabel *label_68;
    QLabel *label_28;
    QLCDNumber *FC1_CURRENT;
    QLabel *label_69;
    QLabel *label_29;
    QLCDNumber *FC1_POWER;
    QLabel *label_70;
    QLabel *label_30;
    QLCDNumber *FC1_LP_IN;
    QLabel *label_71;
    QLabel *label_38;
    QLCDNumber *FC1_LP_OUT;
    QLabel *label_72;
    QLabel *label_43;
    QLCDNumber *FC1_ENERGY;
    QLabel *label_79;
    QLabel *label_45;
    QLCDNumber *FC1_H2C;
    QLabel *label_80;
    QLabel *label_36;
    QLCDNumber *FC1_FAN1_SPEED;
    QLabel *label_73;
    QLabel *label_37;
    QLCDNumber *FC1_FAN2_SPEED;
    QLabel *label_74;
    QLabel *label_39;
    QLCDNumber *FC1_FAN3_SPEED;
    QLabel *label_75;
    QLabel *label_41;
    QLCDNumber *FC1_FAN4_SPEED;
    QLabel *label_76;
    QLabel *label_42;
    QLCDNumber *FC1_TEMP1;
    QLabel *label_77;
    QLabel *label_40;
    QLCDNumber *FC1_TEMP2;
    QLabel *label_78;
    QLabel *label_46;
    QLCDNumber *FC1_STATE;
    QLabel *label_181;
    QLabel *FC1_VENT;
    QGridLayout *gridLayout_4;
    QLabel *label_179;
    QLabel *FC1_WORK;
    QLabel *FC1_FAULT_P;
    QLabel *FC1_FAULT_V;
    QLabel *FC1_FAULT_T;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_16;
    QLabel *label_31;
    QLCDNumber *FC2_PARAMETER;
    QLabel *label_32;
    QLCDNumber *FC2_VOLTAGE;
    QLabel *label_84;
    QLabel *label_33;
    QLCDNumber *FC2_CURRENT;
    QLabel *label_94;
    QLabel *label_34;
    QLCDNumber *FC2_POWER;
    QLabel *label_95;
    QLabel *label_35;
    QLCDNumber *FC2_LP_IN;
    QLabel *label_96;
    QLabel *label_63;
    QLCDNumber *FC2_LP_OUT;
    QLabel *label_97;
    QLabel *label_64;
    QLCDNumber *FC2_FAN1_SPEED;
    QLabel *label_98;
    QLabel *label_65;
    QLCDNumber *FC2_FAN2_SPEED;
    QLabel *label_99;
    QLabel *label_66;
    QLCDNumber *FC2_FAN3_SPEED;
    QLabel *label_100;
    QLabel *label_110;
    QLCDNumber *FC2_FAN4_SPEED;
    QLabel *label_101;
    QLabel *label_67;
    QLCDNumber *FC2_TEMP1;
    QLabel *label_102;
    QLabel *label_103;
    QLCDNumber *FC2_TEMP2;
    QLabel *label_104;
    QLabel *label_105;
    QLCDNumber *FC2_ENERGY;
    QLabel *label_106;
    QLabel *label_107;
    QLCDNumber *FC2_H2C;
    QLabel *label_108;
    QLabel *label_109;
    QLCDNumber *FC2_STATE;
    QLabel *label_182;
    QLabel *FC2_VENT;
    QGridLayout *gridLayout_6;
    QLabel *label_183;
    QLabel *FC2_WORK;
    QLabel *FC2_FAULT_P;
    QLabel *FC2_FAULT_T;
    QLabel *FC2_FAULT_V;

    void setupUi(QWidget *monitor)
    {
        if (monitor->objectName().isEmpty())
            monitor->setObjectName(QString::fromUtf8("monitor"));
        monitor->resize(1300, 880);
        monitor->setMinimumSize(QSize(1300, 880));
        monitor->setStyleSheet(QString::fromUtf8("font: 25 9pt \"Microsoft YaHei\";"));
        gridLayout_14 = new QGridLayout(monitor);
        gridLayout_14->setSpacing(5);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(5, 5, 5, 5);
        scrollArea_2 = new QScrollArea(monitor);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1321, 193));
        gridLayout_13 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_13->setSpacing(5);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(5, 5, 5, 5);
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        groupBox_5->setFont(font);
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        groupBox_5->setFlat(true);
        groupBox_5->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(90, 15));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(3);
        label_4->setFont(font1);
        label_4->setAutoFillBackground(false);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        PRODUCT_CODE = new QLCDNumber(groupBox_5);
        PRODUCT_CODE->setObjectName(QString::fromUtf8("PRODUCT_CODE"));
        sizePolicy.setHeightForWidth(PRODUCT_CODE->sizePolicy().hasHeightForWidth());
        PRODUCT_CODE->setSizePolicy(sizePolicy);
        PRODUCT_CODE->setMinimumSize(QSize(75, 15));
        PRODUCT_CODE->setFont(font1);
        PRODUCT_CODE->setStyleSheet(QString::fromUtf8(""));
        PRODUCT_CODE->setDigitCount(10);
        PRODUCT_CODE->setMode(QLCDNumber::Dec);
        PRODUCT_CODE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(PRODUCT_CODE, 0, 1, 1, 3);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setMinimumSize(QSize(75, 15));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_19, 1, 0, 1, 1);

        FCU_HARDWARE = new QLCDNumber(groupBox_5);
        FCU_HARDWARE->setObjectName(QString::fromUtf8("FCU_HARDWARE"));
        sizePolicy.setHeightForWidth(FCU_HARDWARE->sizePolicy().hasHeightForWidth());
        FCU_HARDWARE->setSizePolicy(sizePolicy);
        FCU_HARDWARE->setMinimumSize(QSize(75, 15));
        FCU_HARDWARE->setFont(font1);
        FCU_HARDWARE->setDigitCount(5);
        FCU_HARDWARE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(FCU_HARDWARE, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setMinimumSize(QSize(75, 15));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 1, 2, 1, 1);

        FCU_LIFE = new QLCDNumber(groupBox_5);
        FCU_LIFE->setObjectName(QString::fromUtf8("FCU_LIFE"));
        sizePolicy.setHeightForWidth(FCU_LIFE->sizePolicy().hasHeightForWidth());
        FCU_LIFE->setSizePolicy(sizePolicy);
        FCU_LIFE->setMinimumSize(QSize(75, 15));
        FCU_LIFE->setFont(font1);
        FCU_LIFE->setDigitCount(5);
        FCU_LIFE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(FCU_LIFE, 1, 3, 1, 1);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMinimumSize(QSize(75, 15));
        label_20->setFont(font1);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_20, 2, 0, 1, 1);

        FCU_SOFTWARE = new QLCDNumber(groupBox_5);
        FCU_SOFTWARE->setObjectName(QString::fromUtf8("FCU_SOFTWARE"));
        sizePolicy.setHeightForWidth(FCU_SOFTWARE->sizePolicy().hasHeightForWidth());
        FCU_SOFTWARE->setSizePolicy(sizePolicy);
        FCU_SOFTWARE->setMinimumSize(QSize(75, 15));
        FCU_SOFTWARE->setFont(font1);
        FCU_SOFTWARE->setDigitCount(5);
        FCU_SOFTWARE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(FCU_SOFTWARE, 2, 1, 1, 1);

        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(90, 15));
        label_21->setFont(font1);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_21, 2, 2, 1, 1);

        FCU_ONOFF = new QLCDNumber(groupBox_5);
        FCU_ONOFF->setObjectName(QString::fromUtf8("FCU_ONOFF"));
        sizePolicy.setHeightForWidth(FCU_ONOFF->sizePolicy().hasHeightForWidth());
        FCU_ONOFF->setSizePolicy(sizePolicy);
        FCU_ONOFF->setMinimumSize(QSize(75, 15));
        FCU_ONOFF->setFont(font1);
        FCU_ONOFF->setDigitCount(5);
        FCU_ONOFF->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(FCU_ONOFF, 2, 3, 1, 1);


        gridLayout_13->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_30 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_30->setObjectName(QString::fromUtf8("groupBox_30"));
        sizePolicy.setHeightForWidth(groupBox_30->sizePolicy().hasHeightForWidth());
        groupBox_30->setSizePolicy(sizePolicy);
        groupBox_30->setFont(font);
        groupBox_30->setLayoutDirection(Qt::LeftToRight);
        groupBox_30->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_30->setAlignment(Qt::AlignCenter);
        groupBox_30->setFlat(true);
        gridLayout_12 = new QGridLayout(groupBox_30);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_44 = new QLabel(groupBox_30);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        sizePolicy.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy);
        label_44->setMinimumSize(QSize(75, 15));
        label_44->setFont(font1);
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_44, 0, 0, 1, 1);

        FAULT_CODE = new QLCDNumber(groupBox_30);
        FAULT_CODE->setObjectName(QString::fromUtf8("FAULT_CODE"));
        sizePolicy.setHeightForWidth(FAULT_CODE->sizePolicy().hasHeightForWidth());
        FAULT_CODE->setSizePolicy(sizePolicy);
        FAULT_CODE->setMinimumSize(QSize(75, 25));
        FAULT_CODE->setFont(font1);
        FAULT_CODE->setDigitCount(5);
        FAULT_CODE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_12->addWidget(FAULT_CODE, 0, 1, 1, 1);

        FAULT_FC1 = new QLabel(groupBox_30);
        FAULT_FC1->setObjectName(QString::fromUtf8("FAULT_FC1"));
        FAULT_FC1->setMinimumSize(QSize(75, 20));
        FAULT_FC1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_FC1->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_FC1, 1, 0, 1, 1);

        FAULT_FC2 = new QLabel(groupBox_30);
        FAULT_FC2->setObjectName(QString::fromUtf8("FAULT_FC2"));
        FAULT_FC2->setMinimumSize(QSize(75, 20));
        FAULT_FC2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_FC2->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_FC2, 1, 1, 1, 1);

        FAULT_TK1 = new QLabel(groupBox_30);
        FAULT_TK1->setObjectName(QString::fromUtf8("FAULT_TK1"));
        FAULT_TK1->setMinimumSize(QSize(75, 20));
        FAULT_TK1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_TK1->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_TK1, 2, 0, 1, 1);

        FAULT_TK2 = new QLabel(groupBox_30);
        FAULT_TK2->setObjectName(QString::fromUtf8("FAULT_TK2"));
        FAULT_TK2->setMinimumSize(QSize(75, 20));
        FAULT_TK2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_TK2->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_TK2, 2, 1, 1, 1);

        FAULT_BAT = new QLabel(groupBox_30);
        FAULT_BAT->setObjectName(QString::fromUtf8("FAULT_BAT"));
        FAULT_BAT->setMinimumSize(QSize(75, 20));
        FAULT_BAT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_BAT->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_BAT, 3, 0, 1, 1);

        FAULT_SYS = new QLabel(groupBox_30);
        FAULT_SYS->setObjectName(QString::fromUtf8("FAULT_SYS"));
        FAULT_SYS->setMinimumSize(QSize(75, 20));
        FAULT_SYS->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_SYS->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_SYS, 4, 0, 1, 1);

        FAULT_SHUTDOWN = new QLabel(groupBox_30);
        FAULT_SHUTDOWN->setObjectName(QString::fromUtf8("FAULT_SHUTDOWN"));
        FAULT_SHUTDOWN->setMinimumSize(QSize(75, 20));
        FAULT_SHUTDOWN->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_SHUTDOWN->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_SHUTDOWN, 4, 1, 1, 1);

        FAULT_DCF = new QLabel(groupBox_30);
        FAULT_DCF->setObjectName(QString::fromUtf8("FAULT_DCF"));
        FAULT_DCF->setMinimumSize(QSize(75, 20));
        FAULT_DCF->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FAULT_DCF->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(FAULT_DCF, 3, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_30, 0, 1, 1, 1);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        groupBox_12->setFont(font);
        groupBox_12->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_12->setAlignment(Qt::AlignCenter);
        groupBox_12->setFlat(true);
        gridLayout_10 = new QGridLayout(groupBox_12);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_144 = new QLabel(groupBox_12);
        label_144->setObjectName(QString::fromUtf8("label_144"));
        sizePolicy.setHeightForWidth(label_144->sizePolicy().hasHeightForWidth());
        label_144->setSizePolicy(sizePolicy);
        label_144->setMinimumSize(QSize(0, 0));
        label_144->setFont(font1);
        label_144->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_144, 0, 0, 1, 1);

        SYS_PARAMETER = new QLCDNumber(groupBox_12);
        SYS_PARAMETER->setObjectName(QString::fromUtf8("SYS_PARAMETER"));
        sizePolicy.setHeightForWidth(SYS_PARAMETER->sizePolicy().hasHeightForWidth());
        SYS_PARAMETER->setSizePolicy(sizePolicy);
        SYS_PARAMETER->setMinimumSize(QSize(75, 15));
        SYS_PARAMETER->setFont(font1);
        SYS_PARAMETER->setDigitCount(5);
        SYS_PARAMETER->setMode(QLCDNumber::Dec);
        SYS_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_10->addWidget(SYS_PARAMETER, 0, 1, 1, 1);

        label_145 = new QLabel(groupBox_12);
        label_145->setObjectName(QString::fromUtf8("label_145"));
        sizePolicy.setHeightForWidth(label_145->sizePolicy().hasHeightForWidth());
        label_145->setSizePolicy(sizePolicy);
        label_145->setMinimumSize(QSize(0, 0));
        label_145->setFont(font1);
        label_145->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_145, 0, 3, 1, 1);

        SYS_VOLTAGE = new QLCDNumber(groupBox_12);
        SYS_VOLTAGE->setObjectName(QString::fromUtf8("SYS_VOLTAGE"));
        sizePolicy.setHeightForWidth(SYS_VOLTAGE->sizePolicy().hasHeightForWidth());
        SYS_VOLTAGE->setSizePolicy(sizePolicy);
        SYS_VOLTAGE->setMinimumSize(QSize(75, 15));
        SYS_VOLTAGE->setFont(font1);
        SYS_VOLTAGE->setDigitCount(5);
        SYS_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_10->addWidget(SYS_VOLTAGE, 0, 4, 1, 1);

        label_149 = new QLabel(groupBox_12);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        sizePolicy.setHeightForWidth(label_149->sizePolicy().hasHeightForWidth());
        label_149->setSizePolicy(sizePolicy);
        label_149->setMinimumSize(QSize(0, 15));
        label_149->setFont(font1);

        gridLayout_10->addWidget(label_149, 0, 5, 1, 1);

        label_146 = new QLabel(groupBox_12);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        sizePolicy.setHeightForWidth(label_146->sizePolicy().hasHeightForWidth());
        label_146->setSizePolicy(sizePolicy);
        label_146->setMinimumSize(QSize(0, 0));
        label_146->setFont(font1);
        label_146->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_146, 1, 0, 1, 1);

        SYS_CURRENT = new QLCDNumber(groupBox_12);
        SYS_CURRENT->setObjectName(QString::fromUtf8("SYS_CURRENT"));
        sizePolicy.setHeightForWidth(SYS_CURRENT->sizePolicy().hasHeightForWidth());
        SYS_CURRENT->setSizePolicy(sizePolicy);
        SYS_CURRENT->setMinimumSize(QSize(75, 15));
        SYS_CURRENT->setFont(font1);
        SYS_CURRENT->setDigitCount(5);
        SYS_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_10->addWidget(SYS_CURRENT, 1, 1, 1, 1);

        label_150 = new QLabel(groupBox_12);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        sizePolicy.setHeightForWidth(label_150->sizePolicy().hasHeightForWidth());
        label_150->setSizePolicy(sizePolicy);
        label_150->setMinimumSize(QSize(0, 15));
        label_150->setFont(font1);

        gridLayout_10->addWidget(label_150, 1, 2, 1, 1);

        label_147 = new QLabel(groupBox_12);
        label_147->setObjectName(QString::fromUtf8("label_147"));
        sizePolicy.setHeightForWidth(label_147->sizePolicy().hasHeightForWidth());
        label_147->setSizePolicy(sizePolicy);
        label_147->setMinimumSize(QSize(0, 0));
        label_147->setFont(font1);
        label_147->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_147, 1, 3, 1, 1);

        SYS_POWER = new QLCDNumber(groupBox_12);
        SYS_POWER->setObjectName(QString::fromUtf8("SYS_POWER"));
        sizePolicy.setHeightForWidth(SYS_POWER->sizePolicy().hasHeightForWidth());
        SYS_POWER->setSizePolicy(sizePolicy);
        SYS_POWER->setMinimumSize(QSize(75, 15));
        SYS_POWER->setFont(font1);
        SYS_POWER->setDigitCount(5);
        SYS_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_10->addWidget(SYS_POWER, 1, 4, 1, 1);

        label_151 = new QLabel(groupBox_12);
        label_151->setObjectName(QString::fromUtf8("label_151"));
        sizePolicy.setHeightForWidth(label_151->sizePolicy().hasHeightForWidth());
        label_151->setSizePolicy(sizePolicy);
        label_151->setMinimumSize(QSize(0, 15));
        label_151->setFont(font1);

        gridLayout_10->addWidget(label_151, 1, 5, 1, 1);

        label_178 = new QLabel(groupBox_12);
        label_178->setObjectName(QString::fromUtf8("label_178"));
        sizePolicy.setHeightForWidth(label_178->sizePolicy().hasHeightForWidth());
        label_178->setSizePolicy(sizePolicy);
        label_178->setMinimumSize(QSize(0, 0));
        label_178->setFont(font1);
        label_178->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_178, 2, 0, 1, 1);

        SYS_SPEED = new QLCDNumber(groupBox_12);
        SYS_SPEED->setObjectName(QString::fromUtf8("SYS_SPEED"));
        sizePolicy.setHeightForWidth(SYS_SPEED->sizePolicy().hasHeightForWidth());
        SYS_SPEED->setSizePolicy(sizePolicy);
        SYS_SPEED->setMinimumSize(QSize(75, 15));
        SYS_SPEED->setFont(font1);
        SYS_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_10->addWidget(SYS_SPEED, 2, 1, 1, 1);

        label_193 = new QLabel(groupBox_12);
        label_193->setObjectName(QString::fromUtf8("label_193"));
        sizePolicy.setHeightForWidth(label_193->sizePolicy().hasHeightForWidth());
        label_193->setSizePolicy(sizePolicy);
        label_193->setMinimumSize(QSize(0, 15));
        label_193->setFont(font1);

        gridLayout_10->addWidget(label_193, 2, 2, 1, 1);

        label_148 = new QLabel(groupBox_12);
        label_148->setObjectName(QString::fromUtf8("label_148"));
        sizePolicy.setHeightForWidth(label_148->sizePolicy().hasHeightForWidth());
        label_148->setSizePolicy(sizePolicy);
        label_148->setMinimumSize(QSize(0, 0));
        label_148->setFont(font1);
        label_148->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_148, 2, 3, 1, 1);

        SYS_STATE = new QLCDNumber(groupBox_12);
        SYS_STATE->setObjectName(QString::fromUtf8("SYS_STATE"));
        sizePolicy.setHeightForWidth(SYS_STATE->sizePolicy().hasHeightForWidth());
        SYS_STATE->setSizePolicy(sizePolicy);
        SYS_STATE->setMinimumSize(QSize(75, 15));
        SYS_STATE->setFont(font1);
        SYS_STATE->setDigitCount(5);
        SYS_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_10->addWidget(SYS_STATE, 2, 4, 1, 1);

        gridLayout_10->setColumnStretch(0, 1);
        gridLayout_10->setColumnStretch(1, 1);
        gridLayout_10->setColumnStretch(3, 1);
        gridLayout_10->setColumnStretch(4, 1);

        gridLayout_13->addWidget(groupBox_12, 0, 2, 1, 1);

        groupBox_14 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        sizePolicy.setHeightForWidth(groupBox_14->sizePolicy().hasHeightForWidth());
        groupBox_14->setSizePolicy(sizePolicy);
        groupBox_14->setFont(font);
        groupBox_14->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_14->setAlignment(Qt::AlignCenter);
        groupBox_14->setFlat(true);
        gridLayout_11 = new QGridLayout(groupBox_14);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_172 = new QLabel(groupBox_14);
        label_172->setObjectName(QString::fromUtf8("label_172"));
        sizePolicy.setHeightForWidth(label_172->sizePolicy().hasHeightForWidth());
        label_172->setSizePolicy(sizePolicy);
        label_172->setMinimumSize(QSize(75, 15));
        label_172->setFont(font1);
        label_172->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_172, 0, 0, 1, 1);

        H2PPM1 = new QLCDNumber(groupBox_14);
        H2PPM1->setObjectName(QString::fromUtf8("H2PPM1"));
        sizePolicy.setHeightForWidth(H2PPM1->sizePolicy().hasHeightForWidth());
        H2PPM1->setSizePolicy(sizePolicy);
        H2PPM1->setMinimumSize(QSize(75, 15));
        H2PPM1->setFont(font1);
        H2PPM1->setDigitCount(5);
        H2PPM1->setMode(QLCDNumber::Dec);
        H2PPM1->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(H2PPM1, 0, 1, 1, 1);

        label_155 = new QLabel(groupBox_14);
        label_155->setObjectName(QString::fromUtf8("label_155"));
        sizePolicy.setHeightForWidth(label_155->sizePolicy().hasHeightForWidth());
        label_155->setSizePolicy(sizePolicy);
        label_155->setMinimumSize(QSize(0, 15));
        label_155->setFont(font1);

        gridLayout_11->addWidget(label_155, 0, 2, 1, 1);

        label_173 = new QLabel(groupBox_14);
        label_173->setObjectName(QString::fromUtf8("label_173"));
        sizePolicy.setHeightForWidth(label_173->sizePolicy().hasHeightForWidth());
        label_173->setSizePolicy(sizePolicy);
        label_173->setMinimumSize(QSize(75, 15));
        label_173->setFont(font1);
        label_173->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_173, 0, 3, 1, 1);

        H2PPM2 = new QLCDNumber(groupBox_14);
        H2PPM2->setObjectName(QString::fromUtf8("H2PPM2"));
        sizePolicy.setHeightForWidth(H2PPM2->sizePolicy().hasHeightForWidth());
        H2PPM2->setSizePolicy(sizePolicy);
        H2PPM2->setMinimumSize(QSize(75, 15));
        H2PPM2->setFont(font1);
        H2PPM2->setDigitCount(5);
        H2PPM2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(H2PPM2, 0, 4, 1, 1);

        label_169 = new QLabel(groupBox_14);
        label_169->setObjectName(QString::fromUtf8("label_169"));
        sizePolicy.setHeightForWidth(label_169->sizePolicy().hasHeightForWidth());
        label_169->setSizePolicy(sizePolicy);
        label_169->setMinimumSize(QSize(0, 15));
        label_169->setFont(font1);

        gridLayout_11->addWidget(label_169, 0, 5, 1, 1);

        label_171 = new QLabel(groupBox_14);
        label_171->setObjectName(QString::fromUtf8("label_171"));
        sizePolicy.setHeightForWidth(label_171->sizePolicy().hasHeightForWidth());
        label_171->setSizePolicy(sizePolicy);
        label_171->setMinimumSize(QSize(75, 15));
        label_171->setFont(font1);
        label_171->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_171, 1, 0, 1, 1);

        ATMOS1_TEMP = new QLCDNumber(groupBox_14);
        ATMOS1_TEMP->setObjectName(QString::fromUtf8("ATMOS1_TEMP"));
        sizePolicy.setHeightForWidth(ATMOS1_TEMP->sizePolicy().hasHeightForWidth());
        ATMOS1_TEMP->setSizePolicy(sizePolicy);
        ATMOS1_TEMP->setMinimumSize(QSize(75, 15));
        ATMOS1_TEMP->setFont(font1);
        ATMOS1_TEMP->setDigitCount(5);
        ATMOS1_TEMP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(ATMOS1_TEMP, 1, 1, 1, 1);

        label_174 = new QLabel(groupBox_14);
        label_174->setObjectName(QString::fromUtf8("label_174"));
        sizePolicy.setHeightForWidth(label_174->sizePolicy().hasHeightForWidth());
        label_174->setSizePolicy(sizePolicy);
        label_174->setMinimumSize(QSize(0, 15));
        label_174->setFont(font1);

        gridLayout_11->addWidget(label_174, 1, 2, 1, 1);

        label_170 = new QLabel(groupBox_14);
        label_170->setObjectName(QString::fromUtf8("label_170"));
        sizePolicy.setHeightForWidth(label_170->sizePolicy().hasHeightForWidth());
        label_170->setSizePolicy(sizePolicy);
        label_170->setMinimumSize(QSize(75, 15));
        label_170->setFont(font1);
        label_170->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_170, 1, 3, 1, 1);

        ATMOS1_HUMI = new QLCDNumber(groupBox_14);
        ATMOS1_HUMI->setObjectName(QString::fromUtf8("ATMOS1_HUMI"));
        sizePolicy.setHeightForWidth(ATMOS1_HUMI->sizePolicy().hasHeightForWidth());
        ATMOS1_HUMI->setSizePolicy(sizePolicy);
        ATMOS1_HUMI->setMinimumSize(QSize(75, 15));
        ATMOS1_HUMI->setFont(font1);
        ATMOS1_HUMI->setDigitCount(5);
        ATMOS1_HUMI->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(ATMOS1_HUMI, 1, 4, 1, 1);

        label_175 = new QLabel(groupBox_14);
        label_175->setObjectName(QString::fromUtf8("label_175"));
        sizePolicy.setHeightForWidth(label_175->sizePolicy().hasHeightForWidth());
        label_175->setSizePolicy(sizePolicy);
        label_175->setMinimumSize(QSize(0, 15));
        label_175->setFont(font1);

        gridLayout_11->addWidget(label_175, 1, 5, 1, 1);

        label_153 = new QLabel(groupBox_14);
        label_153->setObjectName(QString::fromUtf8("label_153"));
        sizePolicy.setHeightForWidth(label_153->sizePolicy().hasHeightForWidth());
        label_153->setSizePolicy(sizePolicy);
        label_153->setMinimumSize(QSize(75, 15));
        label_153->setFont(font1);
        label_153->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_153, 2, 0, 1, 1);

        ATMOS2_TEMP = new QLCDNumber(groupBox_14);
        ATMOS2_TEMP->setObjectName(QString::fromUtf8("ATMOS2_TEMP"));
        sizePolicy.setHeightForWidth(ATMOS2_TEMP->sizePolicy().hasHeightForWidth());
        ATMOS2_TEMP->setSizePolicy(sizePolicy);
        ATMOS2_TEMP->setMinimumSize(QSize(75, 15));
        ATMOS2_TEMP->setFont(font1);
        ATMOS2_TEMP->setDigitCount(5);
        ATMOS2_TEMP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(ATMOS2_TEMP, 2, 1, 1, 1);

        label_176 = new QLabel(groupBox_14);
        label_176->setObjectName(QString::fromUtf8("label_176"));
        sizePolicy.setHeightForWidth(label_176->sizePolicy().hasHeightForWidth());
        label_176->setSizePolicy(sizePolicy);
        label_176->setMinimumSize(QSize(0, 15));
        label_176->setFont(font1);

        gridLayout_11->addWidget(label_176, 2, 2, 1, 1);

        label_154 = new QLabel(groupBox_14);
        label_154->setObjectName(QString::fromUtf8("label_154"));
        sizePolicy.setHeightForWidth(label_154->sizePolicy().hasHeightForWidth());
        label_154->setSizePolicy(sizePolicy);
        label_154->setMinimumSize(QSize(75, 15));
        label_154->setFont(font1);
        label_154->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_154, 2, 3, 1, 1);

        ATMOS2_HUMI = new QLCDNumber(groupBox_14);
        ATMOS2_HUMI->setObjectName(QString::fromUtf8("ATMOS2_HUMI"));
        sizePolicy.setHeightForWidth(ATMOS2_HUMI->sizePolicy().hasHeightForWidth());
        ATMOS2_HUMI->setSizePolicy(sizePolicy);
        ATMOS2_HUMI->setMinimumSize(QSize(75, 15));
        ATMOS2_HUMI->setFont(font1);
        ATMOS2_HUMI->setDigitCount(5);
        ATMOS2_HUMI->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(ATMOS2_HUMI, 2, 4, 1, 1);

        label_177 = new QLabel(groupBox_14);
        label_177->setObjectName(QString::fromUtf8("label_177"));
        sizePolicy.setHeightForWidth(label_177->sizePolicy().hasHeightForWidth());
        label_177->setSizePolicy(sizePolicy);
        label_177->setMinimumSize(QSize(0, 15));
        label_177->setFont(font1);

        gridLayout_11->addWidget(label_177, 2, 5, 1, 1);

        gridLayout_11->setColumnStretch(0, 1);
        gridLayout_11->setColumnStretch(1, 1);
        gridLayout_11->setColumnStretch(3, 1);
        gridLayout_11->setColumnStretch(4, 1);

        gridLayout_13->addWidget(groupBox_14, 0, 3, 1, 1);

        gridLayout_13->setColumnStretch(0, 1);
        gridLayout_13->setColumnStretch(1, 2);
        gridLayout_13->setColumnStretch(2, 1);
        gridLayout_13->setColumnStretch(3, 1);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_14->addWidget(scrollArea_2, 0, 0, 1, 1);

        scrollArea = new QScrollArea(monitor);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1730, 626));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setSpacing(5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(5, 5, 5, 5);
        groupBox_11 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        sizePolicy.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy);
        groupBox_11->setFont(font);
        groupBox_11->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_11->setAlignment(Qt::AlignCenter);
        groupBox_11->setFlat(true);
        gridLayout_17 = new QGridLayout(groupBox_11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label_17 = new QLabel(groupBox_11);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_17, 0, 0, 1, 1);

        BAT_PARAMETER = new QLCDNumber(groupBox_11);
        BAT_PARAMETER->setObjectName(QString::fromUtf8("BAT_PARAMETER"));
        sizePolicy.setHeightForWidth(BAT_PARAMETER->sizePolicy().hasHeightForWidth());
        BAT_PARAMETER->setSizePolicy(sizePolicy);
        BAT_PARAMETER->setMinimumSize(QSize(75, 25));
        BAT_PARAMETER->setFont(font1);
        BAT_PARAMETER->setDigitCount(7);
        BAT_PARAMETER->setMode(QLCDNumber::Dec);
        BAT_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_PARAMETER, 0, 1, 1, 1);

        label_16 = new QLabel(groupBox_11);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_16, 0, 3, 1, 1);

        BAT_VOLTAGE = new QLCDNumber(groupBox_11);
        BAT_VOLTAGE->setObjectName(QString::fromUtf8("BAT_VOLTAGE"));
        sizePolicy.setHeightForWidth(BAT_VOLTAGE->sizePolicy().hasHeightForWidth());
        BAT_VOLTAGE->setSizePolicy(sizePolicy);
        BAT_VOLTAGE->setMinimumSize(QSize(75, 25));
        BAT_VOLTAGE->setFont(font1);
        BAT_VOLTAGE->setDigitCount(5);
        BAT_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_VOLTAGE, 0, 4, 1, 1);

        label_136 = new QLabel(groupBox_11);
        label_136->setObjectName(QString::fromUtf8("label_136"));
        sizePolicy.setHeightForWidth(label_136->sizePolicy().hasHeightForWidth());
        label_136->setSizePolicy(sizePolicy);
        label_136->setFont(font1);

        gridLayout_17->addWidget(label_136, 0, 5, 1, 1);

        label_18 = new QLabel(groupBox_11);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_18, 1, 0, 1, 1);

        BAT_CURRENT = new QLCDNumber(groupBox_11);
        BAT_CURRENT->setObjectName(QString::fromUtf8("BAT_CURRENT"));
        sizePolicy.setHeightForWidth(BAT_CURRENT->sizePolicy().hasHeightForWidth());
        BAT_CURRENT->setSizePolicy(sizePolicy);
        BAT_CURRENT->setMinimumSize(QSize(75, 25));
        BAT_CURRENT->setFont(font1);
        BAT_CURRENT->setDigitCount(5);
        BAT_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_CURRENT, 1, 1, 1, 1);

        label_137 = new QLabel(groupBox_11);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        sizePolicy.setHeightForWidth(label_137->sizePolicy().hasHeightForWidth());
        label_137->setSizePolicy(sizePolicy);
        label_137->setFont(font1);

        gridLayout_17->addWidget(label_137, 1, 2, 1, 1);

        label_22 = new QLabel(groupBox_11);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_22, 1, 3, 1, 1);

        BAT_POWER = new QLCDNumber(groupBox_11);
        BAT_POWER->setObjectName(QString::fromUtf8("BAT_POWER"));
        sizePolicy.setHeightForWidth(BAT_POWER->sizePolicy().hasHeightForWidth());
        BAT_POWER->setSizePolicy(sizePolicy);
        BAT_POWER->setMinimumSize(QSize(75, 25));
        BAT_POWER->setFont(font1);
        BAT_POWER->setDigitCount(5);
        BAT_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_POWER, 1, 4, 1, 1);

        label_138 = new QLabel(groupBox_11);
        label_138->setObjectName(QString::fromUtf8("label_138"));
        sizePolicy.setHeightForWidth(label_138->sizePolicy().hasHeightForWidth());
        label_138->setSizePolicy(sizePolicy);
        label_138->setFont(font1);

        gridLayout_17->addWidget(label_138, 1, 5, 1, 1);

        label_23 = new QLabel(groupBox_11);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_23, 2, 0, 1, 1);

        BAT_MaxCellVol = new QLCDNumber(groupBox_11);
        BAT_MaxCellVol->setObjectName(QString::fromUtf8("BAT_MaxCellVol"));
        sizePolicy.setHeightForWidth(BAT_MaxCellVol->sizePolicy().hasHeightForWidth());
        BAT_MaxCellVol->setSizePolicy(sizePolicy);
        BAT_MaxCellVol->setMinimumSize(QSize(75, 25));
        BAT_MaxCellVol->setFont(font1);
        BAT_MaxCellVol->setDigitCount(5);
        BAT_MaxCellVol->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_MaxCellVol, 2, 1, 1, 1);

        label_139 = new QLabel(groupBox_11);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        sizePolicy.setHeightForWidth(label_139->sizePolicy().hasHeightForWidth());
        label_139->setSizePolicy(sizePolicy);
        label_139->setFont(font1);

        gridLayout_17->addWidget(label_139, 2, 2, 1, 1);

        label_24 = new QLabel(groupBox_11);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);
        label_24->setFont(font1);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_24, 2, 3, 1, 1);

        BAT_MinCellVol = new QLCDNumber(groupBox_11);
        BAT_MinCellVol->setObjectName(QString::fromUtf8("BAT_MinCellVol"));
        sizePolicy.setHeightForWidth(BAT_MinCellVol->sizePolicy().hasHeightForWidth());
        BAT_MinCellVol->setSizePolicy(sizePolicy);
        BAT_MinCellVol->setMinimumSize(QSize(75, 25));
        BAT_MinCellVol->setFont(font1);
        BAT_MinCellVol->setDigitCount(5);
        BAT_MinCellVol->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_MinCellVol, 2, 4, 1, 1);

        label_140 = new QLabel(groupBox_11);
        label_140->setObjectName(QString::fromUtf8("label_140"));
        sizePolicy.setHeightForWidth(label_140->sizePolicy().hasHeightForWidth());
        label_140->setSizePolicy(sizePolicy);
        label_140->setFont(font1);

        gridLayout_17->addWidget(label_140, 2, 5, 1, 1);

        label_131 = new QLabel(groupBox_11);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        sizePolicy.setHeightForWidth(label_131->sizePolicy().hasHeightForWidth());
        label_131->setSizePolicy(sizePolicy);
        label_131->setFont(font1);
        label_131->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_131, 3, 0, 1, 1);

        BAT_MaxCellTemp = new QLCDNumber(groupBox_11);
        BAT_MaxCellTemp->setObjectName(QString::fromUtf8("BAT_MaxCellTemp"));
        sizePolicy.setHeightForWidth(BAT_MaxCellTemp->sizePolicy().hasHeightForWidth());
        BAT_MaxCellTemp->setSizePolicy(sizePolicy);
        BAT_MaxCellTemp->setMinimumSize(QSize(75, 25));
        BAT_MaxCellTemp->setFont(font1);
        BAT_MaxCellTemp->setDigitCount(5);
        BAT_MaxCellTemp->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_MaxCellTemp, 3, 1, 1, 1);

        label_141 = new QLabel(groupBox_11);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        sizePolicy.setHeightForWidth(label_141->sizePolicy().hasHeightForWidth());
        label_141->setSizePolicy(sizePolicy);
        label_141->setFont(font1);

        gridLayout_17->addWidget(label_141, 3, 2, 1, 1);

        label_132 = new QLabel(groupBox_11);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        sizePolicy.setHeightForWidth(label_132->sizePolicy().hasHeightForWidth());
        label_132->setSizePolicy(sizePolicy);
        label_132->setFont(font1);
        label_132->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_132, 3, 3, 1, 1);

        BAT_MinCellTemp = new QLCDNumber(groupBox_11);
        BAT_MinCellTemp->setObjectName(QString::fromUtf8("BAT_MinCellTemp"));
        sizePolicy.setHeightForWidth(BAT_MinCellTemp->sizePolicy().hasHeightForWidth());
        BAT_MinCellTemp->setSizePolicy(sizePolicy);
        BAT_MinCellTemp->setMinimumSize(QSize(75, 25));
        BAT_MinCellTemp->setFont(font1);
        BAT_MinCellTemp->setDigitCount(5);
        BAT_MinCellTemp->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_MinCellTemp, 3, 4, 1, 1);

        label_142 = new QLabel(groupBox_11);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        sizePolicy.setHeightForWidth(label_142->sizePolicy().hasHeightForWidth());
        label_142->setSizePolicy(sizePolicy);
        label_142->setFont(font1);

        gridLayout_17->addWidget(label_142, 3, 5, 1, 1);

        label_134 = new QLabel(groupBox_11);
        label_134->setObjectName(QString::fromUtf8("label_134"));
        sizePolicy.setHeightForWidth(label_134->sizePolicy().hasHeightForWidth());
        label_134->setSizePolicy(sizePolicy);
        label_134->setFont(font1);
        label_134->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_134, 4, 0, 1, 1);

        BAT_SOC = new QLCDNumber(groupBox_11);
        BAT_SOC->setObjectName(QString::fromUtf8("BAT_SOC"));
        sizePolicy.setHeightForWidth(BAT_SOC->sizePolicy().hasHeightForWidth());
        BAT_SOC->setSizePolicy(sizePolicy);
        BAT_SOC->setMinimumSize(QSize(75, 25));
        BAT_SOC->setFont(font1);
        BAT_SOC->setDigitCount(5);
        BAT_SOC->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_SOC, 4, 1, 1, 1);

        label_143 = new QLabel(groupBox_11);
        label_143->setObjectName(QString::fromUtf8("label_143"));
        sizePolicy.setHeightForWidth(label_143->sizePolicy().hasHeightForWidth());
        label_143->setSizePolicy(sizePolicy);
        label_143->setFont(font1);

        gridLayout_17->addWidget(label_143, 4, 2, 1, 1);

        label_25 = new QLabel(groupBox_11);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);
        label_25->setFont(font1);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_25, 4, 3, 1, 1);

        BAT_LIFE = new QLCDNumber(groupBox_11);
        BAT_LIFE->setObjectName(QString::fromUtf8("BAT_LIFE"));
        sizePolicy.setHeightForWidth(BAT_LIFE->sizePolicy().hasHeightForWidth());
        BAT_LIFE->setSizePolicy(sizePolicy);
        BAT_LIFE->setMinimumSize(QSize(75, 25));
        BAT_LIFE->setFont(font1);
        BAT_LIFE->setDigitCount(5);
        BAT_LIFE->setMode(QLCDNumber::Dec);
        BAT_LIFE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_LIFE, 4, 4, 1, 1);

        label_135 = new QLabel(groupBox_11);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        sizePolicy.setHeightForWidth(label_135->sizePolicy().hasHeightForWidth());
        label_135->setSizePolicy(sizePolicy);
        label_135->setFont(font1);
        label_135->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_135, 5, 0, 1, 1);

        BAT_EN = new QLCDNumber(groupBox_11);
        BAT_EN->setObjectName(QString::fromUtf8("BAT_EN"));
        sizePolicy.setHeightForWidth(BAT_EN->sizePolicy().hasHeightForWidth());
        BAT_EN->setSizePolicy(sizePolicy);
        BAT_EN->setMinimumSize(QSize(75, 25));
        BAT_EN->setFont(font1);
        BAT_EN->setDigitCount(5);
        BAT_EN->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_EN, 5, 1, 1, 1);

        label_133 = new QLabel(groupBox_11);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        sizePolicy.setHeightForWidth(label_133->sizePolicy().hasHeightForWidth());
        label_133->setSizePolicy(sizePolicy);
        label_133->setFont(font1);
        label_133->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_133, 5, 3, 1, 1);

        BAT_STATE = new QLCDNumber(groupBox_11);
        BAT_STATE->setObjectName(QString::fromUtf8("BAT_STATE"));
        sizePolicy.setHeightForWidth(BAT_STATE->sizePolicy().hasHeightForWidth());
        BAT_STATE->setSizePolicy(sizePolicy);
        BAT_STATE->setMinimumSize(QSize(75, 25));
        BAT_STATE->setFont(font1);
        BAT_STATE->setDigitCount(5);
        BAT_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_17->addWidget(BAT_STATE, 5, 4, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        BAT_MOS = new QLabel(groupBox_11);
        BAT_MOS->setObjectName(QString::fromUtf8("BAT_MOS"));
        BAT_MOS->setMinimumSize(QSize(75, 25));
        BAT_MOS->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_MOS->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_MOS, 0, 1, 1, 1);

        BAT_LOW_SOC = new QLabel(groupBox_11);
        BAT_LOW_SOC->setObjectName(QString::fromUtf8("BAT_LOW_SOC"));
        BAT_LOW_SOC->setMinimumSize(QSize(75, 25));
        BAT_LOW_SOC->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_LOW_SOC->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_LOW_SOC, 3, 1, 1, 1);

        BAT_BATTERY_CONSISTENT = new QLabel(groupBox_11);
        BAT_BATTERY_CONSISTENT->setObjectName(QString::fromUtf8("BAT_BATTERY_CONSISTENT"));
        BAT_BATTERY_CONSISTENT->setMinimumSize(QSize(75, 25));
        BAT_BATTERY_CONSISTENT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_BATTERY_CONSISTENT->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_BATTERY_CONSISTENT, 2, 1, 1, 1);

        BAT_WORK = new QLabel(groupBox_11);
        BAT_WORK->setObjectName(QString::fromUtf8("BAT_WORK"));
        BAT_WORK->setMinimumSize(QSize(75, 25));
        BAT_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_WORK->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_WORK, 0, 2, 1, 1);

        BAT_OVER_VOLTAGE = new QLabel(groupBox_11);
        BAT_OVER_VOLTAGE->setObjectName(QString::fromUtf8("BAT_OVER_VOLTAGE"));
        BAT_OVER_VOLTAGE->setMinimumSize(QSize(75, 25));
        BAT_OVER_VOLTAGE->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_OVER_VOLTAGE->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_OVER_VOLTAGE, 2, 2, 1, 1);

        label_187 = new QLabel(groupBox_11);
        label_187->setObjectName(QString::fromUtf8("label_187"));
        sizePolicy.setHeightForWidth(label_187->sizePolicy().hasHeightForWidth());
        label_187->setSizePolicy(sizePolicy);
        label_187->setFont(font1);
        label_187->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_187, 0, 0, 1, 1);

        BAT_OVER_CURRENT = new QLabel(groupBox_11);
        BAT_OVER_CURRENT->setObjectName(QString::fromUtf8("BAT_OVER_CURRENT"));
        BAT_OVER_CURRENT->setMinimumSize(QSize(75, 25));
        BAT_OVER_CURRENT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_OVER_CURRENT->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_OVER_CURRENT, 3, 2, 1, 1);

        BAT_OVER_TEMP = new QLabel(groupBox_11);
        BAT_OVER_TEMP->setObjectName(QString::fromUtf8("BAT_OVER_TEMP"));
        BAT_OVER_TEMP->setMinimumSize(QSize(75, 25));
        BAT_OVER_TEMP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_OVER_TEMP->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_OVER_TEMP, 4, 1, 1, 1);

        BAT_SOC_MATCH = new QLabel(groupBox_11);
        BAT_SOC_MATCH->setObjectName(QString::fromUtf8("BAT_SOC_MATCH"));
        BAT_SOC_MATCH->setMinimumSize(QSize(75, 25));
        BAT_SOC_MATCH->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        BAT_SOC_MATCH->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BAT_SOC_MATCH, 4, 2, 1, 1);

        label_188 = new QLabel(groupBox_11);
        label_188->setObjectName(QString::fromUtf8("label_188"));
        sizePolicy.setHeightForWidth(label_188->sizePolicy().hasHeightForWidth());
        label_188->setSizePolicy(sizePolicy);
        label_188->setFont(font1);
        label_188->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_188, 2, 0, 1, 1);


        gridLayout_17->addLayout(gridLayout_9, 6, 0, 1, 5);


        gridLayout_8->addWidget(groupBox_11, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        groupBox_7->setFont(font);
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_7->setAlignment(Qt::AlignCenter);
        groupBox_7->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox_7);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_47 = new QLabel(groupBox_7);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        sizePolicy.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy);
        label_47->setFont(font1);
        label_47->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_47, 0, 0, 1, 1);

        DCF_PARAMETER = new QLCDNumber(groupBox_7);
        DCF_PARAMETER->setObjectName(QString::fromUtf8("DCF_PARAMETER"));
        sizePolicy.setHeightForWidth(DCF_PARAMETER->sizePolicy().hasHeightForWidth());
        DCF_PARAMETER->setSizePolicy(sizePolicy);
        DCF_PARAMETER->setMinimumSize(QSize(75, 25));
        DCF_PARAMETER->setFont(font1);
        DCF_PARAMETER->setDigitCount(5);
        DCF_PARAMETER->setMode(QLCDNumber::Dec);
        DCF_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_PARAMETER, 0, 1, 1, 1);

        label_48 = new QLabel(groupBox_7);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        sizePolicy.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy);
        label_48->setFont(font1);
        label_48->setAutoFillBackground(false);
        label_48->setScaledContents(false);
        label_48->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_48, 0, 3, 1, 1);

        DCF_IN_VOLTAGE = new QLCDNumber(groupBox_7);
        DCF_IN_VOLTAGE->setObjectName(QString::fromUtf8("DCF_IN_VOLTAGE"));
        sizePolicy.setHeightForWidth(DCF_IN_VOLTAGE->sizePolicy().hasHeightForWidth());
        DCF_IN_VOLTAGE->setSizePolicy(sizePolicy);
        DCF_IN_VOLTAGE->setMinimumSize(QSize(75, 25));
        DCF_IN_VOLTAGE->setFont(font1);
        DCF_IN_VOLTAGE->setDigitCount(5);
        DCF_IN_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_IN_VOLTAGE, 0, 4, 1, 1);

        label_81 = new QLabel(groupBox_7);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        sizePolicy.setHeightForWidth(label_81->sizePolicy().hasHeightForWidth());
        label_81->setSizePolicy(sizePolicy);
        label_81->setFont(font1);

        gridLayout_2->addWidget(label_81, 0, 5, 1, 1);

        label_49 = new QLabel(groupBox_7);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        sizePolicy.setHeightForWidth(label_49->sizePolicy().hasHeightForWidth());
        label_49->setSizePolicy(sizePolicy);
        label_49->setFont(font1);
        label_49->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_49, 1, 0, 1, 1);

        DCF_IN_CURRENT = new QLCDNumber(groupBox_7);
        DCF_IN_CURRENT->setObjectName(QString::fromUtf8("DCF_IN_CURRENT"));
        sizePolicy.setHeightForWidth(DCF_IN_CURRENT->sizePolicy().hasHeightForWidth());
        DCF_IN_CURRENT->setSizePolicy(sizePolicy);
        DCF_IN_CURRENT->setMinimumSize(QSize(75, 25));
        DCF_IN_CURRENT->setFont(font1);
        DCF_IN_CURRENT->setDigitCount(5);
        DCF_IN_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_IN_CURRENT, 1, 1, 1, 1);

        label_82 = new QLabel(groupBox_7);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        sizePolicy.setHeightForWidth(label_82->sizePolicy().hasHeightForWidth());
        label_82->setSizePolicy(sizePolicy);
        label_82->setFont(font1);

        gridLayout_2->addWidget(label_82, 1, 2, 1, 1);

        label_50 = new QLabel(groupBox_7);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        sizePolicy.setHeightForWidth(label_50->sizePolicy().hasHeightForWidth());
        label_50->setSizePolicy(sizePolicy);
        label_50->setFont(font1);
        label_50->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_50, 1, 3, 1, 1);

        DCF_IN_POWER = new QLCDNumber(groupBox_7);
        DCF_IN_POWER->setObjectName(QString::fromUtf8("DCF_IN_POWER"));
        sizePolicy.setHeightForWidth(DCF_IN_POWER->sizePolicy().hasHeightForWidth());
        DCF_IN_POWER->setSizePolicy(sizePolicy);
        DCF_IN_POWER->setMinimumSize(QSize(75, 25));
        DCF_IN_POWER->setFont(font1);
        DCF_IN_POWER->setDigitCount(5);
        DCF_IN_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_IN_POWER, 1, 4, 1, 1);

        label_83 = new QLabel(groupBox_7);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        sizePolicy.setHeightForWidth(label_83->sizePolicy().hasHeightForWidth());
        label_83->setSizePolicy(sizePolicy);
        label_83->setFont(font1);

        gridLayout_2->addWidget(label_83, 1, 5, 1, 1);

        label_52 = new QLabel(groupBox_7);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        sizePolicy.setHeightForWidth(label_52->sizePolicy().hasHeightForWidth());
        label_52->setSizePolicy(sizePolicy);
        label_52->setFont(font1);
        label_52->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_52, 2, 0, 1, 1);

        DCF_OUT_VOLTAGE = new QLCDNumber(groupBox_7);
        DCF_OUT_VOLTAGE->setObjectName(QString::fromUtf8("DCF_OUT_VOLTAGE"));
        sizePolicy.setHeightForWidth(DCF_OUT_VOLTAGE->sizePolicy().hasHeightForWidth());
        DCF_OUT_VOLTAGE->setSizePolicy(sizePolicy);
        DCF_OUT_VOLTAGE->setMinimumSize(QSize(75, 25));
        DCF_OUT_VOLTAGE->setFont(font1);
        DCF_OUT_VOLTAGE->setDigitCount(5);
        DCF_OUT_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_OUT_VOLTAGE, 2, 1, 1, 1);

        label_85 = new QLabel(groupBox_7);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        sizePolicy.setHeightForWidth(label_85->sizePolicy().hasHeightForWidth());
        label_85->setSizePolicy(sizePolicy);
        label_85->setFont(font1);

        gridLayout_2->addWidget(label_85, 2, 2, 1, 1);

        label_53 = new QLabel(groupBox_7);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        sizePolicy.setHeightForWidth(label_53->sizePolicy().hasHeightForWidth());
        label_53->setSizePolicy(sizePolicy);
        label_53->setFont(font1);
        label_53->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_53, 2, 3, 1, 1);

        DCF_OUT_CURRENT = new QLCDNumber(groupBox_7);
        DCF_OUT_CURRENT->setObjectName(QString::fromUtf8("DCF_OUT_CURRENT"));
        sizePolicy.setHeightForWidth(DCF_OUT_CURRENT->sizePolicy().hasHeightForWidth());
        DCF_OUT_CURRENT->setSizePolicy(sizePolicy);
        DCF_OUT_CURRENT->setMinimumSize(QSize(75, 25));
        DCF_OUT_CURRENT->setFont(font1);
        DCF_OUT_CURRENT->setDigitCount(5);
        DCF_OUT_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_OUT_CURRENT, 2, 4, 1, 1);

        label_86 = new QLabel(groupBox_7);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        sizePolicy.setHeightForWidth(label_86->sizePolicy().hasHeightForWidth());
        label_86->setSizePolicy(sizePolicy);
        label_86->setFont(font1);

        gridLayout_2->addWidget(label_86, 2, 5, 1, 1);

        label_54 = new QLabel(groupBox_7);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        sizePolicy.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy);
        label_54->setFont(font1);
        label_54->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_54, 3, 0, 1, 1);

        DCF_OUT_POWER = new QLCDNumber(groupBox_7);
        DCF_OUT_POWER->setObjectName(QString::fromUtf8("DCF_OUT_POWER"));
        sizePolicy.setHeightForWidth(DCF_OUT_POWER->sizePolicy().hasHeightForWidth());
        DCF_OUT_POWER->setSizePolicy(sizePolicy);
        DCF_OUT_POWER->setMinimumSize(QSize(75, 25));
        DCF_OUT_POWER->setFont(font1);
        DCF_OUT_POWER->setDigitCount(5);
        DCF_OUT_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_OUT_POWER, 3, 1, 1, 1);

        label_87 = new QLabel(groupBox_7);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        sizePolicy.setHeightForWidth(label_87->sizePolicy().hasHeightForWidth());
        label_87->setSizePolicy(sizePolicy);
        label_87->setFont(font1);

        gridLayout_2->addWidget(label_87, 3, 2, 1, 1);

        label_55 = new QLabel(groupBox_7);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        sizePolicy.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy);
        label_55->setFont(font1);
        label_55->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_55, 3, 3, 1, 1);

        DCF_OVOL = new QLCDNumber(groupBox_7);
        DCF_OVOL->setObjectName(QString::fromUtf8("DCF_OVOL"));
        sizePolicy.setHeightForWidth(DCF_OVOL->sizePolicy().hasHeightForWidth());
        DCF_OVOL->setSizePolicy(sizePolicy);
        DCF_OVOL->setMinimumSize(QSize(75, 25));
        DCF_OVOL->setFont(font1);
        DCF_OVOL->setDigitCount(5);
        DCF_OVOL->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_OVOL, 3, 4, 1, 1);

        label_88 = new QLabel(groupBox_7);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        sizePolicy.setHeightForWidth(label_88->sizePolicy().hasHeightForWidth());
        label_88->setSizePolicy(sizePolicy);
        label_88->setFont(font1);

        gridLayout_2->addWidget(label_88, 3, 5, 1, 1);

        label_61 = new QLabel(groupBox_7);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        sizePolicy.setHeightForWidth(label_61->sizePolicy().hasHeightForWidth());
        label_61->setSizePolicy(sizePolicy);
        label_61->setFont(font1);
        label_61->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_61, 4, 0, 1, 1);

        DCF_UVOL = new QLCDNumber(groupBox_7);
        DCF_UVOL->setObjectName(QString::fromUtf8("DCF_UVOL"));
        sizePolicy.setHeightForWidth(DCF_UVOL->sizePolicy().hasHeightForWidth());
        DCF_UVOL->setSizePolicy(sizePolicy);
        DCF_UVOL->setMinimumSize(QSize(75, 25));
        DCF_UVOL->setFont(font1);
        DCF_UVOL->setDigitCount(5);
        DCF_UVOL->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_UVOL, 4, 1, 1, 1);

        label_89 = new QLabel(groupBox_7);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        sizePolicy.setHeightForWidth(label_89->sizePolicy().hasHeightForWidth());
        label_89->setSizePolicy(sizePolicy);
        label_89->setFont(font1);

        gridLayout_2->addWidget(label_89, 4, 2, 1, 1);

        label_56 = new QLabel(groupBox_7);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        sizePolicy.setHeightForWidth(label_56->sizePolicy().hasHeightForWidth());
        label_56->setSizePolicy(sizePolicy);
        label_56->setFont(font1);
        label_56->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_56, 4, 3, 1, 1);

        DCF_TEMP = new QLCDNumber(groupBox_7);
        DCF_TEMP->setObjectName(QString::fromUtf8("DCF_TEMP"));
        sizePolicy.setHeightForWidth(DCF_TEMP->sizePolicy().hasHeightForWidth());
        DCF_TEMP->setSizePolicy(sizePolicy);
        DCF_TEMP->setMinimumSize(QSize(75, 25));
        DCF_TEMP->setFont(font1);
        DCF_TEMP->setDigitCount(5);
        DCF_TEMP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_TEMP, 4, 4, 1, 1);

        label_90 = new QLabel(groupBox_7);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        sizePolicy.setHeightForWidth(label_90->sizePolicy().hasHeightForWidth());
        label_90->setSizePolicy(sizePolicy);
        label_90->setFont(font1);

        gridLayout_2->addWidget(label_90, 4, 5, 1, 1);

        label_57 = new QLabel(groupBox_7);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        sizePolicy.setHeightForWidth(label_57->sizePolicy().hasHeightForWidth());
        label_57->setSizePolicy(sizePolicy);
        label_57->setFont(font1);
        label_57->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_57, 5, 0, 1, 1);

        DCF_SET_VOLTAGE = new QLCDNumber(groupBox_7);
        DCF_SET_VOLTAGE->setObjectName(QString::fromUtf8("DCF_SET_VOLTAGE"));
        sizePolicy.setHeightForWidth(DCF_SET_VOLTAGE->sizePolicy().hasHeightForWidth());
        DCF_SET_VOLTAGE->setSizePolicy(sizePolicy);
        DCF_SET_VOLTAGE->setMinimumSize(QSize(75, 25));
        DCF_SET_VOLTAGE->setFont(font1);
        DCF_SET_VOLTAGE->setDigitCount(5);
        DCF_SET_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_SET_VOLTAGE, 5, 1, 1, 1);

        label_91 = new QLabel(groupBox_7);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        sizePolicy.setHeightForWidth(label_91->sizePolicy().hasHeightForWidth());
        label_91->setSizePolicy(sizePolicy);
        label_91->setFont(font1);

        gridLayout_2->addWidget(label_91, 5, 2, 1, 1);

        label_58 = new QLabel(groupBox_7);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        sizePolicy.setHeightForWidth(label_58->sizePolicy().hasHeightForWidth());
        label_58->setSizePolicy(sizePolicy);
        label_58->setFont(font1);
        label_58->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_58, 5, 3, 1, 1);

        DCF_SET_CURRENT = new QLCDNumber(groupBox_7);
        DCF_SET_CURRENT->setObjectName(QString::fromUtf8("DCF_SET_CURRENT"));
        sizePolicy.setHeightForWidth(DCF_SET_CURRENT->sizePolicy().hasHeightForWidth());
        DCF_SET_CURRENT->setSizePolicy(sizePolicy);
        DCF_SET_CURRENT->setMinimumSize(QSize(75, 25));
        DCF_SET_CURRENT->setFont(font1);
        DCF_SET_CURRENT->setDigitCount(5);
        DCF_SET_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_SET_CURRENT, 5, 4, 1, 1);

        label_92 = new QLabel(groupBox_7);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        sizePolicy.setHeightForWidth(label_92->sizePolicy().hasHeightForWidth());
        label_92->setSizePolicy(sizePolicy);
        label_92->setFont(font1);

        gridLayout_2->addWidget(label_92, 5, 5, 1, 1);

        label_59 = new QLabel(groupBox_7);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        sizePolicy.setHeightForWidth(label_59->sizePolicy().hasHeightForWidth());
        label_59->setSizePolicy(sizePolicy);
        label_59->setFont(font1);
        label_59->setStyleSheet(QString::fromUtf8(""));
        label_59->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_59, 6, 0, 1, 1);

        DCF_SET_CURRENT_SLOPE = new QLCDNumber(groupBox_7);
        DCF_SET_CURRENT_SLOPE->setObjectName(QString::fromUtf8("DCF_SET_CURRENT_SLOPE"));
        sizePolicy.setHeightForWidth(DCF_SET_CURRENT_SLOPE->sizePolicy().hasHeightForWidth());
        DCF_SET_CURRENT_SLOPE->setSizePolicy(sizePolicy);
        DCF_SET_CURRENT_SLOPE->setMinimumSize(QSize(75, 25));
        DCF_SET_CURRENT_SLOPE->setFont(font1);
        DCF_SET_CURRENT_SLOPE->setDigitCount(5);
        DCF_SET_CURRENT_SLOPE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_SET_CURRENT_SLOPE, 6, 1, 1, 1);

        label_93 = new QLabel(groupBox_7);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        sizePolicy.setHeightForWidth(label_93->sizePolicy().hasHeightForWidth());
        label_93->setSizePolicy(sizePolicy);
        label_93->setFont(font1);

        gridLayout_2->addWidget(label_93, 6, 2, 1, 1);

        label_51 = new QLabel(groupBox_7);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        sizePolicy.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy);
        label_51->setFont(font1);
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_51, 6, 3, 1, 1);

        DCF_LIFE = new QLCDNumber(groupBox_7);
        DCF_LIFE->setObjectName(QString::fromUtf8("DCF_LIFE"));
        sizePolicy.setHeightForWidth(DCF_LIFE->sizePolicy().hasHeightForWidth());
        DCF_LIFE->setSizePolicy(sizePolicy);
        DCF_LIFE->setMinimumSize(QSize(75, 25));
        DCF_LIFE->setFont(font1);
        DCF_LIFE->setDigitCount(5);
        DCF_LIFE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_LIFE, 6, 4, 1, 1);

        label_60 = new QLabel(groupBox_7);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        sizePolicy.setHeightForWidth(label_60->sizePolicy().hasHeightForWidth());
        label_60->setSizePolicy(sizePolicy);
        label_60->setFont(font1);
        label_60->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_60, 7, 0, 1, 1);

        DCF_EN = new QLCDNumber(groupBox_7);
        DCF_EN->setObjectName(QString::fromUtf8("DCF_EN"));
        sizePolicy.setHeightForWidth(DCF_EN->sizePolicy().hasHeightForWidth());
        DCF_EN->setSizePolicy(sizePolicy);
        DCF_EN->setMinimumSize(QSize(75, 25));
        DCF_EN->setFont(font1);
        DCF_EN->setDigitCount(5);
        DCF_EN->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_EN, 7, 1, 1, 1);

        label_62 = new QLabel(groupBox_7);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        sizePolicy.setHeightForWidth(label_62->sizePolicy().hasHeightForWidth());
        label_62->setSizePolicy(sizePolicy);
        label_62->setFont(font1);
        label_62->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_62, 7, 3, 1, 1);

        DCF_STATE = new QLCDNumber(groupBox_7);
        DCF_STATE->setObjectName(QString::fromUtf8("DCF_STATE"));
        sizePolicy.setHeightForWidth(DCF_STATE->sizePolicy().hasHeightForWidth());
        DCF_STATE->setSizePolicy(sizePolicy);
        DCF_STATE->setMinimumSize(QSize(75, 25));
        DCF_STATE->setFont(font1);
        DCF_STATE->setDigitCount(5);
        DCF_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(DCF_STATE, 7, 4, 1, 1);

        label_192 = new QLabel(groupBox_7);
        label_192->setObjectName(QString::fromUtf8("label_192"));
        sizePolicy.setHeightForWidth(label_192->sizePolicy().hasHeightForWidth());
        label_192->setSizePolicy(sizePolicy);
        label_192->setFont(font1);
        label_192->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_192, 8, 0, 1, 1);

        DCF_WORK = new QLabel(groupBox_7);
        DCF_WORK->setObjectName(QString::fromUtf8("DCF_WORK"));
        DCF_WORK->setMinimumSize(QSize(75, 25));
        DCF_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        DCF_WORK->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(DCF_WORK, 8, 1, 1, 1);

        label_191 = new QLabel(groupBox_7);
        label_191->setObjectName(QString::fromUtf8("label_191"));
        sizePolicy.setHeightForWidth(label_191->sizePolicy().hasHeightForWidth());
        label_191->setSizePolicy(sizePolicy);
        label_191->setFont(font1);
        label_191->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_191, 8, 3, 1, 1);

        DCF_FAULT = new QLabel(groupBox_7);
        DCF_FAULT->setObjectName(QString::fromUtf8("DCF_FAULT"));
        DCF_FAULT->setMinimumSize(QSize(75, 25));
        DCF_FAULT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        DCF_FAULT->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(DCF_FAULT, 8, 4, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 2, 2, 1);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        groupBox_9->setFont(font);
        groupBox_9->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_9->setAlignment(Qt::AlignCenter);
        groupBox_9->setFlat(true);
        gridLayout = new QGridLayout(groupBox_9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TK1_HP = new QLCDNumber(groupBox_9);
        TK1_HP->setObjectName(QString::fromUtf8("TK1_HP"));
        sizePolicy.setHeightForWidth(TK1_HP->sizePolicy().hasHeightForWidth());
        TK1_HP->setSizePolicy(sizePolicy);
        TK1_HP->setMinimumSize(QSize(75, 25));
        TK1_HP->setFont(font1);
        TK1_HP->setDigitCount(5);
        TK1_HP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(TK1_HP, 1, 4, 1, 1);

        label_113 = new QLabel(groupBox_9);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        sizePolicy.setHeightForWidth(label_113->sizePolicy().hasHeightForWidth());
        label_113->setSizePolicy(sizePolicy);
        label_113->setFont(font1);
        label_113->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_113, 1, 0, 1, 1);

        label_112 = new QLabel(groupBox_9);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        sizePolicy.setHeightForWidth(label_112->sizePolicy().hasHeightForWidth());
        label_112->setSizePolicy(sizePolicy);
        label_112->setFont(font1);
        label_112->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_112, 1, 3, 1, 1);

        TK1_MP = new QLCDNumber(groupBox_9);
        TK1_MP->setObjectName(QString::fromUtf8("TK1_MP"));
        sizePolicy.setHeightForWidth(TK1_MP->sizePolicy().hasHeightForWidth());
        TK1_MP->setSizePolicy(sizePolicy);
        TK1_MP->setMinimumSize(QSize(75, 25));
        TK1_MP->setFont(font1);
        TK1_MP->setDigitCount(5);
        TK1_MP->setMode(QLCDNumber::Dec);
        TK1_MP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(TK1_MP, 0, 4, 1, 1);

        label_115 = new QLabel(groupBox_9);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        sizePolicy.setHeightForWidth(label_115->sizePolicy().hasHeightForWidth());
        label_115->setSizePolicy(sizePolicy);
        label_115->setFont(font1);
        label_115->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_115, 0, 0, 1, 1);

        TK1_SOC = new QLCDNumber(groupBox_9);
        TK1_SOC->setObjectName(QString::fromUtf8("TK1_SOC"));
        sizePolicy.setHeightForWidth(TK1_SOC->sizePolicy().hasHeightForWidth());
        TK1_SOC->setSizePolicy(sizePolicy);
        TK1_SOC->setMinimumSize(QSize(75, 25));
        TK1_SOC->setFont(font1);
        TK1_SOC->setDigitCount(5);
        TK1_SOC->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(TK1_SOC, 1, 1, 1, 1);

        label_118 = new QLabel(groupBox_9);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        sizePolicy.setHeightForWidth(label_118->sizePolicy().hasHeightForWidth());
        label_118->setSizePolicy(sizePolicy);
        label_118->setFont(font1);

        gridLayout->addWidget(label_118, 1, 5, 1, 1);

        label_116 = new QLabel(groupBox_9);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        sizePolicy.setHeightForWidth(label_116->sizePolicy().hasHeightForWidth());
        label_116->setSizePolicy(sizePolicy);
        label_116->setFont(font1);
        label_116->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_116, 2, 3, 1, 1);

        TK1_TEMP = new QLCDNumber(groupBox_9);
        TK1_TEMP->setObjectName(QString::fromUtf8("TK1_TEMP"));
        sizePolicy.setHeightForWidth(TK1_TEMP->sizePolicy().hasHeightForWidth());
        TK1_TEMP->setSizePolicy(sizePolicy);
        TK1_TEMP->setMinimumSize(QSize(75, 25));
        TK1_TEMP->setFont(font1);
        TK1_TEMP->setDigitCount(5);
        TK1_TEMP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(TK1_TEMP, 2, 1, 1, 1);

        label_119 = new QLabel(groupBox_9);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        sizePolicy.setHeightForWidth(label_119->sizePolicy().hasHeightForWidth());
        label_119->setSizePolicy(sizePolicy);
        label_119->setFont(font1);

        gridLayout->addWidget(label_119, 1, 2, 1, 1);

        label_117 = new QLabel(groupBox_9);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        sizePolicy.setHeightForWidth(label_117->sizePolicy().hasHeightForWidth());
        label_117->setSizePolicy(sizePolicy);
        label_117->setFont(font1);

        gridLayout->addWidget(label_117, 0, 5, 1, 1);

        label_111 = new QLabel(groupBox_9);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setFont(font1);
        label_111->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_111, 0, 3, 1, 1);

        label_120 = new QLabel(groupBox_9);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        sizePolicy.setHeightForWidth(label_120->sizePolicy().hasHeightForWidth());
        label_120->setSizePolicy(sizePolicy);
        label_120->setFont(font1);

        gridLayout->addWidget(label_120, 2, 2, 1, 1);

        TK1_PARAMETER = new QLCDNumber(groupBox_9);
        TK1_PARAMETER->setObjectName(QString::fromUtf8("TK1_PARAMETER"));
        sizePolicy.setHeightForWidth(TK1_PARAMETER->sizePolicy().hasHeightForWidth());
        TK1_PARAMETER->setSizePolicy(sizePolicy);
        TK1_PARAMETER->setMinimumSize(QSize(75, 25));
        TK1_PARAMETER->setFont(font1);
        TK1_PARAMETER->setDigitCount(5);
        TK1_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(TK1_PARAMETER, 0, 1, 1, 1);

        label_114 = new QLabel(groupBox_9);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        sizePolicy.setHeightForWidth(label_114->sizePolicy().hasHeightForWidth());
        label_114->setSizePolicy(sizePolicy);
        label_114->setFont(font1);
        label_114->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_114, 2, 0, 1, 1);

        TK1_STATE = new QLCDNumber(groupBox_9);
        TK1_STATE->setObjectName(QString::fromUtf8("TK1_STATE"));
        sizePolicy.setHeightForWidth(TK1_STATE->sizePolicy().hasHeightForWidth());
        TK1_STATE->setSizePolicy(sizePolicy);
        TK1_STATE->setMinimumSize(QSize(75, 25));
        TK1_STATE->setFont(font1);
        TK1_STATE->setDigitCount(5);
        TK1_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(TK1_STATE, 2, 4, 1, 1);

        label_185 = new QLabel(groupBox_9);
        label_185->setObjectName(QString::fromUtf8("label_185"));
        sizePolicy.setHeightForWidth(label_185->sizePolicy().hasHeightForWidth());
        label_185->setSizePolicy(sizePolicy);
        label_185->setFont(font1);
        label_185->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_185, 3, 0, 1, 1);

        TK1_WORK = new QLabel(groupBox_9);
        TK1_WORK->setObjectName(QString::fromUtf8("TK1_WORK"));
        TK1_WORK->setMinimumSize(QSize(75, 25));
        TK1_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        TK1_WORK->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(TK1_WORK, 3, 1, 1, 5);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 1);

        gridLayout_8->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        sizePolicy.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy);
        groupBox_10->setFont(font);
        groupBox_10->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_10->setAlignment(Qt::AlignCenter);
        groupBox_10->setFlat(true);
        gridLayout_7 = new QGridLayout(groupBox_10);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_121 = new QLabel(groupBox_10);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        sizePolicy.setHeightForWidth(label_121->sizePolicy().hasHeightForWidth());
        label_121->setSizePolicy(sizePolicy);
        label_121->setFont(font1);
        label_121->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_121, 0, 0, 1, 1);

        TK2_PARAMETER = new QLCDNumber(groupBox_10);
        TK2_PARAMETER->setObjectName(QString::fromUtf8("TK2_PARAMETER"));
        sizePolicy.setHeightForWidth(TK2_PARAMETER->sizePolicy().hasHeightForWidth());
        TK2_PARAMETER->setSizePolicy(sizePolicy);
        TK2_PARAMETER->setMinimumSize(QSize(75, 25));
        TK2_PARAMETER->setFont(font1);
        TK2_PARAMETER->setDigitCount(5);
        TK2_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(TK2_PARAMETER, 0, 2, 1, 1);

        label_127 = new QLabel(groupBox_10);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        sizePolicy.setHeightForWidth(label_127->sizePolicy().hasHeightForWidth());
        label_127->setSizePolicy(sizePolicy);
        label_127->setFont(font1);
        label_127->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_127, 0, 4, 1, 1);

        TK2_MP = new QLCDNumber(groupBox_10);
        TK2_MP->setObjectName(QString::fromUtf8("TK2_MP"));
        sizePolicy.setHeightForWidth(TK2_MP->sizePolicy().hasHeightForWidth());
        TK2_MP->setSizePolicy(sizePolicy);
        TK2_MP->setMinimumSize(QSize(75, 25));
        TK2_MP->setFont(font1);
        TK2_MP->setDigitCount(5);
        TK2_MP->setMode(QLCDNumber::Dec);
        TK2_MP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(TK2_MP, 0, 5, 1, 1);

        label_123 = new QLabel(groupBox_10);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        sizePolicy.setHeightForWidth(label_123->sizePolicy().hasHeightForWidth());
        label_123->setSizePolicy(sizePolicy);
        label_123->setFont(font1);

        gridLayout_7->addWidget(label_123, 0, 6, 1, 1);

        label_126 = new QLabel(groupBox_10);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        sizePolicy.setHeightForWidth(label_126->sizePolicy().hasHeightForWidth());
        label_126->setSizePolicy(sizePolicy);
        label_126->setFont(font1);
        label_126->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_126, 1, 0, 1, 2);

        TK2_SOC = new QLCDNumber(groupBox_10);
        TK2_SOC->setObjectName(QString::fromUtf8("TK2_SOC"));
        sizePolicy.setHeightForWidth(TK2_SOC->sizePolicy().hasHeightForWidth());
        TK2_SOC->setSizePolicy(sizePolicy);
        TK2_SOC->setMinimumSize(QSize(75, 25));
        TK2_SOC->setFont(font1);
        TK2_SOC->setDigitCount(5);
        TK2_SOC->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(TK2_SOC, 1, 2, 1, 1);

        label_129 = new QLabel(groupBox_10);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        sizePolicy.setHeightForWidth(label_129->sizePolicy().hasHeightForWidth());
        label_129->setSizePolicy(sizePolicy);
        label_129->setFont(font1);

        gridLayout_7->addWidget(label_129, 1, 3, 1, 1);

        label_128 = new QLabel(groupBox_10);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        sizePolicy.setHeightForWidth(label_128->sizePolicy().hasHeightForWidth());
        label_128->setSizePolicy(sizePolicy);
        label_128->setFont(font1);
        label_128->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_128, 1, 4, 1, 1);

        TK2_HP = new QLCDNumber(groupBox_10);
        TK2_HP->setObjectName(QString::fromUtf8("TK2_HP"));
        sizePolicy.setHeightForWidth(TK2_HP->sizePolicy().hasHeightForWidth());
        TK2_HP->setSizePolicy(sizePolicy);
        TK2_HP->setMinimumSize(QSize(75, 25));
        TK2_HP->setFont(font1);
        TK2_HP->setDigitCount(5);
        TK2_HP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(TK2_HP, 1, 5, 1, 1);

        label_124 = new QLabel(groupBox_10);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        sizePolicy.setHeightForWidth(label_124->sizePolicy().hasHeightForWidth());
        label_124->setSizePolicy(sizePolicy);
        label_124->setFont(font1);

        gridLayout_7->addWidget(label_124, 1, 6, 1, 1);

        label_125 = new QLabel(groupBox_10);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        sizePolicy.setHeightForWidth(label_125->sizePolicy().hasHeightForWidth());
        label_125->setSizePolicy(sizePolicy);
        label_125->setFont(font1);
        label_125->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_125, 2, 0, 1, 1);

        TK2_TEMP = new QLCDNumber(groupBox_10);
        TK2_TEMP->setObjectName(QString::fromUtf8("TK2_TEMP"));
        sizePolicy.setHeightForWidth(TK2_TEMP->sizePolicy().hasHeightForWidth());
        TK2_TEMP->setSizePolicy(sizePolicy);
        TK2_TEMP->setMinimumSize(QSize(75, 25));
        TK2_TEMP->setFont(font1);
        TK2_TEMP->setDigitCount(5);
        TK2_TEMP->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(TK2_TEMP, 2, 2, 1, 1);

        label_130 = new QLabel(groupBox_10);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        sizePolicy.setHeightForWidth(label_130->sizePolicy().hasHeightForWidth());
        label_130->setSizePolicy(sizePolicy);
        label_130->setFont(font1);

        gridLayout_7->addWidget(label_130, 2, 3, 1, 1);

        label_122 = new QLabel(groupBox_10);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        sizePolicy.setHeightForWidth(label_122->sizePolicy().hasHeightForWidth());
        label_122->setSizePolicy(sizePolicy);
        label_122->setFont(font1);
        label_122->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_122, 2, 4, 1, 1);

        TK2_STATE = new QLCDNumber(groupBox_10);
        TK2_STATE->setObjectName(QString::fromUtf8("TK2_STATE"));
        sizePolicy.setHeightForWidth(TK2_STATE->sizePolicy().hasHeightForWidth());
        TK2_STATE->setSizePolicy(sizePolicy);
        TK2_STATE->setMinimumSize(QSize(75, 25));
        TK2_STATE->setFont(font1);
        TK2_STATE->setDigitCount(5);
        TK2_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(TK2_STATE, 2, 5, 1, 1);

        label_186 = new QLabel(groupBox_10);
        label_186->setObjectName(QString::fromUtf8("label_186"));
        sizePolicy.setHeightForWidth(label_186->sizePolicy().hasHeightForWidth());
        label_186->setSizePolicy(sizePolicy);
        label_186->setFont(font1);
        label_186->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_186, 3, 0, 1, 1);

        TK2_WORK = new QLabel(groupBox_10);
        TK2_WORK->setObjectName(QString::fromUtf8("TK2_WORK"));
        TK2_WORK->setMinimumSize(QSize(75, 25));
        TK2_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        TK2_WORK->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(TK2_WORK, 3, 1, 1, 6);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 1);
        gridLayout_7->setColumnStretch(3, 1);
        gridLayout_7->setColumnStretch(4, 1);

        gridLayout_8->addWidget(groupBox_10, 1, 3, 1, 1);

        groupBox_13 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        sizePolicy.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy);
        groupBox_13->setFont(font);
        groupBox_13->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_13->setAlignment(Qt::AlignCenter);
        groupBox_13->setFlat(true);
        gridLayout_5 = new QGridLayout(groupBox_13);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_161 = new QLabel(groupBox_13);
        label_161->setObjectName(QString::fromUtf8("label_161"));
        sizePolicy.setHeightForWidth(label_161->sizePolicy().hasHeightForWidth());
        label_161->setSizePolicy(sizePolicy);
        label_161->setFont(font1);
        label_161->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_161, 0, 0, 1, 1);

        FCA_PARAMETER = new QLCDNumber(groupBox_13);
        FCA_PARAMETER->setObjectName(QString::fromUtf8("FCA_PARAMETER"));
        sizePolicy.setHeightForWidth(FCA_PARAMETER->sizePolicy().hasHeightForWidth());
        FCA_PARAMETER->setSizePolicy(sizePolicy);
        FCA_PARAMETER->setMinimumSize(QSize(75, 25));
        FCA_PARAMETER->setFont(font1);
        FCA_PARAMETER->setDigitCount(5);
        FCA_PARAMETER->setMode(QLCDNumber::Dec);
        FCA_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_PARAMETER, 0, 1, 1, 1);

        label_162 = new QLabel(groupBox_13);
        label_162->setObjectName(QString::fromUtf8("label_162"));
        sizePolicy.setHeightForWidth(label_162->sizePolicy().hasHeightForWidth());
        label_162->setSizePolicy(sizePolicy);
        label_162->setFont(font1);
        label_162->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_162, 0, 3, 1, 1);

        FCA_VOLTAGE = new QLCDNumber(groupBox_13);
        FCA_VOLTAGE->setObjectName(QString::fromUtf8("FCA_VOLTAGE"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FCA_VOLTAGE->sizePolicy().hasHeightForWidth());
        FCA_VOLTAGE->setSizePolicy(sizePolicy1);
        FCA_VOLTAGE->setMinimumSize(QSize(75, 25));
        FCA_VOLTAGE->setFont(font1);
        FCA_VOLTAGE->setDigitCount(5);
        FCA_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_VOLTAGE, 0, 4, 1, 1);

        label_164 = new QLabel(groupBox_13);
        label_164->setObjectName(QString::fromUtf8("label_164"));
        sizePolicy.setHeightForWidth(label_164->sizePolicy().hasHeightForWidth());
        label_164->setSizePolicy(sizePolicy);
        label_164->setFont(font1);

        gridLayout_5->addWidget(label_164, 0, 5, 1, 1);

        label_163 = new QLabel(groupBox_13);
        label_163->setObjectName(QString::fromUtf8("label_163"));
        sizePolicy.setHeightForWidth(label_163->sizePolicy().hasHeightForWidth());
        label_163->setSizePolicy(sizePolicy);
        label_163->setFont(font1);
        label_163->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_163, 1, 0, 1, 1);

        FCA_CURRENT = new QLCDNumber(groupBox_13);
        FCA_CURRENT->setObjectName(QString::fromUtf8("FCA_CURRENT"));
        sizePolicy.setHeightForWidth(FCA_CURRENT->sizePolicy().hasHeightForWidth());
        FCA_CURRENT->setSizePolicy(sizePolicy);
        FCA_CURRENT->setMinimumSize(QSize(75, 25));
        FCA_CURRENT->setFont(font1);
        FCA_CURRENT->setDigitCount(5);
        FCA_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_CURRENT, 1, 1, 1, 1);

        label_165 = new QLabel(groupBox_13);
        label_165->setObjectName(QString::fromUtf8("label_165"));
        sizePolicy.setHeightForWidth(label_165->sizePolicy().hasHeightForWidth());
        label_165->setSizePolicy(sizePolicy);
        label_165->setFont(font1);

        gridLayout_5->addWidget(label_165, 1, 2, 1, 1);

        label_159 = new QLabel(groupBox_13);
        label_159->setObjectName(QString::fromUtf8("label_159"));
        sizePolicy.setHeightForWidth(label_159->sizePolicy().hasHeightForWidth());
        label_159->setSizePolicy(sizePolicy);
        label_159->setFont(font1);
        label_159->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_159, 1, 3, 1, 1);

        FCA_POWER = new QLCDNumber(groupBox_13);
        FCA_POWER->setObjectName(QString::fromUtf8("FCA_POWER"));
        sizePolicy.setHeightForWidth(FCA_POWER->sizePolicy().hasHeightForWidth());
        FCA_POWER->setSizePolicy(sizePolicy);
        FCA_POWER->setMinimumSize(QSize(75, 25));
        FCA_POWER->setFont(font1);
        FCA_POWER->setDigitCount(5);
        FCA_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_POWER, 1, 4, 1, 1);

        label_166 = new QLabel(groupBox_13);
        label_166->setObjectName(QString::fromUtf8("label_166"));
        sizePolicy.setHeightForWidth(label_166->sizePolicy().hasHeightForWidth());
        label_166->setSizePolicy(sizePolicy);
        label_166->setFont(font1);

        gridLayout_5->addWidget(label_166, 1, 5, 1, 1);

        label_160 = new QLabel(groupBox_13);
        label_160->setObjectName(QString::fromUtf8("label_160"));
        sizePolicy.setHeightForWidth(label_160->sizePolicy().hasHeightForWidth());
        label_160->setSizePolicy(sizePolicy);
        label_160->setFont(font1);
        label_160->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_160, 2, 0, 1, 1);

        FCA_SET_CURRENT = new QLCDNumber(groupBox_13);
        FCA_SET_CURRENT->setObjectName(QString::fromUtf8("FCA_SET_CURRENT"));
        sizePolicy.setHeightForWidth(FCA_SET_CURRENT->sizePolicy().hasHeightForWidth());
        FCA_SET_CURRENT->setSizePolicy(sizePolicy);
        FCA_SET_CURRENT->setMinimumSize(QSize(75, 25));
        FCA_SET_CURRENT->setFont(font1);
        FCA_SET_CURRENT->setDigitCount(5);
        FCA_SET_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_SET_CURRENT, 2, 1, 1, 1);

        label_167 = new QLabel(groupBox_13);
        label_167->setObjectName(QString::fromUtf8("label_167"));
        sizePolicy.setHeightForWidth(label_167->sizePolicy().hasHeightForWidth());
        label_167->setSizePolicy(sizePolicy);
        label_167->setFont(font1);

        gridLayout_5->addWidget(label_167, 2, 2, 1, 1);

        label_157 = new QLabel(groupBox_13);
        label_157->setObjectName(QString::fromUtf8("label_157"));
        sizePolicy.setHeightForWidth(label_157->sizePolicy().hasHeightForWidth());
        label_157->setSizePolicy(sizePolicy);
        label_157->setFont(font1);
        label_157->setStyleSheet(QString::fromUtf8(""));
        label_157->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_157, 2, 3, 1, 1);

        FCA_SET_CURRENT_SLOPE = new QLCDNumber(groupBox_13);
        FCA_SET_CURRENT_SLOPE->setObjectName(QString::fromUtf8("FCA_SET_CURRENT_SLOPE"));
        sizePolicy.setHeightForWidth(FCA_SET_CURRENT_SLOPE->sizePolicy().hasHeightForWidth());
        FCA_SET_CURRENT_SLOPE->setSizePolicy(sizePolicy);
        FCA_SET_CURRENT_SLOPE->setMinimumSize(QSize(75, 25));
        FCA_SET_CURRENT_SLOPE->setFont(font1);
        FCA_SET_CURRENT_SLOPE->setDigitCount(5);
        FCA_SET_CURRENT_SLOPE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_SET_CURRENT_SLOPE, 2, 4, 1, 1);

        label_168 = new QLabel(groupBox_13);
        label_168->setObjectName(QString::fromUtf8("label_168"));
        sizePolicy.setHeightForWidth(label_168->sizePolicy().hasHeightForWidth());
        label_168->setSizePolicy(sizePolicy);
        label_168->setFont(font1);

        gridLayout_5->addWidget(label_168, 2, 5, 1, 1);

        label_156 = new QLabel(groupBox_13);
        label_156->setObjectName(QString::fromUtf8("label_156"));
        sizePolicy.setHeightForWidth(label_156->sizePolicy().hasHeightForWidth());
        label_156->setSizePolicy(sizePolicy);
        label_156->setFont(font1);
        label_156->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_156, 3, 0, 1, 1);

        FCA_LIFE = new QLCDNumber(groupBox_13);
        FCA_LIFE->setObjectName(QString::fromUtf8("FCA_LIFE"));
        sizePolicy.setHeightForWidth(FCA_LIFE->sizePolicy().hasHeightForWidth());
        FCA_LIFE->setSizePolicy(sizePolicy);
        FCA_LIFE->setMinimumSize(QSize(75, 25));
        FCA_LIFE->setFont(font1);
        FCA_LIFE->setDigitCount(5);
        FCA_LIFE->setMode(QLCDNumber::Dec);
        FCA_LIFE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_LIFE, 3, 1, 1, 1);

        label_158 = new QLabel(groupBox_13);
        label_158->setObjectName(QString::fromUtf8("label_158"));
        sizePolicy.setHeightForWidth(label_158->sizePolicy().hasHeightForWidth());
        label_158->setSizePolicy(sizePolicy);
        label_158->setFont(font1);
        label_158->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_158, 3, 3, 1, 1);

        FCA_EN = new QLCDNumber(groupBox_13);
        FCA_EN->setObjectName(QString::fromUtf8("FCA_EN"));
        sizePolicy.setHeightForWidth(FCA_EN->sizePolicy().hasHeightForWidth());
        FCA_EN->setSizePolicy(sizePolicy);
        FCA_EN->setMinimumSize(QSize(75, 25));
        FCA_EN->setFont(font1);
        FCA_EN->setDigitCount(5);
        FCA_EN->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_EN, 3, 4, 1, 1);

        label_152 = new QLabel(groupBox_13);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        sizePolicy.setHeightForWidth(label_152->sizePolicy().hasHeightForWidth());
        label_152->setSizePolicy(sizePolicy);
        label_152->setFont(font1);
        label_152->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_152, 4, 0, 1, 1);

        FCA_STATE = new QLCDNumber(groupBox_13);
        FCA_STATE->setObjectName(QString::fromUtf8("FCA_STATE"));
        sizePolicy.setHeightForWidth(FCA_STATE->sizePolicy().hasHeightForWidth());
        FCA_STATE->setSizePolicy(sizePolicy);
        FCA_STATE->setMinimumSize(QSize(75, 25));
        FCA_STATE->setFont(font1);
        FCA_STATE->setDigitCount(5);
        FCA_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(FCA_STATE, 4, 1, 1, 1);

        label_190 = new QLabel(groupBox_13);
        label_190->setObjectName(QString::fromUtf8("label_190"));
        sizePolicy.setHeightForWidth(label_190->sizePolicy().hasHeightForWidth());
        label_190->setSizePolicy(sizePolicy);
        label_190->setFont(font1);
        label_190->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_190, 4, 3, 1, 1);

        FCA_WORK = new QLabel(groupBox_13);
        FCA_WORK->setObjectName(QString::fromUtf8("FCA_WORK"));
        FCA_WORK->setMinimumSize(QSize(75, 25));
        FCA_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FCA_WORK->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(FCA_WORK, 4, 4, 1, 1);

        label_189 = new QLabel(groupBox_13);
        label_189->setObjectName(QString::fromUtf8("label_189"));
        sizePolicy.setHeightForWidth(label_189->sizePolicy().hasHeightForWidth());
        label_189->setSizePolicy(sizePolicy);
        label_189->setFont(font1);
        label_189->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_189, 5, 0, 1, 1);

        FCA_FAULT = new QLabel(groupBox_13);
        FCA_FAULT->setObjectName(QString::fromUtf8("FCA_FAULT"));
        FCA_FAULT->setMinimumSize(QSize(90, 25));
        FCA_FAULT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FCA_FAULT->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(FCA_FAULT, 5, 1, 1, 5);


        gridLayout_8->addWidget(groupBox_13, 1, 1, 1, 1);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setFont(font);
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        groupBox_6->setFlat(true);
        gridLayout_15 = new QGridLayout(groupBox_6);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);
        label_26->setFont(font1);
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_26, 0, 0, 1, 1);

        FC1_PARAMETER = new QLCDNumber(groupBox_6);
        FC1_PARAMETER->setObjectName(QString::fromUtf8("FC1_PARAMETER"));
        sizePolicy.setHeightForWidth(FC1_PARAMETER->sizePolicy().hasHeightForWidth());
        FC1_PARAMETER->setSizePolicy(sizePolicy);
        FC1_PARAMETER->setMinimumSize(QSize(75, 25));
        FC1_PARAMETER->setFont(font1);
        FC1_PARAMETER->setDigitCount(5);
        FC1_PARAMETER->setMode(QLCDNumber::Dec);
        FC1_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_PARAMETER, 0, 1, 1, 1);

        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_27, 0, 3, 1, 1);

        FC1_VOLTAGE = new QLCDNumber(groupBox_6);
        FC1_VOLTAGE->setObjectName(QString::fromUtf8("FC1_VOLTAGE"));
        sizePolicy.setHeightForWidth(FC1_VOLTAGE->sizePolicy().hasHeightForWidth());
        FC1_VOLTAGE->setSizePolicy(sizePolicy);
        FC1_VOLTAGE->setMinimumSize(QSize(75, 25));
        FC1_VOLTAGE->setFont(font1);
        FC1_VOLTAGE->setDigitCount(5);
        FC1_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_VOLTAGE, 0, 4, 1, 1);

        label_68 = new QLabel(groupBox_6);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        sizePolicy.setHeightForWidth(label_68->sizePolicy().hasHeightForWidth());
        label_68->setSizePolicy(sizePolicy);
        label_68->setFont(font1);

        gridLayout_15->addWidget(label_68, 0, 5, 1, 1);

        label_28 = new QLabel(groupBox_6);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy);
        label_28->setFont(font1);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_28, 1, 0, 1, 1);

        FC1_CURRENT = new QLCDNumber(groupBox_6);
        FC1_CURRENT->setObjectName(QString::fromUtf8("FC1_CURRENT"));
        sizePolicy.setHeightForWidth(FC1_CURRENT->sizePolicy().hasHeightForWidth());
        FC1_CURRENT->setSizePolicy(sizePolicy);
        FC1_CURRENT->setMinimumSize(QSize(75, 25));
        FC1_CURRENT->setFont(font1);
        FC1_CURRENT->setDigitCount(5);
        FC1_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_CURRENT, 1, 1, 1, 1);

        label_69 = new QLabel(groupBox_6);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        sizePolicy.setHeightForWidth(label_69->sizePolicy().hasHeightForWidth());
        label_69->setSizePolicy(sizePolicy);
        label_69->setFont(font1);

        gridLayout_15->addWidget(label_69, 1, 2, 1, 1);

        label_29 = new QLabel(groupBox_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy);
        label_29->setFont(font1);
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_29, 1, 3, 1, 1);

        FC1_POWER = new QLCDNumber(groupBox_6);
        FC1_POWER->setObjectName(QString::fromUtf8("FC1_POWER"));
        sizePolicy.setHeightForWidth(FC1_POWER->sizePolicy().hasHeightForWidth());
        FC1_POWER->setSizePolicy(sizePolicy);
        FC1_POWER->setMinimumSize(QSize(75, 25));
        FC1_POWER->setFont(font1);
        FC1_POWER->setDigitCount(5);
        FC1_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_POWER, 1, 4, 1, 1);

        label_70 = new QLabel(groupBox_6);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        sizePolicy.setHeightForWidth(label_70->sizePolicy().hasHeightForWidth());
        label_70->setSizePolicy(sizePolicy);
        label_70->setFont(font1);

        gridLayout_15->addWidget(label_70, 1, 5, 1, 1);

        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy);
        label_30->setFont(font1);
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_30, 2, 0, 1, 1);

        FC1_LP_IN = new QLCDNumber(groupBox_6);
        FC1_LP_IN->setObjectName(QString::fromUtf8("FC1_LP_IN"));
        sizePolicy.setHeightForWidth(FC1_LP_IN->sizePolicy().hasHeightForWidth());
        FC1_LP_IN->setSizePolicy(sizePolicy);
        FC1_LP_IN->setMinimumSize(QSize(75, 25));
        FC1_LP_IN->setFont(font1);
        FC1_LP_IN->setDigitCount(5);
        FC1_LP_IN->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_LP_IN, 2, 1, 1, 1);

        label_71 = new QLabel(groupBox_6);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        sizePolicy.setHeightForWidth(label_71->sizePolicy().hasHeightForWidth());
        label_71->setSizePolicy(sizePolicy);
        label_71->setFont(font1);

        gridLayout_15->addWidget(label_71, 2, 2, 1, 1);

        label_38 = new QLabel(groupBox_6);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        sizePolicy.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy);
        label_38->setFont(font1);
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_38, 2, 3, 1, 1);

        FC1_LP_OUT = new QLCDNumber(groupBox_6);
        FC1_LP_OUT->setObjectName(QString::fromUtf8("FC1_LP_OUT"));
        sizePolicy.setHeightForWidth(FC1_LP_OUT->sizePolicy().hasHeightForWidth());
        FC1_LP_OUT->setSizePolicy(sizePolicy);
        FC1_LP_OUT->setMinimumSize(QSize(75, 25));
        FC1_LP_OUT->setFont(font1);
        FC1_LP_OUT->setDigitCount(5);
        FC1_LP_OUT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_LP_OUT, 2, 4, 1, 1);

        label_72 = new QLabel(groupBox_6);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        sizePolicy.setHeightForWidth(label_72->sizePolicy().hasHeightForWidth());
        label_72->setSizePolicy(sizePolicy);
        label_72->setFont(font1);

        gridLayout_15->addWidget(label_72, 2, 5, 1, 1);

        label_43 = new QLabel(groupBox_6);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        sizePolicy.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy);
        label_43->setFont(font1);
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_43, 3, 0, 1, 1);

        FC1_ENERGY = new QLCDNumber(groupBox_6);
        FC1_ENERGY->setObjectName(QString::fromUtf8("FC1_ENERGY"));
        sizePolicy.setHeightForWidth(FC1_ENERGY->sizePolicy().hasHeightForWidth());
        FC1_ENERGY->setSizePolicy(sizePolicy);
        FC1_ENERGY->setMinimumSize(QSize(75, 25));
        FC1_ENERGY->setFont(font1);
        FC1_ENERGY->setDigitCount(5);
        FC1_ENERGY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_ENERGY, 3, 1, 1, 1);

        label_79 = new QLabel(groupBox_6);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        sizePolicy.setHeightForWidth(label_79->sizePolicy().hasHeightForWidth());
        label_79->setSizePolicy(sizePolicy);
        label_79->setFont(font1);

        gridLayout_15->addWidget(label_79, 3, 2, 1, 1);

        label_45 = new QLabel(groupBox_6);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        sizePolicy.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy);
        label_45->setFont(font1);
        label_45->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_45, 3, 3, 1, 1);

        FC1_H2C = new QLCDNumber(groupBox_6);
        FC1_H2C->setObjectName(QString::fromUtf8("FC1_H2C"));
        sizePolicy.setHeightForWidth(FC1_H2C->sizePolicy().hasHeightForWidth());
        FC1_H2C->setSizePolicy(sizePolicy);
        FC1_H2C->setMinimumSize(QSize(75, 25));
        FC1_H2C->setFont(font1);
        FC1_H2C->setDigitCount(5);
        FC1_H2C->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_H2C, 3, 4, 1, 1);

        label_80 = new QLabel(groupBox_6);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        sizePolicy.setHeightForWidth(label_80->sizePolicy().hasHeightForWidth());
        label_80->setSizePolicy(sizePolicy);
        label_80->setFont(font1);

        gridLayout_15->addWidget(label_80, 3, 5, 1, 1);

        label_36 = new QLabel(groupBox_6);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy);
        label_36->setFont(font1);
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_36, 4, 0, 1, 1);

        FC1_FAN1_SPEED = new QLCDNumber(groupBox_6);
        FC1_FAN1_SPEED->setObjectName(QString::fromUtf8("FC1_FAN1_SPEED"));
        sizePolicy.setHeightForWidth(FC1_FAN1_SPEED->sizePolicy().hasHeightForWidth());
        FC1_FAN1_SPEED->setSizePolicy(sizePolicy);
        FC1_FAN1_SPEED->setMinimumSize(QSize(75, 25));
        FC1_FAN1_SPEED->setFont(font1);
        FC1_FAN1_SPEED->setDigitCount(5);
        FC1_FAN1_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_FAN1_SPEED, 4, 1, 1, 1);

        label_73 = new QLabel(groupBox_6);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        sizePolicy.setHeightForWidth(label_73->sizePolicy().hasHeightForWidth());
        label_73->setSizePolicy(sizePolicy);
        label_73->setFont(font1);

        gridLayout_15->addWidget(label_73, 4, 2, 1, 1);

        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy);
        label_37->setFont(font1);
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_37, 4, 3, 1, 1);

        FC1_FAN2_SPEED = new QLCDNumber(groupBox_6);
        FC1_FAN2_SPEED->setObjectName(QString::fromUtf8("FC1_FAN2_SPEED"));
        sizePolicy.setHeightForWidth(FC1_FAN2_SPEED->sizePolicy().hasHeightForWidth());
        FC1_FAN2_SPEED->setSizePolicy(sizePolicy);
        FC1_FAN2_SPEED->setMinimumSize(QSize(75, 25));
        FC1_FAN2_SPEED->setFont(font1);
        FC1_FAN2_SPEED->setDigitCount(5);
        FC1_FAN2_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_FAN2_SPEED, 4, 4, 1, 1);

        label_74 = new QLabel(groupBox_6);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        sizePolicy.setHeightForWidth(label_74->sizePolicy().hasHeightForWidth());
        label_74->setSizePolicy(sizePolicy);
        label_74->setFont(font1);

        gridLayout_15->addWidget(label_74, 4, 5, 1, 1);

        label_39 = new QLabel(groupBox_6);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy);
        label_39->setFont(font1);
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_39, 5, 0, 1, 1);

        FC1_FAN3_SPEED = new QLCDNumber(groupBox_6);
        FC1_FAN3_SPEED->setObjectName(QString::fromUtf8("FC1_FAN3_SPEED"));
        sizePolicy.setHeightForWidth(FC1_FAN3_SPEED->sizePolicy().hasHeightForWidth());
        FC1_FAN3_SPEED->setSizePolicy(sizePolicy);
        FC1_FAN3_SPEED->setMinimumSize(QSize(75, 25));
        FC1_FAN3_SPEED->setFont(font1);
        FC1_FAN3_SPEED->setDigitCount(5);
        FC1_FAN3_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_FAN3_SPEED, 5, 1, 1, 1);

        label_75 = new QLabel(groupBox_6);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        sizePolicy.setHeightForWidth(label_75->sizePolicy().hasHeightForWidth());
        label_75->setSizePolicy(sizePolicy);
        label_75->setFont(font1);

        gridLayout_15->addWidget(label_75, 5, 2, 1, 1);

        label_41 = new QLabel(groupBox_6);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        sizePolicy.setHeightForWidth(label_41->sizePolicy().hasHeightForWidth());
        label_41->setSizePolicy(sizePolicy);
        label_41->setFont(font1);
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_41, 5, 3, 1, 1);

        FC1_FAN4_SPEED = new QLCDNumber(groupBox_6);
        FC1_FAN4_SPEED->setObjectName(QString::fromUtf8("FC1_FAN4_SPEED"));
        sizePolicy.setHeightForWidth(FC1_FAN4_SPEED->sizePolicy().hasHeightForWidth());
        FC1_FAN4_SPEED->setSizePolicy(sizePolicy);
        FC1_FAN4_SPEED->setMinimumSize(QSize(75, 25));
        FC1_FAN4_SPEED->setFont(font1);
        FC1_FAN4_SPEED->setDigitCount(5);
        FC1_FAN4_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_FAN4_SPEED, 5, 4, 1, 1);

        label_76 = new QLabel(groupBox_6);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        sizePolicy.setHeightForWidth(label_76->sizePolicy().hasHeightForWidth());
        label_76->setSizePolicy(sizePolicy);
        label_76->setFont(font1);

        gridLayout_15->addWidget(label_76, 5, 5, 1, 1);

        label_42 = new QLabel(groupBox_6);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy);
        label_42->setFont(font1);
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_42, 6, 0, 1, 1);

        FC1_TEMP1 = new QLCDNumber(groupBox_6);
        FC1_TEMP1->setObjectName(QString::fromUtf8("FC1_TEMP1"));
        sizePolicy.setHeightForWidth(FC1_TEMP1->sizePolicy().hasHeightForWidth());
        FC1_TEMP1->setSizePolicy(sizePolicy);
        FC1_TEMP1->setMinimumSize(QSize(75, 25));
        FC1_TEMP1->setFont(font1);
        FC1_TEMP1->setDigitCount(5);
        FC1_TEMP1->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_TEMP1, 6, 1, 1, 1);

        label_77 = new QLabel(groupBox_6);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        sizePolicy.setHeightForWidth(label_77->sizePolicy().hasHeightForWidth());
        label_77->setSizePolicy(sizePolicy);
        label_77->setFont(font1);

        gridLayout_15->addWidget(label_77, 6, 2, 1, 1);

        label_40 = new QLabel(groupBox_6);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        sizePolicy.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy);
        label_40->setFont(font1);
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_40, 6, 3, 1, 1);

        FC1_TEMP2 = new QLCDNumber(groupBox_6);
        FC1_TEMP2->setObjectName(QString::fromUtf8("FC1_TEMP2"));
        sizePolicy.setHeightForWidth(FC1_TEMP2->sizePolicy().hasHeightForWidth());
        FC1_TEMP2->setSizePolicy(sizePolicy);
        FC1_TEMP2->setMinimumSize(QSize(75, 25));
        FC1_TEMP2->setFont(font1);
        FC1_TEMP2->setDigitCount(5);
        FC1_TEMP2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_TEMP2, 6, 4, 1, 1);

        label_78 = new QLabel(groupBox_6);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        sizePolicy.setHeightForWidth(label_78->sizePolicy().hasHeightForWidth());
        label_78->setSizePolicy(sizePolicy);
        label_78->setFont(font1);

        gridLayout_15->addWidget(label_78, 6, 5, 1, 1);

        label_46 = new QLabel(groupBox_6);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        sizePolicy.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy);
        label_46->setFont(font1);
        label_46->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_46, 7, 0, 1, 1);

        FC1_STATE = new QLCDNumber(groupBox_6);
        FC1_STATE->setObjectName(QString::fromUtf8("FC1_STATE"));
        sizePolicy.setHeightForWidth(FC1_STATE->sizePolicy().hasHeightForWidth());
        FC1_STATE->setSizePolicy(sizePolicy);
        FC1_STATE->setMinimumSize(QSize(75, 25));
        FC1_STATE->setFont(font1);
        FC1_STATE->setDigitCount(5);
        FC1_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_15->addWidget(FC1_STATE, 7, 1, 1, 1);

        label_181 = new QLabel(groupBox_6);
        label_181->setObjectName(QString::fromUtf8("label_181"));
        sizePolicy.setHeightForWidth(label_181->sizePolicy().hasHeightForWidth());
        label_181->setSizePolicy(sizePolicy);
        label_181->setFont(font1);
        label_181->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_181, 7, 3, 1, 1);

        FC1_VENT = new QLabel(groupBox_6);
        FC1_VENT->setObjectName(QString::fromUtf8("FC1_VENT"));
        FC1_VENT->setMinimumSize(QSize(75, 25));
        FC1_VENT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC1_VENT->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(FC1_VENT, 7, 4, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_179 = new QLabel(groupBox_6);
        label_179->setObjectName(QString::fromUtf8("label_179"));
        sizePolicy.setHeightForWidth(label_179->sizePolicy().hasHeightForWidth());
        label_179->setSizePolicy(sizePolicy);
        label_179->setFont(font1);
        label_179->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_179, 0, 0, 1, 1);

        FC1_WORK = new QLabel(groupBox_6);
        FC1_WORK->setObjectName(QString::fromUtf8("FC1_WORK"));
        FC1_WORK->setMinimumSize(QSize(75, 25));
        FC1_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC1_WORK->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(FC1_WORK, 0, 1, 1, 1);

        FC1_FAULT_P = new QLabel(groupBox_6);
        FC1_FAULT_P->setObjectName(QString::fromUtf8("FC1_FAULT_P"));
        FC1_FAULT_P->setMinimumSize(QSize(90, 25));
        FC1_FAULT_P->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC1_FAULT_P->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(FC1_FAULT_P, 0, 2, 1, 1);

        FC1_FAULT_V = new QLabel(groupBox_6);
        FC1_FAULT_V->setObjectName(QString::fromUtf8("FC1_FAULT_V"));
        FC1_FAULT_V->setMinimumSize(QSize(126, 25));
        FC1_FAULT_V->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC1_FAULT_V->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(FC1_FAULT_V, 1, 1, 1, 1);

        FC1_FAULT_T = new QLabel(groupBox_6);
        FC1_FAULT_T->setObjectName(QString::fromUtf8("FC1_FAULT_T"));
        FC1_FAULT_T->setMinimumSize(QSize(90, 25));
        FC1_FAULT_T->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC1_FAULT_T->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(FC1_FAULT_T, 1, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_4, 8, 0, 1, 5);


        gridLayout_8->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        groupBox_8->setFont(font);
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: 0.5px solid #5aa4ae;\n"
"	border-top: 25px solid #5aa4ae;\n"
"	font-size: 18px\n"
"}\n"
"QGroupBox::title {\n"
"	background-color: #5aa4ae;\n"
"	color: be43e0;\n"
"}"));
        groupBox_8->setAlignment(Qt::AlignCenter);
        groupBox_8->setFlat(true);
        gridLayout_16 = new QGridLayout(groupBox_8);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_31 = new QLabel(groupBox_8);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy);
        label_31->setFont(font1);
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_31, 0, 0, 1, 1);

        FC2_PARAMETER = new QLCDNumber(groupBox_8);
        FC2_PARAMETER->setObjectName(QString::fromUtf8("FC2_PARAMETER"));
        sizePolicy.setHeightForWidth(FC2_PARAMETER->sizePolicy().hasHeightForWidth());
        FC2_PARAMETER->setSizePolicy(sizePolicy);
        FC2_PARAMETER->setMinimumSize(QSize(75, 25));
        FC2_PARAMETER->setFont(font1);
        FC2_PARAMETER->setDigitCount(5);
        FC2_PARAMETER->setMode(QLCDNumber::Dec);
        FC2_PARAMETER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_PARAMETER, 0, 1, 1, 1);

        label_32 = new QLabel(groupBox_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font1);
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_32, 0, 3, 1, 1);

        FC2_VOLTAGE = new QLCDNumber(groupBox_8);
        FC2_VOLTAGE->setObjectName(QString::fromUtf8("FC2_VOLTAGE"));
        sizePolicy.setHeightForWidth(FC2_VOLTAGE->sizePolicy().hasHeightForWidth());
        FC2_VOLTAGE->setSizePolicy(sizePolicy);
        FC2_VOLTAGE->setMinimumSize(QSize(75, 25));
        FC2_VOLTAGE->setFont(font1);
        FC2_VOLTAGE->setDigitCount(5);
        FC2_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_VOLTAGE, 0, 4, 1, 1);

        label_84 = new QLabel(groupBox_8);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        sizePolicy.setHeightForWidth(label_84->sizePolicy().hasHeightForWidth());
        label_84->setSizePolicy(sizePolicy);
        label_84->setFont(font1);

        gridLayout_16->addWidget(label_84, 0, 5, 1, 1);

        label_33 = new QLabel(groupBox_8);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_33, 1, 0, 1, 1);

        FC2_CURRENT = new QLCDNumber(groupBox_8);
        FC2_CURRENT->setObjectName(QString::fromUtf8("FC2_CURRENT"));
        sizePolicy.setHeightForWidth(FC2_CURRENT->sizePolicy().hasHeightForWidth());
        FC2_CURRENT->setSizePolicy(sizePolicy);
        FC2_CURRENT->setMinimumSize(QSize(75, 25));
        FC2_CURRENT->setFont(font1);
        FC2_CURRENT->setDigitCount(5);
        FC2_CURRENT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_CURRENT, 1, 1, 1, 1);

        label_94 = new QLabel(groupBox_8);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        sizePolicy.setHeightForWidth(label_94->sizePolicy().hasHeightForWidth());
        label_94->setSizePolicy(sizePolicy);
        label_94->setFont(font1);

        gridLayout_16->addWidget(label_94, 1, 2, 1, 1);

        label_34 = new QLabel(groupBox_8);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy);
        label_34->setFont(font1);
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_34, 1, 3, 1, 1);

        FC2_POWER = new QLCDNumber(groupBox_8);
        FC2_POWER->setObjectName(QString::fromUtf8("FC2_POWER"));
        sizePolicy.setHeightForWidth(FC2_POWER->sizePolicy().hasHeightForWidth());
        FC2_POWER->setSizePolicy(sizePolicy);
        FC2_POWER->setMinimumSize(QSize(75, 25));
        FC2_POWER->setFont(font1);
        FC2_POWER->setDigitCount(5);
        FC2_POWER->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_POWER, 1, 4, 1, 1);

        label_95 = new QLabel(groupBox_8);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        sizePolicy.setHeightForWidth(label_95->sizePolicy().hasHeightForWidth());
        label_95->setSizePolicy(sizePolicy);
        label_95->setFont(font1);

        gridLayout_16->addWidget(label_95, 1, 5, 1, 1);

        label_35 = new QLabel(groupBox_8);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy);
        label_35->setFont(font1);
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_35, 2, 0, 1, 1);

        FC2_LP_IN = new QLCDNumber(groupBox_8);
        FC2_LP_IN->setObjectName(QString::fromUtf8("FC2_LP_IN"));
        sizePolicy.setHeightForWidth(FC2_LP_IN->sizePolicy().hasHeightForWidth());
        FC2_LP_IN->setSizePolicy(sizePolicy);
        FC2_LP_IN->setMinimumSize(QSize(75, 25));
        FC2_LP_IN->setFont(font1);
        FC2_LP_IN->setDigitCount(5);
        FC2_LP_IN->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_LP_IN, 2, 1, 1, 1);

        label_96 = new QLabel(groupBox_8);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        sizePolicy.setHeightForWidth(label_96->sizePolicy().hasHeightForWidth());
        label_96->setSizePolicy(sizePolicy);
        label_96->setFont(font1);

        gridLayout_16->addWidget(label_96, 2, 2, 1, 1);

        label_63 = new QLabel(groupBox_8);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        sizePolicy.setHeightForWidth(label_63->sizePolicy().hasHeightForWidth());
        label_63->setSizePolicy(sizePolicy);
        label_63->setFont(font1);
        label_63->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_63, 2, 3, 1, 1);

        FC2_LP_OUT = new QLCDNumber(groupBox_8);
        FC2_LP_OUT->setObjectName(QString::fromUtf8("FC2_LP_OUT"));
        sizePolicy.setHeightForWidth(FC2_LP_OUT->sizePolicy().hasHeightForWidth());
        FC2_LP_OUT->setSizePolicy(sizePolicy);
        FC2_LP_OUT->setMinimumSize(QSize(75, 25));
        FC2_LP_OUT->setFont(font1);
        FC2_LP_OUT->setDigitCount(5);
        FC2_LP_OUT->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_LP_OUT, 2, 4, 1, 1);

        label_97 = new QLabel(groupBox_8);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        sizePolicy.setHeightForWidth(label_97->sizePolicy().hasHeightForWidth());
        label_97->setSizePolicy(sizePolicy);
        label_97->setFont(font1);

        gridLayout_16->addWidget(label_97, 2, 5, 1, 1);

        label_64 = new QLabel(groupBox_8);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        sizePolicy.setHeightForWidth(label_64->sizePolicy().hasHeightForWidth());
        label_64->setSizePolicy(sizePolicy);
        label_64->setFont(font1);
        label_64->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_64, 3, 0, 1, 1);

        FC2_FAN1_SPEED = new QLCDNumber(groupBox_8);
        FC2_FAN1_SPEED->setObjectName(QString::fromUtf8("FC2_FAN1_SPEED"));
        sizePolicy.setHeightForWidth(FC2_FAN1_SPEED->sizePolicy().hasHeightForWidth());
        FC2_FAN1_SPEED->setSizePolicy(sizePolicy);
        FC2_FAN1_SPEED->setMinimumSize(QSize(75, 25));
        FC2_FAN1_SPEED->setFont(font1);
        FC2_FAN1_SPEED->setDigitCount(5);
        FC2_FAN1_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_FAN1_SPEED, 3, 1, 1, 1);

        label_98 = new QLabel(groupBox_8);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        sizePolicy.setHeightForWidth(label_98->sizePolicy().hasHeightForWidth());
        label_98->setSizePolicy(sizePolicy);
        label_98->setFont(font1);

        gridLayout_16->addWidget(label_98, 3, 2, 1, 1);

        label_65 = new QLabel(groupBox_8);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        sizePolicy.setHeightForWidth(label_65->sizePolicy().hasHeightForWidth());
        label_65->setSizePolicy(sizePolicy);
        label_65->setFont(font1);
        label_65->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_65, 3, 3, 1, 1);

        FC2_FAN2_SPEED = new QLCDNumber(groupBox_8);
        FC2_FAN2_SPEED->setObjectName(QString::fromUtf8("FC2_FAN2_SPEED"));
        sizePolicy.setHeightForWidth(FC2_FAN2_SPEED->sizePolicy().hasHeightForWidth());
        FC2_FAN2_SPEED->setSizePolicy(sizePolicy);
        FC2_FAN2_SPEED->setMinimumSize(QSize(75, 25));
        FC2_FAN2_SPEED->setFont(font1);
        FC2_FAN2_SPEED->setDigitCount(5);
        FC2_FAN2_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_FAN2_SPEED, 3, 4, 1, 1);

        label_99 = new QLabel(groupBox_8);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        sizePolicy.setHeightForWidth(label_99->sizePolicy().hasHeightForWidth());
        label_99->setSizePolicy(sizePolicy);
        label_99->setFont(font1);

        gridLayout_16->addWidget(label_99, 3, 5, 1, 1);

        label_66 = new QLabel(groupBox_8);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        sizePolicy.setHeightForWidth(label_66->sizePolicy().hasHeightForWidth());
        label_66->setSizePolicy(sizePolicy);
        label_66->setFont(font1);
        label_66->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_66, 4, 0, 1, 1);

        FC2_FAN3_SPEED = new QLCDNumber(groupBox_8);
        FC2_FAN3_SPEED->setObjectName(QString::fromUtf8("FC2_FAN3_SPEED"));
        sizePolicy.setHeightForWidth(FC2_FAN3_SPEED->sizePolicy().hasHeightForWidth());
        FC2_FAN3_SPEED->setSizePolicy(sizePolicy);
        FC2_FAN3_SPEED->setMinimumSize(QSize(75, 25));
        FC2_FAN3_SPEED->setFont(font1);
        FC2_FAN3_SPEED->setDigitCount(5);
        FC2_FAN3_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_FAN3_SPEED, 4, 1, 1, 1);

        label_100 = new QLabel(groupBox_8);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        sizePolicy.setHeightForWidth(label_100->sizePolicy().hasHeightForWidth());
        label_100->setSizePolicy(sizePolicy);
        label_100->setFont(font1);

        gridLayout_16->addWidget(label_100, 4, 2, 1, 1);

        label_110 = new QLabel(groupBox_8);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        sizePolicy.setHeightForWidth(label_110->sizePolicy().hasHeightForWidth());
        label_110->setSizePolicy(sizePolicy);
        label_110->setFont(font1);
        label_110->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_110, 4, 3, 1, 1);

        FC2_FAN4_SPEED = new QLCDNumber(groupBox_8);
        FC2_FAN4_SPEED->setObjectName(QString::fromUtf8("FC2_FAN4_SPEED"));
        sizePolicy.setHeightForWidth(FC2_FAN4_SPEED->sizePolicy().hasHeightForWidth());
        FC2_FAN4_SPEED->setSizePolicy(sizePolicy);
        FC2_FAN4_SPEED->setMinimumSize(QSize(75, 25));
        FC2_FAN4_SPEED->setFont(font1);
        FC2_FAN4_SPEED->setDigitCount(5);
        FC2_FAN4_SPEED->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_FAN4_SPEED, 4, 4, 1, 1);

        label_101 = new QLabel(groupBox_8);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        sizePolicy.setHeightForWidth(label_101->sizePolicy().hasHeightForWidth());
        label_101->setSizePolicy(sizePolicy);
        label_101->setFont(font1);

        gridLayout_16->addWidget(label_101, 4, 5, 1, 1);

        label_67 = new QLabel(groupBox_8);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        sizePolicy.setHeightForWidth(label_67->sizePolicy().hasHeightForWidth());
        label_67->setSizePolicy(sizePolicy);
        label_67->setFont(font1);
        label_67->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_67, 5, 0, 1, 1);

        FC2_TEMP1 = new QLCDNumber(groupBox_8);
        FC2_TEMP1->setObjectName(QString::fromUtf8("FC2_TEMP1"));
        sizePolicy.setHeightForWidth(FC2_TEMP1->sizePolicy().hasHeightForWidth());
        FC2_TEMP1->setSizePolicy(sizePolicy);
        FC2_TEMP1->setMinimumSize(QSize(75, 25));
        FC2_TEMP1->setFont(font1);
        FC2_TEMP1->setDigitCount(5);
        FC2_TEMP1->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_TEMP1, 5, 1, 1, 1);

        label_102 = new QLabel(groupBox_8);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        sizePolicy.setHeightForWidth(label_102->sizePolicy().hasHeightForWidth());
        label_102->setSizePolicy(sizePolicy);
        label_102->setFont(font1);

        gridLayout_16->addWidget(label_102, 5, 2, 1, 1);

        label_103 = new QLabel(groupBox_8);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        sizePolicy.setHeightForWidth(label_103->sizePolicy().hasHeightForWidth());
        label_103->setSizePolicy(sizePolicy);
        label_103->setFont(font1);
        label_103->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_103, 5, 3, 1, 1);

        FC2_TEMP2 = new QLCDNumber(groupBox_8);
        FC2_TEMP2->setObjectName(QString::fromUtf8("FC2_TEMP2"));
        sizePolicy.setHeightForWidth(FC2_TEMP2->sizePolicy().hasHeightForWidth());
        FC2_TEMP2->setSizePolicy(sizePolicy);
        FC2_TEMP2->setMinimumSize(QSize(75, 25));
        FC2_TEMP2->setFont(font1);
        FC2_TEMP2->setDigitCount(5);
        FC2_TEMP2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_TEMP2, 5, 4, 1, 1);

        label_104 = new QLabel(groupBox_8);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        sizePolicy.setHeightForWidth(label_104->sizePolicy().hasHeightForWidth());
        label_104->setSizePolicy(sizePolicy);
        label_104->setFont(font1);

        gridLayout_16->addWidget(label_104, 5, 5, 1, 1);

        label_105 = new QLabel(groupBox_8);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        sizePolicy.setHeightForWidth(label_105->sizePolicy().hasHeightForWidth());
        label_105->setSizePolicy(sizePolicy);
        label_105->setFont(font1);
        label_105->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_105, 6, 0, 1, 1);

        FC2_ENERGY = new QLCDNumber(groupBox_8);
        FC2_ENERGY->setObjectName(QString::fromUtf8("FC2_ENERGY"));
        sizePolicy.setHeightForWidth(FC2_ENERGY->sizePolicy().hasHeightForWidth());
        FC2_ENERGY->setSizePolicy(sizePolicy);
        FC2_ENERGY->setMinimumSize(QSize(75, 25));
        FC2_ENERGY->setFont(font1);
        FC2_ENERGY->setDigitCount(5);
        FC2_ENERGY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_ENERGY, 6, 1, 1, 1);

        label_106 = new QLabel(groupBox_8);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        sizePolicy.setHeightForWidth(label_106->sizePolicy().hasHeightForWidth());
        label_106->setSizePolicy(sizePolicy);
        label_106->setFont(font1);

        gridLayout_16->addWidget(label_106, 6, 2, 1, 1);

        label_107 = new QLabel(groupBox_8);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        sizePolicy.setHeightForWidth(label_107->sizePolicy().hasHeightForWidth());
        label_107->setSizePolicy(sizePolicy);
        label_107->setFont(font1);
        label_107->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_107, 6, 3, 1, 1);

        FC2_H2C = new QLCDNumber(groupBox_8);
        FC2_H2C->setObjectName(QString::fromUtf8("FC2_H2C"));
        sizePolicy.setHeightForWidth(FC2_H2C->sizePolicy().hasHeightForWidth());
        FC2_H2C->setSizePolicy(sizePolicy);
        FC2_H2C->setMinimumSize(QSize(75, 25));
        FC2_H2C->setFont(font1);
        FC2_H2C->setDigitCount(5);
        FC2_H2C->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_H2C, 6, 4, 1, 1);

        label_108 = new QLabel(groupBox_8);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        sizePolicy.setHeightForWidth(label_108->sizePolicy().hasHeightForWidth());
        label_108->setSizePolicy(sizePolicy);
        label_108->setFont(font1);

        gridLayout_16->addWidget(label_108, 6, 5, 1, 1);

        label_109 = new QLabel(groupBox_8);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        sizePolicy.setHeightForWidth(label_109->sizePolicy().hasHeightForWidth());
        label_109->setSizePolicy(sizePolicy);
        label_109->setFont(font1);
        label_109->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_109, 7, 0, 1, 1);

        FC2_STATE = new QLCDNumber(groupBox_8);
        FC2_STATE->setObjectName(QString::fromUtf8("FC2_STATE"));
        sizePolicy.setHeightForWidth(FC2_STATE->sizePolicy().hasHeightForWidth());
        FC2_STATE->setSizePolicy(sizePolicy);
        FC2_STATE->setMinimumSize(QSize(75, 25));
        FC2_STATE->setFont(font1);
        FC2_STATE->setDigitCount(5);
        FC2_STATE->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_16->addWidget(FC2_STATE, 7, 1, 1, 1);

        label_182 = new QLabel(groupBox_8);
        label_182->setObjectName(QString::fromUtf8("label_182"));
        sizePolicy.setHeightForWidth(label_182->sizePolicy().hasHeightForWidth());
        label_182->setSizePolicy(sizePolicy);
        label_182->setFont(font1);
        label_182->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_182, 7, 3, 1, 1);

        FC2_VENT = new QLabel(groupBox_8);
        FC2_VENT->setObjectName(QString::fromUtf8("FC2_VENT"));
        FC2_VENT->setMinimumSize(QSize(75, 25));
        FC2_VENT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC2_VENT->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(FC2_VENT, 7, 4, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_183 = new QLabel(groupBox_8);
        label_183->setObjectName(QString::fromUtf8("label_183"));
        sizePolicy.setHeightForWidth(label_183->sizePolicy().hasHeightForWidth());
        label_183->setSizePolicy(sizePolicy);
        label_183->setFont(font1);
        label_183->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_183, 0, 0, 1, 1);

        FC2_WORK = new QLabel(groupBox_8);
        FC2_WORK->setObjectName(QString::fromUtf8("FC2_WORK"));
        FC2_WORK->setMinimumSize(QSize(75, 25));
        FC2_WORK->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC2_WORK->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(FC2_WORK, 0, 1, 1, 1);

        FC2_FAULT_P = new QLabel(groupBox_8);
        FC2_FAULT_P->setObjectName(QString::fromUtf8("FC2_FAULT_P"));
        FC2_FAULT_P->setMinimumSize(QSize(90, 25));
        FC2_FAULT_P->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC2_FAULT_P->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(FC2_FAULT_P, 0, 2, 1, 1);

        FC2_FAULT_T = new QLabel(groupBox_8);
        FC2_FAULT_T->setObjectName(QString::fromUtf8("FC2_FAULT_T"));
        FC2_FAULT_T->setMinimumSize(QSize(90, 25));
        FC2_FAULT_T->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC2_FAULT_T->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(FC2_FAULT_T, 1, 2, 1, 1);

        FC2_FAULT_V = new QLabel(groupBox_8);
        FC2_FAULT_V->setObjectName(QString::fromUtf8("FC2_FAULT_V"));
        FC2_FAULT_V->setMinimumSize(QSize(90, 25));
        FC2_FAULT_V->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        FC2_FAULT_V->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(FC2_FAULT_V, 1, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_6, 8, 0, 1, 5);


        gridLayout_8->addWidget(groupBox_8, 0, 3, 1, 1);

        gridLayout_8->setRowStretch(0, 2);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_14->addWidget(scrollArea, 1, 0, 1, 1);

        gridLayout_14->setRowStretch(0, 1);
        gridLayout_14->setRowStretch(1, 3);

        retranslateUi(monitor);

        QMetaObject::connectSlotsByName(monitor);
    } // setupUi

    void retranslateUi(QWidget *monitor)
    {
        monitor->setWindowTitle(QApplication::translate("monitor", "Form", nullptr));
        groupBox_5->setTitle(QApplication::translate("monitor", "FCU", nullptr));
        label_4->setText(QApplication::translate("monitor", "\344\272\247\345\223\201\350\247\204\346\240\274\347\274\226\347\240\201", nullptr));
        label_19->setText(QApplication::translate("monitor", "\347\241\254\344\273\266\347\211\210\346\234\254", nullptr));
        label_15->setText(QApplication::translate("monitor", "\347\224\237\345\221\275\344\277\241\345\217\267", nullptr));
        label_20->setText(QApplication::translate("monitor", "\350\275\257\344\273\266\347\211\210\346\234\254", nullptr));
        label_21->setText(QApplication::translate("monitor", "\347\263\273\347\273\237\345\220\257\345\212\250\345\221\275\344\273\244", nullptr));
        groupBox_30->setTitle(QApplication::translate("monitor", "\346\225\205\351\232\234\344\277\241\346\201\257", nullptr));
        label_44->setText(QApplication::translate("monitor", "\346\225\205\351\232\234\344\273\243\347\240\201", nullptr));
        FAULT_FC1->setText(QApplication::translate("monitor", "FC1\346\255\243\345\270\270", nullptr));
        FAULT_FC2->setText(QApplication::translate("monitor", "FC2\346\255\243\345\270\270", nullptr));
        FAULT_TK1->setText(QApplication::translate("monitor", "TK1\346\255\243\345\270\270", nullptr));
        FAULT_TK2->setText(QApplication::translate("monitor", "TK2\346\255\243\345\270\270", nullptr));
        FAULT_BAT->setText(QApplication::translate("monitor", "BAT\346\255\243\345\270\270", nullptr));
        FAULT_SYS->setText(QApplication::translate("monitor", "SYS\346\255\243\345\270\270", nullptr));
        FAULT_SHUTDOWN->setText(QApplication::translate("monitor", "\345\205\263\346\234\272\344\277\235\346\212\244", nullptr));
        FAULT_DCF->setText(QApplication::translate("monitor", "DCF\346\255\243\345\270\270", nullptr));
        groupBox_12->setTitle(QApplication::translate("monitor", "SYS", nullptr));
        label_144->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_145->setText(QApplication::translate("monitor", "\347\224\265\345\216\213", nullptr));
        label_149->setText(QApplication::translate("monitor", "V", nullptr));
        label_146->setText(QApplication::translate("monitor", "\347\224\265\346\265\201", nullptr));
        label_150->setText(QApplication::translate("monitor", "A", nullptr));
        label_147->setText(QApplication::translate("monitor", "\345\212\237\347\216\207", nullptr));
        label_151->setText(QApplication::translate("monitor", "W", nullptr));
        label_178->setText(QApplication::translate("monitor", "\350\275\246\351\200\237", nullptr));
        label_193->setText(QApplication::translate("monitor", "km/h", nullptr));
        label_148->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        groupBox_14->setTitle(QApplication::translate("monitor", "\347\216\257\345\242\203\344\277\241\346\201\257", nullptr));
        label_172->setText(QApplication::translate("monitor", "\346\260\242\346\260\224\346\265\223\345\272\2461", nullptr));
        label_155->setText(QApplication::translate("monitor", "PPM", nullptr));
        label_173->setText(QApplication::translate("monitor", "\346\260\242\346\260\224\346\265\223\345\272\2462", nullptr));
        label_169->setText(QApplication::translate("monitor", "PPM", nullptr));
        label_171->setText(QApplication::translate("monitor", "\347\216\257\345\242\2031\346\270\251\345\272\246", nullptr));
        label_174->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_170->setText(QApplication::translate("monitor", "\347\216\257\345\242\2031\346\271\277\345\272\246", nullptr));
        label_175->setText(QApplication::translate("monitor", "%", nullptr));
        label_153->setText(QApplication::translate("monitor", "\347\216\257\345\242\2032\346\270\251\345\272\246", nullptr));
        label_176->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_154->setText(QApplication::translate("monitor", "\347\216\257\345\242\2032\346\271\277\345\272\246", nullptr));
        label_177->setText(QApplication::translate("monitor", "%", nullptr));
        groupBox_11->setTitle(QApplication::translate("monitor", "BAT", nullptr));
        label_17->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_16->setText(QApplication::translate("monitor", "\347\224\265\345\216\213", nullptr));
        label_136->setText(QApplication::translate("monitor", "V", nullptr));
        label_18->setText(QApplication::translate("monitor", "\347\224\265\346\265\201", nullptr));
        label_137->setText(QApplication::translate("monitor", "A", nullptr));
        label_22->setText(QApplication::translate("monitor", "\345\212\237\347\216\207", nullptr));
        label_138->setText(QApplication::translate("monitor", "W", nullptr));
        label_23->setText(QApplication::translate("monitor", "\346\234\200\345\244\247\345\215\225\350\212\202\347\224\265\345\216\213", nullptr));
        label_139->setText(QApplication::translate("monitor", "mV", nullptr));
        label_24->setText(QApplication::translate("monitor", "\346\234\200\345\260\217\345\215\225\350\212\202\347\224\265\345\216\213", nullptr));
        label_140->setText(QApplication::translate("monitor", "mV", nullptr));
        label_131->setText(QApplication::translate("monitor", "\346\234\200\345\244\247\345\215\225\350\212\202\346\270\251\345\272\246", nullptr));
        label_141->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_132->setText(QApplication::translate("monitor", "\346\234\200\345\260\217\345\215\225\350\212\202\346\270\251\345\272\246", nullptr));
        label_142->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_134->setText(QApplication::translate("monitor", "SOC", nullptr));
        label_143->setText(QApplication::translate("monitor", "%", nullptr));
        label_25->setText(QApplication::translate("monitor", "\347\224\237\345\221\275\345\221\250\346\234\237\344\277\241\345\217\267", nullptr));
        label_135->setText(QApplication::translate("monitor", "\347\224\265\346\261\240\344\275\277\350\203\275\345\221\275\344\273\244", nullptr));
        label_133->setText(QApplication::translate("monitor", "\347\224\265\346\261\240\347\212\266\346\200\201", nullptr));
        BAT_MOS->setText(QApplication::translate("monitor", "MOS\345\205\263", nullptr));
        BAT_LOW_SOC->setText(QApplication::translate("monitor", "SOC<20%", nullptr));
        BAT_BATTERY_CONSISTENT->setText(QApplication::translate("monitor", "\347\224\265\350\212\257\347\224\265\345\216\213\344\270\215\344\270\200\350\207\264", nullptr));
        BAT_WORK->setText(QApplication::translate("monitor", "\346\224\276\347\224\265\344\270\255", nullptr));
        BAT_OVER_VOLTAGE->setText(QApplication::translate("monitor", "\347\224\265\346\261\240\350\277\207\345\216\213", nullptr));
        label_187->setText(QApplication::translate("monitor", "\345\267\245\344\275\234\347\212\266\346\200\201\357\274\232", nullptr));
        BAT_OVER_CURRENT->setText(QApplication::translate("monitor", "\350\277\207\346\265\201\357\274\210\347\237\255\350\267\257\357\274\211", nullptr));
        BAT_OVER_TEMP->setText(QApplication::translate("monitor", "\347\224\265\346\261\240\350\277\207\346\270\251", nullptr));
        BAT_SOC_MATCH->setText(QApplication::translate("monitor", "SOC\345\222\214\347\224\265\345\216\213\344\270\215\345\214\271\351\205\215", nullptr));
        label_188->setText(QApplication::translate("monitor", "\346\225\205\351\232\234\344\275\215\357\274\232", nullptr));
        groupBox_7->setTitle(QApplication::translate("monitor", "DCF", nullptr));
        label_47->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_48->setText(QApplication::translate("monitor", "\350\276\223\345\205\245\347\224\265\345\216\213", nullptr));
        label_81->setText(QApplication::translate("monitor", "V", nullptr));
        label_49->setText(QApplication::translate("monitor", "\350\276\223\345\205\245\347\224\265\346\265\201", nullptr));
        label_82->setText(QApplication::translate("monitor", "A", nullptr));
        label_50->setText(QApplication::translate("monitor", "\350\276\223\345\205\245\345\212\237\347\216\207", nullptr));
        label_83->setText(QApplication::translate("monitor", "W", nullptr));
        label_52->setText(QApplication::translate("monitor", "\350\276\223\345\207\272\347\224\265\345\216\213", nullptr));
        label_85->setText(QApplication::translate("monitor", "V", nullptr));
        label_53->setText(QApplication::translate("monitor", "\350\276\223\345\207\272\347\224\265\346\265\201", nullptr));
        label_86->setText(QApplication::translate("monitor", "A", nullptr));
        label_54->setText(QApplication::translate("monitor", "\350\276\223\345\207\272\345\212\237\347\216\207", nullptr));
        label_87->setText(QApplication::translate("monitor", "W", nullptr));
        label_55->setText(QApplication::translate("monitor", "\350\277\207\345\216\213\344\277\235\346\212\244\345\200\274", nullptr));
        label_88->setText(QApplication::translate("monitor", "V", nullptr));
        label_61->setText(QApplication::translate("monitor", "\346\254\240\345\216\213\344\277\235\346\212\244\345\200\274", nullptr));
        label_89->setText(QApplication::translate("monitor", "V", nullptr));
        label_56->setText(QApplication::translate("monitor", "\346\270\251\345\272\246", nullptr));
        label_90->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_57->setText(QApplication::translate("monitor", "\350\256\276\345\256\232\347\224\265\345\216\213", nullptr));
        label_91->setText(QApplication::translate("monitor", "V", nullptr));
        label_58->setText(QApplication::translate("monitor", "\350\256\276\345\256\232\347\224\265\346\265\201", nullptr));
        label_92->setText(QApplication::translate("monitor", "A", nullptr));
        label_59->setText(QApplication::translate("monitor", "\350\256\276\345\256\232\347\224\265\346\265\201\344\270\212\345\215\207\347\216\207", nullptr));
        label_93->setText(QApplication::translate("monitor", "A/S", nullptr));
        label_51->setText(QApplication::translate("monitor", "\347\224\237\345\221\275\344\277\241\345\217\267", nullptr));
        label_60->setText(QApplication::translate("monitor", "\344\275\277\350\203\275\345\221\275\344\273\244", nullptr));
        label_62->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        label_192->setText(QApplication::translate("monitor", "\345\267\245\344\275\234\347\212\266\346\200\201", nullptr));
        DCF_WORK->setText(QApplication::translate("monitor", "\345\276\205\346\234\272", nullptr));
        label_191->setText(QApplication::translate("monitor", "\346\225\205\351\232\234\344\277\241\346\201\257", nullptr));
        DCF_FAULT->setText(QApplication::translate("monitor", "\346\227\240\346\225\205\351\232\234", nullptr));
        groupBox_9->setTitle(QApplication::translate("monitor", "TK1", nullptr));
        label_113->setText(QApplication::translate("monitor", "\345\211\251\344\275\231\346\260\224\351\207\217", nullptr));
        label_112->setText(QApplication::translate("monitor", "\351\253\230\345\216\213\346\256\265\346\260\224\345\216\213", nullptr));
        label_115->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_118->setText(QApplication::translate("monitor", "MPa", nullptr));
        label_116->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        label_119->setText(QApplication::translate("monitor", "%", nullptr));
        label_117->setText(QApplication::translate("monitor", "kPa", nullptr));
        label_111->setText(QApplication::translate("monitor", "\344\270\255\345\216\213\346\256\265\346\260\224\345\216\213", nullptr));
        label_120->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_114->setText(QApplication::translate("monitor", "\346\270\251\345\272\246", nullptr));
        label_185->setText(QApplication::translate("monitor", "\346\260\224\347\223\266\347\212\266\346\200\201", nullptr));
        TK1_WORK->setText(QApplication::translate("monitor", "\346\224\276\346\260\224", nullptr));
        groupBox_10->setTitle(QApplication::translate("monitor", "TK2", nullptr));
        label_121->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_127->setText(QApplication::translate("monitor", "\344\270\255\345\216\213\346\256\265\346\260\224\345\216\213", nullptr));
        label_123->setText(QApplication::translate("monitor", "kPa", nullptr));
        label_126->setText(QApplication::translate("monitor", "\345\211\251\344\275\231\346\260\224\351\207\217", nullptr));
        label_129->setText(QApplication::translate("monitor", "%", nullptr));
        label_128->setText(QApplication::translate("monitor", "\351\253\230\345\216\213\346\256\265\346\260\224\345\216\213", nullptr));
        label_124->setText(QApplication::translate("monitor", "MPa", nullptr));
        label_125->setText(QApplication::translate("monitor", "\346\270\251\345\272\246", nullptr));
        label_130->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_122->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        label_186->setText(QApplication::translate("monitor", "\346\260\224\347\223\266\347\212\266\346\200\201", nullptr));
        TK2_WORK->setText(QApplication::translate("monitor", "\346\224\276\346\260\224", nullptr));
        groupBox_13->setTitle(QApplication::translate("monitor", "FCA", nullptr));
        label_161->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_162->setText(QApplication::translate("monitor", "\347\224\265\345\216\213", nullptr));
        label_164->setText(QApplication::translate("monitor", "V", nullptr));
        label_163->setText(QApplication::translate("monitor", "\347\224\265\346\265\201", nullptr));
        label_165->setText(QApplication::translate("monitor", "A", nullptr));
        label_159->setText(QApplication::translate("monitor", "\345\212\237\347\216\207", nullptr));
        label_166->setText(QApplication::translate("monitor", "W", nullptr));
        label_160->setText(QApplication::translate("monitor", "\350\256\276\345\256\232\347\224\265\346\265\201", nullptr));
        label_167->setText(QApplication::translate("monitor", "A", nullptr));
        label_157->setText(QApplication::translate("monitor", "\350\256\276\345\256\232\347\224\265\346\265\201\344\270\212\345\215\207\347\216\207", nullptr));
        label_168->setText(QApplication::translate("monitor", "A/S", nullptr));
        label_156->setText(QApplication::translate("monitor", "\347\224\237\345\221\275\344\277\241\345\217\267", nullptr));
        label_158->setText(QApplication::translate("monitor", "\344\275\277\350\203\275\344\277\241\345\217\267", nullptr));
        label_152->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        label_190->setText(QApplication::translate("monitor", "\345\267\245\344\275\234\347\212\266\346\200\201", nullptr));
        FCA_WORK->setText(QApplication::translate("monitor", "\345\276\205\346\234\272", nullptr));
        label_189->setText(QApplication::translate("monitor", "\346\225\205\351\232\234\344\277\241\346\201\257", nullptr));
        FCA_FAULT->setText(QApplication::translate("monitor", "\346\227\240\346\225\205\351\232\234", nullptr));
        groupBox_6->setTitle(QApplication::translate("monitor", "FC1", nullptr));
        label_26->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_27->setText(QApplication::translate("monitor", "\347\224\265\345\216\213", nullptr));
        label_68->setText(QApplication::translate("monitor", "V", nullptr));
        label_28->setText(QApplication::translate("monitor", "\347\224\265\346\265\201", nullptr));
        label_69->setText(QApplication::translate("monitor", "A", nullptr));
        label_29->setText(QApplication::translate("monitor", "\345\212\237\347\216\207", nullptr));
        label_70->setText(QApplication::translate("monitor", "W", nullptr));
        label_30->setText(QApplication::translate("monitor", "\350\277\233\346\260\224\345\216\213\345\212\233", nullptr));
        label_71->setText(QApplication::translate("monitor", "kPa", nullptr));
        label_38->setText(QApplication::translate("monitor", "\346\216\222\346\260\224\345\216\213\345\212\233", nullptr));
        label_72->setText(QApplication::translate("monitor", "kPa", nullptr));
        label_43->setText(QApplication::translate("monitor", "\347\264\257\347\247\257\345\217\221\347\224\265\351\207\217", nullptr));
        label_79->setText(QApplication::translate("monitor", "Ah", nullptr));
        label_45->setText(QApplication::translate("monitor", "\347\264\257\347\247\257\350\200\227\346\260\242\351\207\217", nullptr));
        label_80->setText(QApplication::translate("monitor", "g", nullptr));
        label_36->setText(QApplication::translate("monitor", "\351\243\216\346\211\2071\351\200\237\345\272\246", nullptr));
        label_73->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_37->setText(QApplication::translate("monitor", "\351\243\216\346\211\2072\351\200\237\345\272\246", nullptr));
        label_74->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_39->setText(QApplication::translate("monitor", "\351\243\216\346\211\2073\351\200\237\345\272\246", nullptr));
        label_75->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_41->setText(QApplication::translate("monitor", "\351\243\216\346\211\2074\351\200\237\345\272\246", nullptr));
        label_76->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_42->setText(QApplication::translate("monitor", "\346\270\251\345\272\2461", nullptr));
        label_77->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_40->setText(QApplication::translate("monitor", "\346\270\251\345\272\2462", nullptr));
        label_78->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_46->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        label_181->setText(QApplication::translate("monitor", "\346\216\222\346\260\224\347\224\265\347\243\201\351\230\200", nullptr));
        FC1_VENT->setText(QApplication::translate("monitor", "\345\274\200", nullptr));
        label_179->setText(QApplication::translate("monitor", "\345\267\245\344\275\234\347\212\266\346\200\201\357\274\232", nullptr));
        FC1_WORK->setText(QApplication::translate("monitor", "\346\227\240\346\225\205\351\232\234", nullptr));
        FC1_FAULT_P->setText(QApplication::translate("monitor", "\350\277\233\346\260\224\345\216\213\345\212\233\346\255\243\345\270\270", nullptr));
        FC1_FAULT_V->setText(QApplication::translate("monitor", "\347\224\265\345\240\206\347\224\265\345\216\213\346\255\243\345\270\270", nullptr));
        FC1_FAULT_T->setText(QApplication::translate("monitor", "\345\240\206\346\270\251\346\255\243\345\270\270", nullptr));
        groupBox_8->setTitle(QApplication::translate("monitor", "FC2", nullptr));
        label_31->setText(QApplication::translate("monitor", "\345\217\202\346\225\260", nullptr));
        label_32->setText(QApplication::translate("monitor", "\347\224\265\345\216\213", nullptr));
        label_84->setText(QApplication::translate("monitor", "V", nullptr));
        label_33->setText(QApplication::translate("monitor", "\347\224\265\346\265\201", nullptr));
        label_94->setText(QApplication::translate("monitor", "A", nullptr));
        label_34->setText(QApplication::translate("monitor", "\345\212\237\347\216\207", nullptr));
        label_95->setText(QApplication::translate("monitor", "W", nullptr));
        label_35->setText(QApplication::translate("monitor", "\350\277\233\346\260\224\345\216\213\345\212\233", nullptr));
        label_96->setText(QApplication::translate("monitor", "kPa", nullptr));
        label_63->setText(QApplication::translate("monitor", "\346\216\222\346\260\224\345\216\213\345\212\233", nullptr));
        label_97->setText(QApplication::translate("monitor", "kPa", nullptr));
        label_64->setText(QApplication::translate("monitor", "\351\243\216\346\211\2071\351\200\237\345\272\246", nullptr));
        label_98->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_65->setText(QApplication::translate("monitor", "\351\243\216\346\211\2072\351\200\237\345\272\246", nullptr));
        label_99->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_66->setText(QApplication::translate("monitor", "\351\243\216\346\211\2073\351\200\237\345\272\246", nullptr));
        label_100->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_110->setText(QApplication::translate("monitor", "\351\243\216\346\211\2074\351\200\237\345\272\246", nullptr));
        label_101->setText(QApplication::translate("monitor", "RPM", nullptr));
        label_67->setText(QApplication::translate("monitor", "\346\270\251\345\272\2461", nullptr));
        label_102->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_103->setText(QApplication::translate("monitor", "\346\270\251\345\272\2462", nullptr));
        label_104->setText(QApplication::translate("monitor", "\342\204\203", nullptr));
        label_105->setText(QApplication::translate("monitor", "\347\264\257\347\247\257\345\217\221\347\224\265\351\207\217", nullptr));
        label_106->setText(QApplication::translate("monitor", "Ah", nullptr));
        label_107->setText(QApplication::translate("monitor", "\347\264\257\347\247\257\350\200\227\346\260\242\351\207\217", nullptr));
        label_108->setText(QApplication::translate("monitor", "g", nullptr));
        label_109->setText(QApplication::translate("monitor", "\347\212\266\346\200\201", nullptr));
        label_182->setText(QApplication::translate("monitor", "\346\216\222\346\260\224\347\224\265\347\243\201\351\230\200", nullptr));
        FC2_VENT->setText(QApplication::translate("monitor", "\345\205\263", nullptr));
        label_183->setText(QApplication::translate("monitor", "\345\267\245\344\275\234\347\212\266\346\200\201\357\274\232", nullptr));
        FC2_WORK->setText(QApplication::translate("monitor", "\346\227\240\346\225\205\351\232\234", nullptr));
        FC2_FAULT_P->setText(QApplication::translate("monitor", "\350\277\233\346\260\224\345\216\213\345\212\233\346\255\243\345\270\270", nullptr));
        FC2_FAULT_T->setText(QApplication::translate("monitor", "\345\240\206\346\270\251\346\255\243\345\270\270", nullptr));
        FC2_FAULT_V->setText(QApplication::translate("monitor", "\347\207\203\346\226\231\347\224\265\346\261\240\347\224\265\345\216\213\346\255\243\345\270\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class monitor: public Ui_monitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOR_H
