/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <bootloader.h>
#include <monitor.h>
#include <sql_data.h>
#include <write_data.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *standby;
    QAction *normal_on;
    QAction *low_on;
    QAction *fc_check1;
    QAction *fc_check2;
    QAction *sys_reset;
    QAction *dev_con;
    QAction *dev_discon;
    QAction *save_data;
    QAction *enter_bl;
    QAction *write_widget;
    QAction *monitor_widget;
    QAction *history_data;
    QAction *normal_off;
    QAction *low_off;
    QAction *bat_on;
    QAction *bat_off;
    QAction *fca_on;
    QAction *fca_off;
    QAction *dcf_on;
    QAction *dcf_off;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_68;
    QWidget *port_status;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_7;
    QLabel *label_7;
    QLabel *collection_led;
    QGridLayout *gridLayout_6;
    QLabel *label_11;
    QLabel *port_name;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QLabel *connect_led;
    QWidget *database_status;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *database_name;
    QStackedWidget *stackedWidget;
    monitor *page;
    write_data *page_2;
    bootloader *page_3;
    sql_data *page_4;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_bat;
    QMenu *menu_fca;
    QMenu *menu_dc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1330, 940);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1330, 940));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setMouseTracking(true);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow,tabWidget_2 {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.318408 rgba(236, 233, 230, 255), stop:1 rgba(255, 255, 255, 255));}\n"
