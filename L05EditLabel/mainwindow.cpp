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

void MainWindow::on_textEdit_textChanged()
{
    ui->label_text->setText(ui->textEdit->toPlainText());
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    ui->label_line->setText(arg1);
}
