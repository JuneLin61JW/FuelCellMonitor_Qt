/********************************************************************************
** Form generated from reading UI file 'port.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORT_H
#define UI_PORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_port
{
public:
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *can_channel;
    QComboBox *can_index;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *can_tpye;
    QLabel *label;
    QComboBox *can_baudrate;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *serial_baudrate;
    QComboBox *serial_com;
    QPushButton *confirm;
    QPushButton *cancel;
    QPushButton *refresh;

    void setupUi(QDialog *port)
    {
        if (port->objectName().isEmpty())
            port->setObjectName(QString::fromUtf8("port"));
        port->resize(388, 259);
        port->setStyleSheet(QString::fromUtf8("font: 25 9pt \"Microsoft YaHei\";"));
        gridLayout_5 = new QGridLayout(port);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tabWidget = new QTabWidget(port);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        can_channel = new QComboBox(tab);
        can_channel->addItem(QString());
        can_channel->addItem(QString());
        can_channel->setObjectName(QString::fromUtf8("can_channel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(can_channel->sizePolicy().hasHeightForWidth());
        can_channel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(can_channel, 3, 1, 1, 1);

        can_index = new QComboBox(tab);
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->addItem(QString());
        can_index->setObjectName(QString::fromUtf8("can_index"));
        sizePolicy.setHeightForWidth(can_index->sizePolicy().hasHeightForWidth());
        can_index->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        can_index->setFont(font);
        can_index->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(can_index, 1, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        can_tpye = new QComboBox(tab);
        can_tpye->addItem(QString());
        can_tpye->setObjectName(QString::fromUtf8("can_tpye"));
        can_tpye->setEnabled(true);
        sizePolicy.setHeightForWidth(can_tpye->sizePolicy().hasHeightForWidth());
        can_tpye->setSizePolicy(sizePolicy);
        can_tpye->setFont(font);
        can_tpye->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(can_tpye, 1, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        can_baudrate = new QComboBox(tab);
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->addItem(QString());
        can_baudrate->setObjectName(QString::fromUtf8("can_baudrate"));
        sizePolicy.setHeightForWidth(can_baudrate->sizePolicy().hasHeightForWidth());
        can_baudrate->setSizePolicy(sizePolicy);
        can_baudrate->setFont(font);
        can_baudrate->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(can_baudrate, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        serial_baudrate = new QComboBox(tab_2);
        serial_baudrate->addItem(QString());
        serial_baudrate->addItem(QString());
        serial_baudrate->addItem(QString());
        serial_baudrate->addItem(QString());
        serial_baudrate->addItem(QString());
        serial_baudrate->setObjectName(QString::fromUtf8("serial_baudrate"));
        sizePolicy.setHeightForWidth(serial_baudrate->sizePolicy().hasHeightForWidth());
        serial_baudrate->setSizePolicy(sizePolicy);
        serial_baudrate->setFont(font);
        serial_baudrate->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(serial_baudrate, 1, 1, 1, 1);

        serial_com = new QComboBox(tab_2);
        serial_com->addItem(QString());
        serial_com->setObjectName(QString::fromUtf8("serial_com"));
        serial_com->setEnabled(true);
        sizePolicy.setHeightForWidth(serial_com->sizePolicy().hasHeightForWidth());
        serial_com->setSizePolicy(sizePolicy);
        serial_com->setFont(font);
        serial_com->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(serial_com, 1, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 1);

        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 3);

        confirm = new QPushButton(port);
        confirm->setObjectName(QString::fromUtf8("confirm"));

        gridLayout_5->addWidget(confirm, 1, 1, 1, 1);

        cancel = new QPushButton(port);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        gridLayout_5->addWidget(cancel, 1, 2, 1, 1);

        refresh = new QPushButton(port);
        refresh->setObjectName(QString::fromUtf8("refresh"));

        gridLayout_5->addWidget(refresh, 1, 0, 1, 1);


        retranslateUi(port);
        QObject::connect(cancel, SIGNAL(clicked()), port, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        can_baudrate->setCurrentIndex(8);
        serial_baudrate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(port);
    } // setupUi

    void retranslateUi(QDialog *port)
    {
        port->setWindowTitle(QApplication::translate("port", "\350\277\236\346\216\245\350\256\276\347\275\256", nullptr));
        can_channel->setItemText(0, QApplication::translate("port", "1", nullptr));
        can_channel->setItemText(1, QApplication::translate("port", "2", nullptr));

        can_index->setItemText(0, QApplication::translate("port", "0", nullptr));
        can_index->setItemText(1, QApplication::translate("port", "1", nullptr));
        can_index->setItemText(2, QApplication::translate("port", "2", nullptr));
        can_index->setItemText(3, QApplication::translate("port", "3", nullptr));
        can_index->setItemText(4, QApplication::translate("port", "4", nullptr));
        can_index->setItemText(5, QApplication::translate("port", "5", nullptr));
        can_index->setItemText(6, QApplication::translate("port", "6", nullptr));
        can_index->setItemText(7, QApplication::translate("port", "7", nullptr));
        can_index->setItemText(8, QApplication::translate("port", "8", nullptr));
        can_index->setItemText(9, QApplication::translate("port", "9", nullptr));
        can_index->setItemText(10, QApplication::translate("port", "10", nullptr));
        can_index->setItemText(11, QApplication::translate("port", "11", nullptr));
        can_index->setItemText(12, QApplication::translate("port", "12", nullptr));
        can_index->setItemText(13, QApplication::translate("port", "13", nullptr));

        label_4->setText(QApplication::translate("port", "\351\200\232\351\201\223\345\217\267:", nullptr));
        label_2->setText(QApplication::translate("port", "\350\256\276\345\244\207\347\264\242\345\274\225\357\274\232", nullptr));
        label_3->setText(QApplication::translate("port", "\346\263\242\347\211\271\347\216\207:", nullptr));
        can_tpye->setItemText(0, QApplication::translate("port", "CANalyst-II", nullptr));

        label->setText(QApplication::translate("port", "\350\256\276\345\244\207\347\261\273\345\236\213\357\274\232", nullptr));
        can_baudrate->setItemText(0, QApplication::translate("port", "10Kbps", nullptr));
        can_baudrate->setItemText(1, QApplication::translate("port", "20Kbps", nullptr));
        can_baudrate->setItemText(2, QApplication::translate("port", "40Kbps", nullptr));
        can_baudrate->setItemText(3, QApplication::translate("port", "50Kbps", nullptr));
        can_baudrate->setItemText(4, QApplication::translate("port", "80Kbps", nullptr));
        can_baudrate->setItemText(5, QApplication::translate("port", "100Kbps", nullptr));
        can_baudrate->setItemText(6, QApplication::translate("port", "125Kbps", nullptr));
        can_baudrate->setItemText(7, QApplication::translate("port", "200Kbps", nullptr));
        can_baudrate->setItemText(8, QApplication::translate("port", "250Kbps", nullptr));
        can_baudrate->setItemText(9, QApplication::translate("port", "400Kbps", nullptr));
        can_baudrate->setItemText(10, QApplication::translate("port", "500Kbps", nullptr));
        can_baudrate->setItemText(11, QApplication::translate("port", "666Kbps", nullptr));
        can_baudrate->setItemText(12, QApplication::translate("port", "800Kbps", nullptr));
        can_baudrate->setItemText(13, QApplication::translate("port", "1000Kbps", nullptr));
        can_baudrate->setItemText(14, QApplication::translate("port", "33.33Kbps", nullptr));
        can_baudrate->setItemText(15, QApplication::translate("port", "66.66Kbps", nullptr));
        can_baudrate->setItemText(16, QApplication::translate("port", "83.33Kbps", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("port", "CAN", nullptr));
        label_5->setText(QApplication::translate("port", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_6->setText(QApplication::translate("port", "\346\263\242\347\211\271\347\216\207:", nullptr));
        serial_baudrate->setItemText(0, QApplication::translate("port", "9600", nullptr));
        serial_baudrate->setItemText(1, QApplication::translate("port", "19200", nullptr));
        serial_baudrate->setItemText(2, QApplication::translate("port", "38400", nullptr));
        serial_baudrate->setItemText(3, QApplication::translate("port", "57600", nullptr));
        serial_baudrate->setItemText(4, QApplication::translate("port", "115200", nullptr));

        serial_com->setItemText(0, QApplication::translate("port", "COM1", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("port", "\344\270\262\345\217\243", nullptr));
        confirm->setText(QApplication::translate("port", "\347\241\256\350\256\244", nullptr));
        cancel->setText(QApplication::translate("port", "\345\217\226\346\266\210", nullptr));
        refresh->setText(QApplication::translate("port", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class port: public Ui_port {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORT_H
