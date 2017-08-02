#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*
//This is a tutorial for how to use qt stacked widget.
//Written By Astrid Hsu.
//Date: 2017/03/07
//Version: 1.0.0
//Qt 5.7 MSVC2015_64bit
*/

#include <QMainWindow>
#include <QFileDialog>
#include <QStackedWidget>
#include <Windows.h>

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

    void on_nextButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
