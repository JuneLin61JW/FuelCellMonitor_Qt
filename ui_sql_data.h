/********************************************************************************
** Form generated from reading UI file 'sql_data.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQL_DATA_H
#define UI_SQL_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sql_data
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *sql_data)
    {
        if (sql_data->objectName().isEmpty())
            sql_data->setObjectName(QString::fromUtf8("sql_data"));
        sql_data->resize(1298, 608);
        gridLayout_4 = new QGridLayout(sql_data);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(sql_data);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 24)
            tableWidget->setRowCount(24);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(24);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(410);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);

        retranslateUi(sql_data);

        QMetaObject::connectSlotsByName(sql_data);
    } // setupUi

    void retranslateUi(QWidget *sql_data)
    {
        sql_data->setWindowTitle(QApplication::translate("sql_data", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("sql_data", "\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("sql_data", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("sql_data", "\345\210\233\345\273\272\346\227\266\351\227\264", nullptr));
        pushButton->setText(QApplication::translate("sql_data", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sql_data: public Ui_sql_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQL_DATA_H
