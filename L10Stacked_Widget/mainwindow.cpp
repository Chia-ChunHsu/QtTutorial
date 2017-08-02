#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->settingRadioButton->setEnabled(true);
    ui->settingRadioButton->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->settingRadioButton->setEnabled(false);
    ui->setupRadioButton->setEnabled(true);
    ui->setupRadioButton->setChecked(true);
    for(int i=0;i<100;i++)
    {
        ui->progressBar->setValue(i);
        Sleep(100);
    }
    ui->setupRadioButton->setEnabled(false);
    ui->finishRadioButton->setEnabled(true);
    ui->finishRadioButton->setChecked(true);
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()
{
    close();
}
