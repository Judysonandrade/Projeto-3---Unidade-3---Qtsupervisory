#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

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
  void putData();
  void tcpConnect();
  void tcpDisconnect();
  void startTempo();
  void stopTempo();
  void timerEvent(QTimerEvent *event);


private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  unsigned int tempo;
};

#endif // MAINWINDOW_H
