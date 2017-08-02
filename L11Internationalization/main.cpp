#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <iostream>
#include <fstream>

#define EN  0
#define TW  1
#define CN  2



int main(int argc, char *argv[])
{
    std::string SettingFile = "Setting.txt";
    std::ifstream inFile("Setting.txt");
    int Language;
    if(!inFile)
    {
        std::ofstream outFile(SettingFile);
        Language = EN;
        if(outFile.is_open())
        {
            outFile<<"Language:"<<"\t"<<Language<<std::endl;
            outFile.close();
        }
    }
    else
    {
        //std::ifstream inFile(SettingFile);
        //Language = EN;
        if(inFile.is_open())
        {
            std::string Column;
            std::string Lan;
            while(!inFile.eof())
            {
                inFile>>Column>>Lan;
            }
            Language = std::stoi(Lan);
            inFile.close();
        }
    }


    QApplication a(argc, argv);

    QTranslator translator;
    std::string LQM="";
    switch (Language) {
    case EN:
        break;
    case TW:
        LQM = "translation_international_TW.qm";
        break;
    case CN:
        LQM = "translation_international_CN.qm";
        break;
    default:
        break;
    }

    if(translator.load(LQM.c_str()))
    {
        qDebug()<<"Success";
        a.installTranslator(&translator);
    }


    MainWindow w;
    w.show();

    return a.exec();
}
