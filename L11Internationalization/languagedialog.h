#ifndef LANGUAGEDIALOG_H
#define LANGUAGEDIALOG_H

#include <QDialog>
//#include
#include <fstream>
namespace Ui {
class LanguageDialog;
}

class LanguageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LanguageDialog(QWidget *parent = 0);
    ~LanguageDialog();

private slots:
    void on_applyButton_clicked();

private:
    Ui::LanguageDialog *ui;
    void Initial();
    std::string FileName;
};

#endif // LANGUAGEDIALOG_H
