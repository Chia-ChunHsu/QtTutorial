#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LoadPlugin();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_printButton_clicked()
{
    myPlugin->Print();
}

void MainWindow::LoadPlugin()
{
    QDir pluginDir(qApp->applicationDirPath());
    pluginDir.cd("plugins");
    foreach (QString fileName, pluginDir.entryList(QDir::Files))
    {
        QPluginLoader pluginLoader(pluginDir.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();
        myPlugin = qobject_cast<myPluginInterface *>(plugin);
    }
    if(myPlugin)
        ui->printButton->setEnabled(true);
}
