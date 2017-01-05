#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_clicked()
{
    ui->label->setText(ui->radioButton->text());
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->label->setText(ui->radioButton_2->text());
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->label->setText(ui->radioButton_3->text());
}
