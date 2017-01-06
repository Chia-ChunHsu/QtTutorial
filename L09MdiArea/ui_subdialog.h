/********************************************************************************
** Form generated from reading UI file 'subdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBDIALOG_H
#define UI_SUBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_subDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QDialog *subDialog)
    {
        if (subDialog->objectName().isEmpty())
            subDialog->setObjectName(QStringLiteral("subDialog"));
        subDialog->resize(400, 300);
        gridLayout = new QGridLayout(subDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(subDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(subDialog);

        QMetaObject::connectSlotsByName(subDialog);
    } // setupUi

    void retranslateUi(QDialog *subDialog)
    {
        subDialog->setWindowTitle(QApplication::translate("subDialog", "Dialog", 0));
        label->setText(QApplication::translate("subDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class subDialog: public Ui_subDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBDIALOG_H
