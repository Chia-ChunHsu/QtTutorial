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

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/",
                                                    tr("Images (*.png *.jpg)"));
    subDialog *dialog = new subDialog(fileName);
    ui->mdiArea->addSubWindow(dialog);
    dialog->show();
}

void MainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    if(arg1)
    {
        currentDialog = qobject_cast<subDialog *>(arg1->widget());
        ui->statusBar->showMessage(currentDialog->getFileName(),2000);
    }
}
