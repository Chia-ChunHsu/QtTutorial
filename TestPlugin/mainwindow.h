#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtPlugin>
#include <QDir>
#include <QPluginLoader>

#include "plugininterface.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_printButton_clicked();

private:
    Ui::MainWindow *ui;
    void LoadPlugin();
    myPluginInterface *myPlugin =0;
};

#endif // MAINWINDOW_H
