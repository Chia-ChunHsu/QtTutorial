#ifndef SUBDIALOG_H
#define SUBDIALOG_H

#include <QDialog>

namespace Ui {
class subDialog;
}

class subDialog : public QDialog
{
    Q_OBJECT

public:
    explicit subDialog(QString fileName,QWidget *parent = 0);
    ~subDialog();
    QString getFileName();

private:
    Ui::subDialog *ui;
    QString FileName;
};

#endif // SUBDIALOG_H
