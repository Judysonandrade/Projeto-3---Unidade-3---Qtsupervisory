#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    tempo = new QTimer(this);

    connect(tempo, SIGNAL(timeout()), this, SLOT(getData()));

    // Botão Conectar

    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));

    // Botão Disconectar

    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect()));

    // Botão Start

    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(startTiming()));


    // Botão Stop

    connect(ui->pushButton_2Stop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stopTiming()));

    // Botão de passar o ip para o uptade para assim começar a gerar os graficos pegando do producer

    connect(ui->pushButtonUpdate,
            SIGNAL(clicked(bool)),
            this,
            SLOT(copiaTexto()));

    ui->lineEdit_IP->setText("127.0.0.1"); // Fixar o IP
    ui->horizontalSliderTiming->setValue(1); // Começar com o Timing sempre em 1
}

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}

void MainWindow::tcpConnect(){
    QString ip = ui->lineEdit_IP->text(); // Endereço IP digitado pelo USUARIO
    socket->connectToHost(ip, 1234); // Conectar com o ip na porta 1234
    if(socket->waitForConnected(3000)) {
        ui->label_4_Status->setText("Conectado");
    } else {
        ui->label_4_Status->setText("Erro ao conectar");
    }
}

// Quando clicar no botão de desconectar ele vai desconectar do IP digitado.
void MainWindow::tcpDisconnect(){
    if(socket->isOpen()){
        socket->disconnectFromHost();
        ui->label_4_Status->setText("Desconectado");
    }
}

void MainWindow::startTiming(){
    int intervalo = ui->horizontalSliderTiming->value();

    // Garante que o intervalo não seja zero ou negativo,
    // pois o Timer precisa de um valor positivo para funcionar.

    if (intervalo <= 0) intervalo = 1;
    // inicia o tempo
    tempo->start(intervalo * 100);
}

// Para o tempo
void MainWindow::stopTiming(){
    tempo->stop();
}

void MainWindow::getData(){
    QString str, get_command;
    QStringList list;
    vector<double> time_vec;
    vector<double> data_vec;


    // Verifica se o socket está conectado e se há um IP selecionado na lista
    if (socket->state() != QAbstractSocket::ConnectedState) return;
    if (!ui->listWidget_IP->currentItem()) return;

    // Monta e envia o comando de solicitação
    get_command = "get " + ui->listWidget_IP->currentItem()->text() + " 10\r\n";
    socket->write(get_command.toLatin1());
    socket->waitForBytesWritten();

    // Aguarda a resposta do servidor
    if(socket->waitForReadyRead(100)){
        while (socket->bytesAvailable()){
            str = socket->readLine().replace("\n","").replace("\r","");
            list = str.split(" ");
            if (list.size() == 2){
                bool ok1, ok2;
                time_vec.push_back(list.at(0).toDouble(&ok1));
                data_vec.push_back(list.at(1).toDouble(&ok2));
            }
        }
    }

    if(!data_vec.empty()){
        ui->widgetPlot->setData(time_vec, data_vec);
    }
}

void MainWindow::copiaTexto(){
    if(socket->state() != QAbstractSocket::ConnectedState) return;

    ui->listWidget_IP->clear();

    // Adiciona o IP que você digitou na caixa
    QString ipDigitado = ui->lineEdit_IP->text();
    if(!ipDigitado.isEmpty()){
        ui->listWidget_IP->addItem(ipDigitado);
    }

    socket->write("list\r\n");
    socket->waitForBytesWritten();

    // Espera a resposta do servidor para preencher o resto
    if (socket->waitForReadyRead(1000)) {
        while(socket->bytesAvailable()){
            QString str = socket->readLine().trimmed(); // trimmed() remove \n e \r
            if(!str.isEmpty() && str != "list") {
                ui->listWidget_IP->addItem(str);
            }
        }
    }
}
