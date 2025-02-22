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


void MainWindow::on_N0_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("0");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("0");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N1_clicked()
{
    if(ui->num1->hasFocus()){
    QString currentText = ui->num1->text();
    currentText.append("1");
    ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("1");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N2_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("2");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("2");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N3_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("3");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("3");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N4_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("4");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("4");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N5_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("5");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("5");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N6_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("6");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("6");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N7_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("7");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("7");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N8_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("8");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("8");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_N9_clicked()
{
    if(ui->num1->hasFocus()){
        QString currentText = ui->num1->text();
        currentText.append("9");
        ui->num1->setText(currentText);
    }
    else if(ui->num2->hasFocus()){
        QString currentText = ui->num2->text();
        currentText.append("9");
        ui->num2->setText(currentText);
    }
}


void MainWindow::on_add_clicked()
{
    tila = 1;
}


void MainWindow::on_clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}


void MainWindow::on_div_clicked()
{
    tila = 4;
}


void MainWindow::on_enter_clicked()
{
    int value1 = ui->num1->text().toInt();
    int value2 = ui->num2->text().toInt();
    float tulos = 0;

    switch (tila)
    {
    case 1:
        tulos = value1 + value2;
        break;
    case 2:
        tulos = value1 - value2;
        break;
    case 3:
        tulos = value1 * value2;
        break;
    case 4:
        if (value2 == 0)
        {
            ui->result->setText("Error: Division by zero");
            return;
        } else
        {
            tulos = static_cast<float>(value1) / static_cast<float>(value2);
        }
        break;
    }
    ui->result->setText(QString::number(tulos));
}


void MainWindow::on_mul_clicked()
{
    tila=3;
}


void MainWindow::on_sub_clicked()
{
    tila=2;
}

