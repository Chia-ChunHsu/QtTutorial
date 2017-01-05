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

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    ui->peopleLabel->setText(ui->listWidget->currentItem()->text());
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->ADJlabel->setText(arg1);
}
