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

void MainWindow::on_saveButton_clicked()
{
    saveFileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                "/",
                                                tr("txt (*.txt)"));
    saveTextEdit.setFileName(saveFileName);
    if(saveTextEdit.exists())
        saveTextEdit.remove();
    if(!saveTextEdit.open(QIODevice::Append | QIODevice::Text)){

        QMessageBox::warning(0, QStringLiteral("警告"), "Cannot open file for writing");
    }
    else
    {
        out.setDevice(&saveTextEdit);
        out << ui->textEdit->toPlainText() << endl;
        saveTextEdit.close();
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(QStringLiteral("哈哈"));
}
