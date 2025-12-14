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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <plotter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    Plotter *widgetPlot;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_IP;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QPushButton *pushButtonUpdate;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget_IP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSliderTiming;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonStart;
    QPushButton *pushButton_2Stop;
    QLabel *label_4_Status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(921, 620);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        widgetPlot = new Plotter(centralWidget);
        widgetPlot->setObjectName("widgetPlot");
        widgetPlot->setGeometry(QRect(300, 30, 531, 441));
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 13, 271, 531));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_IP = new QLineEdit(widget);
        lineEdit_IP->setObjectName("lineEdit_IP");

        verticalLayout->addWidget(lineEdit_IP);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonConnect = new QPushButton(widget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(widget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        horizontalLayout->addWidget(pushButtonDisconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButtonUpdate = new QPushButton(widget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        verticalLayout_3->addWidget(pushButtonUpdate);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");

        verticalLayout_3->addLayout(verticalLayout_2);

        listWidget_IP = new QListWidget(widget);
        listWidget_IP->setObjectName("listWidget_IP");

        verticalLayout_3->addWidget(listWidget_IP);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSliderTiming = new QSlider(widget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderTiming);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButtonStart = new QPushButton(widget);
        pushButtonStart->setObjectName("pushButtonStart");

        horizontalLayout_3->addWidget(pushButtonStart);

        pushButton_2Stop = new QPushButton(widget);
        pushButton_2Stop->setObjectName("pushButton_2Stop");

        horizontalLayout_3->addWidget(pushButton_2Stop);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_4_Status = new QLabel(widget);
        label_4_Status->setObjectName("label_4_Status");

        verticalLayout_3->addWidget(label_4_Status);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 921, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonUpdate, SIGNAL(clicked()), MainWindow, SLOT(copiaTexto()));
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, label, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "IP do Servidor", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_4_Status->setText(QCoreApplication::translate("MainWindow", "Connect ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
