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

void MainWindow::on_loadButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/",
                                                    tr("PNG( *.png);;JPEG( *.jpg"));
    if(fileName.isEmpty())
        return;
    img = QImage(fileName);
    QGraphicsPixmapItem *itm = new QGraphicsPixmapItem(QPixmap::fromImage(img));
    QGraphicsScene *scene = new QGraphicsScene ();
    ui->graphicsView->setScene(scene);
    scene->addItem(itm);
    ui->graphicsView->show();
    if(!img.isGrayscale())
        ui->subWindowsButton->setEnabled(true);
}

void MainWindow::on_subWindowsButton_clicked()
{
    dialogWindow = new Dialog(img);
    dialogWindow->setModal(true);
    connect(dialogWindow,SIGNAL(sendResult(QImage)),this,SLOT(getResult(QImage)));
    dialogWindow->exec();

}

void MainWindow::getResult(QImage updateImg)
{
    qDebug()<<"I get Result";
    img = QImage(updateImg).copy();
    QGraphicsPixmapItem *itm = new QGraphicsPixmapItem(QPixmap::fromImage(img));
    QGraphicsScene *scene = new QGraphicsScene ();
    ui->graphicsView->setScene(scene);
    scene->addItem(itm);
    ui->graphicsView->show();
}
