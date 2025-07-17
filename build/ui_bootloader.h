/********************************************************************************
** Form generated from reading UI file 'bootloader.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOTLOADER_H
#define UI_BOOTLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bootloader
{
public:
    QGridLayout *gridLayout_8;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *new_baudrate_cbx;
    QPushButton *SetBaudrate_Btn;
    QPushButton *Check_Btn;
    QPushButton *ExcuteType_Btn;
    QPushButton *Erase_Btn;
    QPushButton *Download_Btn;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLCDNumber *Version;
    QGridLayout *gridLayout_4;
    QLabel *label_33;
    QLCDNumber *Version_2;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QLabel *Type;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QLineEdit *firmwareLineEdit;
    QPushButton *openDocument;
    QLabel *label_36;
    QLabel *fileSize;
    QLabel *label_38;
    QPushButton *UpdateFirmware_Btn;

    void setupUi(QWidget *bootloader)
    {
        if (bootloader->objectName().isEmpty())
            bootloader->setObjectName(QString::fromUtf8("bootloader"));
        bootloader->resize(1109, 664);
        gridLayout_8 = new QGridLayout(bootloader);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        textBrowser = new QTextBrowser(bootloader);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 200));

        gridLayout_8->addWidget(textBrowser, 3, 0, 1, 1);

        groupBox_7 = new QGroupBox(bootloader);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	border:1px solid #29d8e1;\n"
"	margin-top: 2.3ex;\n"
"}\n"
"QGroupBox::title\n"
"{\n"
"	subcontrol-origin:margin;\n"
"	left: 10px;\n"
"}"));
        groupBox_7->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_7);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        new_baudrate_cbx = new QComboBox(groupBox_7);
        new_baudrate_cbx->addItem(QString());
        new_baudrate_cbx->addItem(QString());
        new_baudrate_cbx->addItem(QString());
        new_baudrate_cbx->addItem(QString());
        new_baudrate_cbx->addItem(QString());
        new_baudrate_cbx->addItem(QString());
        new_baudrate_cbx->setObjectName(QString::fromUtf8("new_baudrate_cbx"));
        sizePolicy.setHeightForWidth(new_baudrate_cbx->sizePolicy().hasHeightForWidth());
        new_baudrate_cbx->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(new_baudrate_cbx, 0, 1, 1, 1);

        SetBaudrate_Btn = new QPushButton(groupBox_7);
        SetBaudrate_Btn->setObjectName(QString::fromUtf8("SetBaudrate_Btn"));
        sizePolicy.setHeightForWidth(SetBaudrate_Btn->sizePolicy().hasHeightForWidth());
        SetBaudrate_Btn->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        SetBaudrate_Btn->setFont(font);

        gridLayout_2->addWidget(SetBaudrate_Btn, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        Check_Btn = new QPushButton(groupBox_7);
        Check_Btn->setObjectName(QString::fromUtf8("Check_Btn"));
        sizePolicy.setHeightForWidth(Check_Btn->sizePolicy().hasHeightForWidth());
        Check_Btn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Check_Btn, 0, 1, 1, 1);

        ExcuteType_Btn = new QPushButton(groupBox_7);
        ExcuteType_Btn->setObjectName(QString::fromUtf8("ExcuteType_Btn"));
        sizePolicy.setHeightForWidth(ExcuteType_Btn->sizePolicy().hasHeightForWidth());
        ExcuteType_Btn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(ExcuteType_Btn, 0, 2, 1, 1);

        Erase_Btn = new QPushButton(groupBox_7);
        Erase_Btn->setObjectName(QString::fromUtf8("Erase_Btn"));
        sizePolicy.setHeightForWidth(Erase_Btn->sizePolicy().hasHeightForWidth());
        Erase_Btn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Erase_Btn, 0, 3, 1, 1);

        Download_Btn = new QPushButton(groupBox_7);
        Download_Btn->setObjectName(QString::fromUtf8("Download_Btn"));
        sizePolicy.setHeightForWidth(Download_Btn->sizePolicy().hasHeightForWidth());
        Download_Btn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Download_Btn, 0, 4, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(bootloader);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox{border:1px solid #29d8e1;}"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	border:1px solid #29d8e1;\n"
"	margin-top: 2.3ex;\n"
"}\n"
"QGroupBox::title\n"
"{\n"
"	subcontrol-origin:margin;\n"
"	left: 10px;\n"
"}"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        Version = new QLCDNumber(groupBox_6);
        Version->setObjectName(QString::fromUtf8("Version"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Version->sizePolicy().hasHeightForWidth());
        Version->setSizePolicy(sizePolicy1);
        Version->setMinimumSize(QSize(150, 30));
        Version->setSmallDecimalPoint(true);
        Version->setDigitCount(4);
        Version->setMode(QLCDNumber::Dec);

        gridLayout->addWidget(Version, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_33 = new QLabel(groupBox_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_33, 0, 0, 1, 1);

        Version_2 = new QLCDNumber(groupBox_6);
        Version_2->setObjectName(QString::fromUtf8("Version_2"));
        sizePolicy1.setHeightForWidth(Version_2->sizePolicy().hasHeightForWidth());
        Version_2->setSizePolicy(sizePolicy1);
        Version_2->setMinimumSize(QSize(150, 30));
        Version_2->setSmallDecimalPoint(true);
        Version_2->setDigitCount(4);
        Version_2->setMode(QLCDNumber::Dec);

        gridLayout_4->addWidget(Version_2, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        Type = new QLabel(groupBox_6);
        Type->setObjectName(QString::fromUtf8("Type"));
        Type->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(20);
        Type->setFont(font1);
        Type->setStyleSheet(QString::fromUtf8("QLabel{border:1px solid #242424;}"));
        Type->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(Type, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 2, 1, 1);


        gridLayout_8->addWidget(groupBox_6, 2, 0, 1, 1);

        groupBox = new QGroupBox(bootloader);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	border:1px solid #29d8e1;\n"
"	margin-top: 2.3ex;\n"
"}\n"
"QGroupBox::title\n"
"{\n"
"	subcontrol-origin:margin;\n"
"	left: 10px;\n"
"}"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        firmwareLineEdit = new QLineEdit(groupBox);
        firmwareLineEdit->setObjectName(QString::fromUtf8("firmwareLineEdit"));
        firmwareLineEdit->setReadOnly(true);

        gridLayout_7->addWidget(firmwareLineEdit, 0, 1, 1, 1);

        openDocument = new QPushButton(groupBox);
        openDocument->setObjectName(QString::fromUtf8("openDocument"));

        gridLayout_7->addWidget(openDocument, 0, 2, 1, 1);

        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_7->addWidget(label_36, 0, 3, 1, 1);

        fileSize = new QLabel(groupBox);
        fileSize->setObjectName(QString::fromUtf8("fileSize"));
        fileSize->setMinimumSize(QSize(50, 0));
        fileSize->setStyleSheet(QString::fromUtf8("QLabel{border:1px solid #242424;}"));

        gridLayout_7->addWidget(fileSize, 0, 4, 1, 1);

        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_7->addWidget(label_38, 0, 5, 1, 1);

        UpdateFirmware_Btn = new QPushButton(groupBox);
        UpdateFirmware_Btn->setObjectName(QString::fromUtf8("UpdateFirmware_Btn"));
        sizePolicy.setHeightForWidth(UpdateFirmware_Btn->sizePolicy().hasHeightForWidth());
        UpdateFirmware_Btn->setSizePolicy(sizePolicy);
        UpdateFirmware_Btn->setMinimumSize(QSize(100, 50));

        gridLayout_7->addWidget(UpdateFirmware_Btn, 0, 6, 1, 1);


        gridLayout_8->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(bootloader);

        QMetaObject::connectSlotsByName(bootloader);
    } // setupUi

    void retranslateUi(QWidget *bootloader)
    {
        bootloader->setWindowTitle(QApplication::translate("bootloader", "Form", nullptr));
        groupBox_7->setTitle(QApplication::translate("bootloader", "\346\211\251\345\261\225\345\212\237\350\203\275", nullptr));
        label_3->setText(QApplication::translate("bootloader", "\346\226\260\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        new_baudrate_cbx->setItemText(0, QApplication::translate("bootloader", "50Kbps", nullptr));
        new_baudrate_cbx->setItemText(1, QApplication::translate("bootloader", "100Kbps", nullptr));
        new_baudrate_cbx->setItemText(2, QApplication::translate("bootloader", "200Kbps", nullptr));
        new_baudrate_cbx->setItemText(3, QApplication::translate("bootloader", "250Kbps", nullptr));
        new_baudrate_cbx->setItemText(4, QApplication::translate("bootloader", "500Kbps", nullptr));
        new_baudrate_cbx->setItemText(5, QApplication::translate("bootloader", "1000Kbps", nullptr));

        SetBaudrate_Btn->setText(QApplication::translate("bootloader", "\350\256\276\347\275\256", nullptr));
        Check_Btn->setText(QApplication::translate("bootloader", "\350\216\267\345\217\226\345\233\272\344\273\266\347\212\266\346\200\201", nullptr));
        ExcuteType_Btn->setText(QApplication::translate("bootloader", "\345\210\207\346\215\242\345\233\272\344\273\266\347\261\273\345\236\213", nullptr));
        Erase_Btn->setText(QApplication::translate("bootloader", "\346\223\246\351\231\244", nullptr));
        Download_Btn->setText(QApplication::translate("bootloader", "\344\270\213\350\275\275", nullptr));
        groupBox_6->setTitle(QString());
        label_8->setText(QApplication::translate("bootloader", "\347\241\254\344\273\266\347\211\210\346\234\254", nullptr));
        label_33->setText(QApplication::translate("bootloader", "\350\275\257\344\273\266\347\211\210\346\234\254", nullptr));
        label_9->setText(QApplication::translate("bootloader", "\345\275\223\345\211\215\345\233\272\344\273\266\347\261\273\345\236\213", nullptr));
        Type->setText(QString());
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("bootloader", "\345\215\207\347\272\247\345\233\272\344\273\266\350\267\257\345\276\204\357\274\232", nullptr));
        openDocument->setText(QApplication::translate("bootloader", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        label_36->setText(QApplication::translate("bootloader", "\345\244\247\345\260\217:", nullptr));
        fileSize->setText(QString());
        label_38->setText(QApplication::translate("bootloader", " KB", nullptr));
        UpdateFirmware_Btn->setText(QApplication::translate("bootloader", "\345\274\200\345\247\213\347\203\247\345\206\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bootloader: public Ui_bootloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOTLOADER_H
