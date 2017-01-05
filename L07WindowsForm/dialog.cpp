#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QImage img, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    input = img.copy();
    if(!input.isGrayscale())
        ui->grayScaleButton->setEnabled(true);
    else
        ui->grayScaleButton->setEnabled(false);
    show(input);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_applyButton_clicked()
{
    input = result.copy();
    emit sendResult(input);
    close();
}

void Dialog::on_grayScaleButton_clicked()
{
    QVector<QRgb> colorTable;
    for(int i=0;i<256;i++)
    {
        colorTable.push_back(qRgb(i,i,i));
    }
    result = input.convertToFormat(QImage::Format_Indexed8);
    result.setColorTable(colorTable);
    show(result);
    ui->grayScaleButton->setEnabled(false);
    ui->applyButton->setEnabled(true);
}

void Dialog::show(QImage temp)
{
    QGraphicsPixmapItem* itm = new QGraphicsPixmapItem(QPixmap::fromImage(temp));
    QGraphicsScene* scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->addItem(itm);
    ui->graphicsView->show();
}
