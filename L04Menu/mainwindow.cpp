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

void MainWindow::on_actionClose_triggered()
{
    close();
}

void MainWindow::on_actionClick_triggered()
{
    ui->label->setText("Click!");
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->pushButton->isEnabled())
    {
        ui->pushButton->setEnabled(false);
    }
    else
        ui->pushButton->setEnabled(true);
}
