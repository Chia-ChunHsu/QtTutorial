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

void MainWindow::on_startButton_1_clicked()
{
    MyThread *myThread1  = new MyThread;
    myThread1->start();
    connect(myThread1,SIGNAL(send_progress(int)),ui->progressBar1,SLOT(setValue(int)));
}

void MainWindow::on_startButton_2_clicked()
{
    MyThread *myThread2 = new MyThread;
    myThread2->start();
    connect(myThread2,SIGNAL(send_progress(int)),ui->progressBar2,SLOT(setValue(int)));
}

void MainWindow::on_pushButton_clicked()
{
   Thread *thread = new Thread;
   //thread->Initial(50);
   //connect(thread,SIGNAL(send_progress(int)),ui->Bar,SLOT(setValue(int)));
   //thread->start();
}
