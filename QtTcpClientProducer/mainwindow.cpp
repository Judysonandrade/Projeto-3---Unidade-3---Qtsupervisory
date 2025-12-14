#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <QDateTime>
#include <cstdlib>
#include <ctime>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    socket = new QTcpSocket(this);


    srand(time(0));

    // Botão Connect

    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));

    // Botão Disconnect

    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect()));

    // Botão Start

    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(startTempo()));


    // Botão Stop

    connect(ui->pushButton_2,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stopTempo()));

    ui->horizontalSlider_2Max->setValue(19);
    ui->horizontalSliderMin->setValue(11);
    ui->horizontalSlider_3Timing->setValue(1);
    ui->lineEdit_IP->setText("127.0.0.1");
}

void MainWindow::tcpConnect(){
    QString ip = ui->lineEdit_IP->text();
    socket->connectToHost(ip, 1234);

    if(!(socket->waitForConnected(3000))){
        ui->label_Status->setText("Erro ao conectar");
        return;
    }
    ui->label_Status->setText("Conectado");
}

void MainWindow::tcpDisconnect(){
    if(socket->state() == QAbstractSocket::ConnectedState){
        socket->disconnectFromHost();
        ui->label_Status->setText("Desconectado");
    }
}

void MainWindow::startTempo(){
    QString str = "Dados Enviados";
    ui->textBrowser->append(str);

    // Pega o valor do slider (segundos) e converte para ms
    int intervalo = ui->horizontalSlider_3Timing->value();
    if(intervalo < 1) intervalo = 1;

    tempo = startTimer(intervalo * 1000);
}

void MainWindow::stopTempo(){
    ui->textBrowser->append("Envio de Dados interrompido");
    killTimer(tempo);
}


void MainWindow::timerEvent(QTimerEvent *event)
{
    putData();
}

void MainWindow::putData(){

    /*
    Esta função captura os limites (mín/máx) dos sliders, gera um valor aleatório dentro dessa faixa,
    obtém o timestamp atual  e envia o comando  de protocolo "set" via socket TCP
    para o servidor, registrando o envio no log da interface.
    */

    QString str;
    qint64 msecdate;

    int min = ui->horizontalSliderMin->value();
    int max = ui->horizontalSlider_2Max->value();


    if(min >= max) max = min + 1;
    int aleat = min + std::rand() % (max - min + 1);

    if(socket->state() == QAbstractSocket::ConnectedState){
        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();

        // Protocolo: set TIMESTAMP VALOR
        str = "set " + QString::number(msecdate) + " " + QString::number(aleat) + "\r\n";

        socket->write(str.toUtf8());
        socket->waitForBytesWritten(3000);

        ui->textBrowser->append("Enviado: " + str.trimmed());
    }
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}
