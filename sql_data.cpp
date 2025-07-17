#include "sql_data.h"
#include "ui_sql_data.h"

sql_data::sql_data(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::sql_data)
{
    ui->setupUi(this);
    QPushButton* btn = new QPushButton();
    btn->setText(tr("导出"));

    ui->tableWidget->setCellWidget(0, 2, btn);
    ui->tableWidget->setCellWidget(1, 2, btn);
    ui->tableWidget->setCellWidget(2, 2, btn);
    ui->tableWidget->setCellWidget(3, 2, btn);
    ui->tableWidget->setCellWidget(4, 2, btn);
    ui->tableWidget->setCellWidget(5, 2, btn);
    ui->tableWidget->setCellWidget(6, 2, btn);
    ui->tableWidget->setCellWidget(7, 2, btn);
    ui->tableWidget->setCellWidget(8, 2, btn);
    ui->tableWidget->setCellWidget(9, 2, btn);
    ui->tableWidget->setCellWidget(10, 2, btn);
    ui->tableWidget->setCellWidget(11, 2, btn);
    ui->tableWidget->setCellWidget(12, 2, btn);
    ui->tableWidget->setCellWidget(13, 2, btn);
    ui->tableWidget->setCellWidget(14, 2, btn);
    ui->tableWidget->setCellWidget(15, 2, btn);
    ui->tableWidget->setCellWidget(16, 2, btn);
    ui->tableWidget->setCellWidget(17, 2, btn);
}

sql_data::~sql_data()
{
    delete ui;
}
