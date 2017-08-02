#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTranslator>
#include <QDebug>

#include <languagedialog.h>

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
    void on_messageButton_clicked();

    void on_actionSetting_triggered();

private:
    Ui::MainWindow *ui;
    LanguageDialog *lanDig;
};

#endif // MAINWINDOW_H
