#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTimer> // <--- 1. Necessário para usar QTimer

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void getData();
    void tcpConnect();
    void tcpDisconnect();
    void startTiming();
    void stopTiming();
    void copiaTexto();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QTimer *tempo; // <--- 2. Deve ser um ponteiro (*)
};

#endif // MAINWINDOW_H
