/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QLabel *label_Status;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *horizontalSliderMin;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QSlider *horizontalSlider_2Max;
    QLCDNumber *lcdNumber_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *horizontalSlider_3Timing;
    QPushButton *pushButtonStart;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_IP;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(606, 497);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(290, 10, 281, 401));
        label_Status = new QLabel(centralWidget);
        label_Status->setObjectName("label_Status");
        label_Status->setGeometry(QRect(20, 390, 111, 20));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 107, 201, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSliderMin = new QSlider(layoutWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSliderMin, 1, 0, 1, 1);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName("lcdNumber");

        gridLayout->addWidget(lcdNumber, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSlider_2Max = new QSlider(layoutWidget);
        horizontalSlider_2Max->setObjectName("horizontalSlider_2Max");
        horizontalSlider_2Max->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider_2Max, 3, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName("lcdNumber_2");

        gridLayout->addWidget(lcdNumber_2, 3, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 260, 251, 121));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_3Timing = new QSlider(layoutWidget1);
        horizontalSlider_3Timing->setObjectName("horizontalSlider_3Timing");
        horizontalSlider_3Timing->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_3Timing, 0, 1, 1, 2);

        pushButtonStart = new QPushButton(layoutWidget1);
        pushButtonStart->setObjectName("pushButtonStart");

        gridLayout_2->addWidget(pushButtonStart, 1, 0, 1, 2);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 1, 2, 1, 2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 20, 180, 68));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_IP = new QLineEdit(layoutWidget2);
        lineEdit_IP->setObjectName("lineEdit_IP");

        verticalLayout->addWidget(lineEdit_IP);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButtonConnect = new QPushButton(layoutWidget2);
        pushButtonConnect->setObjectName("pushButtonConnect");

        gridLayout_3->addWidget(pushButtonConnect, 0, 0, 1, 1);

        pushButtonDisconnect = new QPushButton(layoutWidget2);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        gridLayout_3->addWidget(pushButtonDisconnect, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 606, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, &QSlider::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSlider_2Max, &QSlider::valueChanged, lcdNumber_2, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSlider_3Timing, &QSlider::valueChanged, label_4, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_Status->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minimo", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Maximo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
