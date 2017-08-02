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

void MainWindow::on_messageButton_clicked()
{
    QMessageBox::about(this,tr("Title"),tr("Content"));
}

void MainWindow::on_actionSetting_triggered()
{
    lanDig = new LanguageDialog();
    lanDig->setModal(true);
    lanDig->exec();
}
