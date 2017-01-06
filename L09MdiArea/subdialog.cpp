#include "subdialog.h"
#include "ui_subdialog.h"

subDialog::subDialog(QString fileName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::subDialog)
{
    ui->setupUi(this);
    FileName = fileName;
    QImage img(fileName);
    ui->label->setPixmap(QPixmap::fromImage(img));
    ui->label->show();
    this->setWindowTitle(FileName);
}

subDialog::~subDialog()
{
    delete ui;
}

QString subDialog::getFileName()
{
    return FileName;
}
