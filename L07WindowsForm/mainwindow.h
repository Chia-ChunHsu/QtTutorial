#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QDebug>
#include "dialog.h"
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
    void on_loadButton_clicked();

    void on_subWindowsButton_clicked();

    void getResult(QImage updateImg);

private:
    Ui::MainWindow *ui;
    QImage img;
    Dialog *dialogWindow;
};

#endif // MAINWINDOW_H
