#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QImage img,QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_applyButton_clicked();

    void on_grayScaleButton_clicked();

signals:
    void sendResult(QImage);

private:
    Ui::Dialog *ui;
    QImage input;
    QImage result;

    void show(QImage temp);
};

#endif // DIALOG_H
