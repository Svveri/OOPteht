#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(nullptr)
{
    ui->setupUi(this);
    ui->label->setText("Valitse aika");
}

MainWindow::~MainWindow()
{
    if(timer)
    {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::timeout()
{
    // en tajunnut mihin tätä käytetään
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1)
    {
        p1Time = p1Time-1;
        ui->progressBar_1->setValue(p1Time);
        if(p1Time <= 0)
        {
            timer->stop();
            delete timer;
            timer = nullptr;

            setGameInfoText("Pelaaja 1 hävisi");
        }
    }
    else
    {
        p2Time = p2Time-1;
        ui->progressBar_2->setValue(p2Time);
            if (p2Time <= 0)
            {
                timer->stop();
                delete timer;
                timer = nullptr;

                setGameInfoText("Pelaaja 2 hävisi");
            }
    }
}

void MainWindow::setGameInfoText(QString t)
{
    ui->label->setText(t);
}


void MainWindow::on_startGame_clicked()
{
    if(gameTime > 0)
    {
    setGameInfoText("Peli aloitettu");

    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar_1->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar_1->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    if(timer)
    {
        timer->stop();
        delete timer;
    }

    timer = new QTimer(this);
    connect (timer,                             // lähettävä olio
            &QTimer::timeout,                  // lähtevä signal???
            this,                             // vastaanottava olio
            &MainWindow::updateProgressBar); //  slotti :D

    timer->setInterval(1000);    // sekunti
    timer->start();             // aloita timer
    }
    else
    {
        setGameInfoText("Valitse ensin aika");
    }
}


void MainWindow::on_stopGame_clicked()
{
    if(timer)
    {
        timer->stop();
        delete timer;
        timer = nullptr;

        setGameInfoText("Peli pysäytetty");
    }
    else
    {
    setGameInfoText("Peli ei ole käynnissä");
    }
}


void MainWindow::on_pushButton_120sec_clicked()
{
    gameTime = 10;
    setGameInfoText("Paina start aloittaaksesi peli 2min asetuksella");
}


void MainWindow::on_pushButton_5min_clicked()
{
    gameTime = 300;
    setGameInfoText("Paina start aloittaaksesi peli 5min asetuksella");
}


void MainWindow::on_switch1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_switch2_clicked()
{
    currentPlayer = 1;
}

