#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Count_clicked()
{
    QString text = ui->Tulos->text();
    int value = text.toInt();
    value++;
    ui->Tulos->setText(QString::number(value));
}


void MainWindow::on_Reset_clicked()
{
    QString text = ui->Tulos->text();
    int value = text.toInt();
    value = 0;
    ui->Tulos->setText(QString::number(value));
}

