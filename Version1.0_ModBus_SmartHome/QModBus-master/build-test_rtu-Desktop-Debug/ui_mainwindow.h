/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *device_label;
    QLineEdit *device_line_edit;
    QLabel *slave_label;
    QLineEdit *slave_line_edit;
    QLabel *baudrate_label;
    QComboBox *baudrate_combo_box;
    QHBoxLayout *horizontalLayout_2;
    QLabel *parity_label;
    QComboBox *parity_combo_box;
    QSpacerItem *horizontalSpacer_2;
    QLabel *data_bits_label;
    QComboBox *data_bits_combo_box;
    QSpacerItem *horizontalSpacer_3;
    QLabel *stop_bit_label;
    QComboBox *stop_bits_combo_box;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rd_reg_label;
    QLineEdit *rd_reg_line_edit;
    QLabel *rd_count_label;
    QLineEdit *rd_count_line_edit;
    QPushButton *rd_button;
    QHBoxLayout *horizontalLayout_4;
    QLabel *wr_reg_label;
    QLineEdit *wr_reg_line_edit;
    QLabel *wr_val_label;
    QLineEdit *wr_val_line_edit;
    QPushButton *wr_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *connect_button;
    QPlainTextEdit *log_plain_text_edit;
    QPushButton *LightBTN;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 495);
        MainWindow->setMaximumSize(QSize(700, 1000));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        device_label = new QLabel(centralWidget);
        device_label->setObjectName(QStringLiteral("device_label"));

        horizontalLayout->addWidget(device_label);

        device_line_edit = new QLineEdit(centralWidget);
        device_line_edit->setObjectName(QStringLiteral("device_line_edit"));
        device_line_edit->setMinimumSize(QSize(240, 0));
        device_line_edit->setMaxLength(100);

        horizontalLayout->addWidget(device_line_edit);

        slave_label = new QLabel(centralWidget);
        slave_label->setObjectName(QStringLiteral("slave_label"));

        horizontalLayout->addWidget(slave_label);

        slave_line_edit = new QLineEdit(centralWidget);
        slave_line_edit->setObjectName(QStringLiteral("slave_line_edit"));
        slave_line_edit->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(slave_line_edit);

        baudrate_label = new QLabel(centralWidget);
        baudrate_label->setObjectName(QStringLiteral("baudrate_label"));

        horizontalLayout->addWidget(baudrate_label);

        baudrate_combo_box = new QComboBox(centralWidget);
        baudrate_combo_box->setObjectName(QStringLiteral("baudrate_combo_box"));
        baudrate_combo_box->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(baudrate_combo_box);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        parity_label = new QLabel(centralWidget);
        parity_label->setObjectName(QStringLiteral("parity_label"));

        horizontalLayout_2->addWidget(parity_label);

        parity_combo_box = new QComboBox(centralWidget);
        parity_combo_box->setObjectName(QStringLiteral("parity_combo_box"));
        parity_combo_box->setMinimumSize(QSize(110, 0));

        horizontalLayout_2->addWidget(parity_combo_box);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        data_bits_label = new QLabel(centralWidget);
        data_bits_label->setObjectName(QStringLiteral("data_bits_label"));

        horizontalLayout_2->addWidget(data_bits_label);

        data_bits_combo_box = new QComboBox(centralWidget);
        data_bits_combo_box->setObjectName(QStringLiteral("data_bits_combo_box"));

        horizontalLayout_2->addWidget(data_bits_combo_box);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        stop_bit_label = new QLabel(centralWidget);
        stop_bit_label->setObjectName(QStringLiteral("stop_bit_label"));

        horizontalLayout_2->addWidget(stop_bit_label);

        stop_bits_combo_box = new QComboBox(centralWidget);
        stop_bits_combo_box->setObjectName(QStringLiteral("stop_bits_combo_box"));

        horizontalLayout_2->addWidget(stop_bits_combo_box);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rd_reg_label = new QLabel(centralWidget);
        rd_reg_label->setObjectName(QStringLiteral("rd_reg_label"));

        horizontalLayout_3->addWidget(rd_reg_label);

        rd_reg_line_edit = new QLineEdit(centralWidget);
        rd_reg_line_edit->setObjectName(QStringLiteral("rd_reg_line_edit"));
        rd_reg_line_edit->setEnabled(true);

        horizontalLayout_3->addWidget(rd_reg_line_edit);

        rd_count_label = new QLabel(centralWidget);
        rd_count_label->setObjectName(QStringLiteral("rd_count_label"));

        horizontalLayout_3->addWidget(rd_count_label);

        rd_count_line_edit = new QLineEdit(centralWidget);
        rd_count_line_edit->setObjectName(QStringLiteral("rd_count_line_edit"));

        horizontalLayout_3->addWidget(rd_count_line_edit);

        rd_button = new QPushButton(centralWidget);
        rd_button->setObjectName(QStringLiteral("rd_button"));

        horizontalLayout_3->addWidget(rd_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        wr_reg_label = new QLabel(centralWidget);
        wr_reg_label->setObjectName(QStringLiteral("wr_reg_label"));

        horizontalLayout_4->addWidget(wr_reg_label);

        wr_reg_line_edit = new QLineEdit(centralWidget);
        wr_reg_line_edit->setObjectName(QStringLiteral("wr_reg_line_edit"));

        horizontalLayout_4->addWidget(wr_reg_line_edit);

        wr_val_label = new QLabel(centralWidget);
        wr_val_label->setObjectName(QStringLiteral("wr_val_label"));

        horizontalLayout_4->addWidget(wr_val_label);

        wr_val_line_edit = new QLineEdit(centralWidget);
        wr_val_line_edit->setObjectName(QStringLiteral("wr_val_line_edit"));

        horizontalLayout_4->addWidget(wr_val_line_edit);

        wr_button = new QPushButton(centralWidget);
        wr_button->setObjectName(QStringLiteral("wr_button"));

        horizontalLayout_4->addWidget(wr_button);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QStringLiteral("connect_button"));

        horizontalLayout_5->addWidget(connect_button);


        verticalLayout_4->addLayout(horizontalLayout_5);

        log_plain_text_edit = new QPlainTextEdit(centralWidget);
        log_plain_text_edit->setObjectName(QStringLiteral("log_plain_text_edit"));
        log_plain_text_edit->setMinimumSize(QSize(0, 250));

        verticalLayout_4->addWidget(log_plain_text_edit);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        LightBTN = new QPushButton(centralWidget);
        LightBTN->setObjectName(QStringLiteral("LightBTN"));
        LightBTN->setCheckable(true);

        gridLayout->addWidget(LightBTN, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        device_label->setBuddy(device_line_edit);
        baudrate_label->setBuddy(baudrate_combo_box);
        parity_label->setBuddy(parity_combo_box);
        data_bits_label->setBuddy(data_bits_combo_box);
        stop_bit_label->setBuddy(stop_bits_combo_box);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        baudrate_combo_box->setCurrentIndex(19);
        data_bits_combo_box->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test_RTU", 0));
        device_label->setText(QApplication::translate("MainWindow", "Device:", 0));
#ifndef QT_NO_WHATSTHIS
        device_line_edit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        device_line_edit->setText(QApplication::translate("MainWindow", "/dev/ttyUSB0", 0));
        slave_label->setText(QApplication::translate("MainWindow", "Slave:", 0));
        slave_line_edit->setText(QApplication::translate("MainWindow", "1", 0));
        baudrate_label->setText(QApplication::translate("MainWindow", "Baudrate:", 0));
        baudrate_combo_box->clear();
        baudrate_combo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "50", 0)
         << QApplication::translate("MainWindow", "75", 0)
         << QApplication::translate("MainWindow", "110", 0)
         << QApplication::translate("MainWindow", "150", 0)
         << QApplication::translate("MainWindow", "300", 0)
         << QApplication::translate("MainWindow", "600", 0)
         << QApplication::translate("MainWindow", "1200", 0)
         << QApplication::translate("MainWindow", "1800", 0)
         << QApplication::translate("MainWindow", "2000", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "3600", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "7200", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "14400", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "28800", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "115200", 0)
        );
        parity_label->setText(QApplication::translate("MainWindow", "Parity:", 0));
        parity_combo_box->clear();
        parity_combo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "N - for none", 0)
         << QApplication::translate("MainWindow", "E  - for even", 0)
         << QApplication::translate("MainWindow", "O - for odd", 0)
        );
        data_bits_label->setText(QApplication::translate("MainWindow", "Data_bits:", 0));
        data_bits_combo_box->clear();
        data_bits_combo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
        );
        stop_bit_label->setText(QApplication::translate("MainWindow", "Stop_bits:", 0));
        stop_bits_combo_box->clear();
        stop_bits_combo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        rd_reg_label->setText(QApplication::translate("MainWindow", "Reg:", 0));
        rd_reg_line_edit->setText(QApplication::translate("MainWindow", "0", 0));
        rd_count_label->setText(QApplication::translate("MainWindow", "Count", 0));
        rd_count_line_edit->setText(QApplication::translate("MainWindow", "1", 0));
        rd_button->setText(QApplication::translate("MainWindow", "Read", 0));
        wr_reg_label->setText(QApplication::translate("MainWindow", "Reg:", 0));
        wr_reg_line_edit->setText(QApplication::translate("MainWindow", "0", 0));
        wr_val_label->setText(QApplication::translate("MainWindow", "Value", 0));
        wr_val_line_edit->setText(QApplication::translate("MainWindow", "0", 0));
        wr_button->setText(QApplication::translate("MainWindow", "Write", 0));
        connect_button->setText(QApplication::translate("MainWindow", "Connect", 0));
        LightBTN->setText(QApplication::translate("MainWindow", "Light:OFF", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
