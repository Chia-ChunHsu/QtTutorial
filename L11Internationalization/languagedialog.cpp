#include "languagedialog.h"
#include "ui_languagedialog.h"

LanguageDialog::LanguageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LanguageDialog)
{
    //
    ui->setupUi(this);
    FileName = "Setting.txt";
    Initial();

}

LanguageDialog::~LanguageDialog()
{
    delete ui;
}

void LanguageDialog::Initial()
{
    std::ifstream inFile(FileName);
    std::string column;
    std::string Lan;
    if(inFile.is_open())
    {
        while(!inFile.eof())
            inFile>>column>>Lan;
        inFile.close();
    }
    ui->LanguageComboBox->setCurrentIndex(std::stoi(Lan));
}


void LanguageDialog::on_applyButton_clicked()
{
    std::ifstream inFile(FileName);
    std::string column;
    std::string Lan;
    if(inFile.is_open())
    {
        while(!inFile.eof())
            inFile>>column>>Lan;
        inFile.close();
    }
    std::ofstream outFile(FileName);
    if(outFile.is_open())
    {
        outFile<<column<<"\t"<<ui->LanguageComboBox->currentIndex()<<std::endl;
        outFile.close();
    }

    //ui->LanguageComboBox->setCurrentIndex(std::stoi(Lan));
}