"\n"
"QMenu {\n"
"	color:black;\n"
"	background-color:white; \n"
"	border-radius:3px;\n"
"	padding:5px;\n"
"	margin:6px;\n"
"}\n"
"QMenu::item:text { \n"
"	padding-left:20px;\n"
"	padding-right:20px;\n"
"}\n"
"QMenu::item:selected{ \n"
"	color:#1aa3ff;\n"
"	background-color: #e5f5ff;\n"
"	border-radius:3px;\n"
"}\n"
"QMenu::separator{\n"
"	height:1px;\n"
"	background:#bbbbbb;\n"
"	margin:5px;\n"
"	margin-left:10px;\n"
"	margin-right:10px;\n"
"}\n"
"QMenuBar{\n"
"	background-color:#bce2e8;\n"
"} \n"
"QMenuBar::item{\n"
"	spacing:10px;\n"
"	padding:10 20px;\n"
"	border-radius:4px;\n"
"}\n"
" \n"
""));
        standby = new QAction(MainWindow);
        standby->setObjectName(QString::fromUtf8("standby"));
        standby->setIconText(QString::fromUtf8("\345\276\205\346\234\272\347\212\266\346\200\201"));
        QFont font;
        standby->setFont(font);
        standby->setIconVisibleInMenu(true);
        normal_on = new QAction(MainWindow);
        normal_on->setObjectName(QString::fromUtf8("normal_on"));
        normal_on->setFont(font);
        low_on = new QAction(MainWindow);
        low_on->setObjectName(QString::fromUtf8("low_on"));
        low_on->setFont(font);
        fc_check1 = new QAction(MainWindow);
        fc_check1->setObjectName(QString::fromUtf8("fc_check1"));
        fc_check1->setFont(font);
        fc_check2 = new QAction(MainWindow);
        fc_check2->setObjectName(QString::fromUtf8("fc_check2"));
        fc_check2->setFont(font);
        sys_reset = new QAction(MainWindow);
        sys_reset->setObjectName(QString::fromUtf8("sys_reset"));
        sys_reset->setFont(font);
        dev_con = new QAction(MainWindow);
        dev_con->setObjectName(QString::fromUtf8("dev_con"));
        dev_discon = new QAction(MainWindow);
        dev_discon->setObjectName(QString::fromUtf8("dev_discon"));
        save_data = new QAction(MainWindow);
        save_data->setObjectName(QString::fromUtf8("save_data"));
        save_data->setCheckable(true);
        save_data->setChecked(true);
        enter_bl = new QAction(MainWindow);
        enter_bl->setObjectName(QString::fromUtf8("enter_bl"));
        write_widget = new QAction(MainWindow);
        write_widget->setObjectName(QString::fromUtf8("write_widget"));
        monitor_widget = new QAction(MainWindow);
        monitor_widget->setObjectName(QString::fromUtf8("monitor_widget"));
        history_data = new QAction(MainWindow);
        history_data->setObjectName(QString::fromUtf8("history_data"));
        normal_off = new QAction(MainWindow);
        normal_off->setObjectName(QString::fromUtf8("normal_off"));
        low_off = new QAction(MainWindow);
        low_off->setObjectName(QString::fromUtf8("low_off"));
        bat_on = new QAction(MainWindow);
        bat_on->setObjectName(QString::fromUtf8("bat_on"));
        bat_off = new QAction(MainWindow);
        bat_off->setObjectName(QString::fromUtf8("bat_off"));
        fca_on = new QAction(MainWindow);
        fca_on->setObjectName(QString::fromUtf8("fca_on"));
        fca_off = new QAction(MainWindow);
        fca_off->setObjectName(QString::fromUtf8("fca_off"));
        dcf_on = new QAction(MainWindow);
        dcf_on->setObjectName(QString::fromUtf8("dcf_on"));
        dcf_off = new QAction(MainWindow);
        dcf_off->setObjectName(QString::fromUtf8("dcf_off"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(true);
        centralwidget->setStyleSheet(QString::fromUtf8("font: 25 9pt \"Microsoft YaHei\";"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_68 = new QGridLayout();
        gridLayout_68->setObjectName(QString::fromUtf8("gridLayout_68"));
        port_status = new QWidget(centralwidget);
        port_status->setObjectName(QString::fromUtf8("port_status"));
        gridLayout_4 = new QGridLayout(port_status);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(20);
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(12);
        label_7 = new QLabel(port_status);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_7->addWidget(label_7, 0, 0, 1, 1);

        collection_led = new QLabel(port_status);
        collection_led->setObjectName(QString::fromUtf8("collection_led"));

        gridLayout_7->addWidget(collection_led, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_7, 0, 2, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(12);
        label_11 = new QLabel(port_status);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 0, 0, 1, 1);

        port_name = new QLabel(port_status);
        port_name->setObjectName(QString::fromUtf8("port_name"));

        gridLayout_6->addWidget(port_name, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(12);
        gridLayout_8->setVerticalSpacing(7);
        label_6 = new QLabel(port_status);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        connect_led = new QLabel(port_status);
        connect_led->setObjectName(QString::fromUtf8("connect_led"));

        gridLayout_8->addWidget(connect_led, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_8, 0, 1, 1, 1);


        gridLayout_68->addWidget(port_status, 0, 0, 1, 1);

        database_status = new QWidget(centralwidget);
        database_status->setObjectName(QString::fromUtf8("database_status"));
        gridLayout_3 = new QGridLayout(database_status);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(7);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        label = new QLabel(database_status);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        database_name = new QLabel(database_status);
        database_name->setObjectName(QString::fromUtf8("database_name"));

        gridLayout->addWidget(database_name, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_68->addWidget(database_status, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_68, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMouseTracking(true);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new monitor();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new write_data();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setMouseTracking(true);
        stackedWidget->addWidget(page_2);
        page_3 = new bootloader();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new sql_data();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("font: 25 9pt \"Microsoft YaHei\";"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1330, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(3);
        menuBar->setFont(font1);
        menuBar->setStyleSheet(QString::fromUtf8("font: 25 9pt \"Microsoft YaHei\";\n"
"QMenuBar{background-color:rgba(236, 233, 230, 255);} \n"
""));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(1073, 140, 137, 113));
        menu->setFont(font1);
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_2->setFont(font1);
        menu_2->setToolTipsVisible(true);
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_3->setGeometry(QRect(1149, 140, 137, 392));
        menu_3->setFont(font1);
        menu_3->setStyleSheet(QString::fromUtf8(""));
        menu_3->setSeparatorsCollapsible(false);
        menu_3->setToolTipsVisible(false);
        menu_bat = new QMenu(menu_3);
        menu_bat->setObjectName(QString::fromUtf8("menu_bat"));
        menu_fca = new QMenu(menu_3);
        menu_fca->setObjectName(QString::fromUtf8("menu_fca"));
        menu_dc = new QMenu(menu_3);
        menu_dc->setObjectName(QString::fromUtf8("menu_dc"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(dev_con);
        menu->addSeparator();
        menu->addAction(dev_discon);
        menu_2->addAction(save_data);
        menu_2->addSeparator();
        menu_2->addAction(monitor_widget);
        menu_2->addSeparator();
        menu_2->addAction(write_widget);
        menu_2->addSeparator();
        menu_2->addAction(enter_bl);
        menu_2->addSeparator();
        menu_2->addAction(history_data);
        menu_3->addAction(standby);
        menu_3->addSeparator();
        menu_3->addAction(normal_on);
        menu_3->addSeparator();
        menu_3->addAction(low_on);
        menu_3->addSeparator();
        menu_3->addAction(normal_off);
        menu_3->addSeparator();
        menu_3->addAction(low_off);
        menu_3->addSeparator();
        menu_3->addAction(fc_check1);
        menu_3->addSeparator();
        menu_3->addAction(fc_check2);
        menu_3->addSeparator();
        menu_3->addAction(sys_reset);
        menu_3->addSeparator();
        menu_3->addAction(menu_bat->menuAction());
        menu_3->addSeparator();
        menu_3->addAction(menu_dc->menuAction());
        menu_3->addSeparator();
        menu_3->addAction(menu_fca->menuAction());
        menu_bat->addAction(bat_on);
        menu_bat->addSeparator();
        menu_bat->addAction(bat_off);
        menu_fca->addAction(fca_on);
        menu_fca->addSeparator();
        menu_fca->addAction(fca_off);
        menu_dc->addAction(dcf_on);
        menu_dc->addSeparator();
        menu_dc->addAction(dcf_off);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\207\203\346\226\231\347\224\265\346\261\240\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        standby->setText(QApplication::translate("MainWindow", "\345\276\205\346\234\272\347\212\266\346\200\201", nullptr));
        normal_on->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270\345\274\200\346\234\272", nullptr));
        low_on->setText(QApplication::translate("MainWindow", "\344\275\216\346\270\251\345\274\200\346\234\272", nullptr));
        fc_check1->setText(QApplication::translate("MainWindow", "FC1\350\207\252\346\243\200", nullptr));
        fc_check2->setText(QApplication::translate("MainWindow", "FC2\350\207\252\346\243\200", nullptr));
        sys_reset->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\345\244\215\344\275\215", nullptr));
        dev_con->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\350\277\236\346\216\245", nullptr));
        dev_discon->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\346\226\255\345\274\200", nullptr));
        save_data->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\277\235\345\255\230", nullptr));
        enter_bl->setText(QApplication::translate("MainWindow", "\347\203\247\345\206\231\347\252\227\345\217\243", nullptr));
        write_widget->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245\347\252\227\345\217\243", nullptr));
        monitor_widget->setText(QApplication::translate("MainWindow", "\347\233\221\346\265\213\346\225\260\346\215\256", nullptr));
        history_data->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", nullptr));
        normal_off->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270\345\205\263\346\234\272", nullptr));
        low_off->setText(QApplication::translate("MainWindow", "\344\275\216\346\270\251\345\205\263\346\234\272", nullptr));
        bat_on->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        bat_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        fca_on->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        fca_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        dcf_on->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        dcf_off->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\267\245\344\275\234\347\212\266\346\200\201:", nullptr));
        collection_led->setText(QApplication::translate("MainWindow", "\347\201\257", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\220\215\347\247\260:", nullptr));
        port_name->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\351\200\232\350\256\257\347\212\266\346\200\201:", nullptr));
        connect_led->setText(QApplication::translate("MainWindow", "\347\201\257", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        database_name->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\351\205\215\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        menu_2->setToolTip(QApplication::translate("MainWindow", "\345\206\231\345\205\245\345\217\202\346\225\260\347\232\204\351\205\215\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\205\266\344\273\226\345\212\237\350\203\275", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\346\216\247\345\210\266\345\221\275\344\273\244", nullptr));
        menu_bat->setTitle(QApplication::translate("MainWindow", "BAT\344\275\277\350\203\275", nullptr));
        menu_fca->setTitle(QApplication::translate("MainWindow", "FCA\344\275\277\350\203\275", nullptr));
        menu_dc->setTitle(QApplication::translate("MainWindow", "DCF\344\275\277\350\203\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
