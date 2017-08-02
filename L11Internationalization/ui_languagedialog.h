/********************************************************************************
** Form generated from reading UI file 'languagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGEDIALOG_H
#define UI_LANGUAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LanguageDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_Environment;
    QComboBox *LanguageComboBox;
    QLabel *LanguageLabel;
    QPushButton *applyButton;

    void setupUi(QDialog *LanguageDialog)
    {
        if (LanguageDialog->objectName().isEmpty())
            LanguageDialog->setObjectName(QStringLiteral("LanguageDialog"));
        LanguageDialog->resize(400, 300);
        tabWidget = new QTabWidget(LanguageDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 381, 281));
        tab_Environment = new QWidget();
        tab_Environment->setObjectName(QStringLiteral("tab_Environment"));
        LanguageComboBox = new QComboBox(tab_Environment);
        LanguageComboBox->setObjectName(QStringLiteral("LanguageComboBox"));
        LanguageComboBox->setGeometry(QRect(110, 30, 251, 31));
        LanguageLabel = new QLabel(tab_Environment);
        LanguageLabel->setObjectName(QStringLiteral("LanguageLabel"));
        LanguageLabel->setGeometry(QRect(20, 30, 71, 31));
        applyButton = new QPushButton(tab_Environment);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(270, 220, 75, 23));
        tabWidget->addTab(tab_Environment, QString());

        retranslateUi(LanguageDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LanguageDialog);
    } // setupUi

    void retranslateUi(QDialog *LanguageDialog)
    {
        LanguageDialog->setWindowTitle(QApplication::translate("LanguageDialog", "Dialog", Q_NULLPTR));
        LanguageComboBox->clear();
        LanguageComboBox->insertItems(0, QStringList()
         << QApplication::translate("LanguageDialog", "English", Q_NULLPTR)
         << QApplication::translate("LanguageDialog", "Chinese (TW)", Q_NULLPTR)
         << QApplication::translate("LanguageDialog", "Chinese (CN)", Q_NULLPTR)
        );
        LanguageLabel->setText(QApplication::translate("LanguageDialog", "Language", Q_NULLPTR));
        applyButton->setText(QApplication::translate("LanguageDialog", "Apply", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_Environment), QApplication::translate("LanguageDialog", "Environment", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LanguageDialog: public Ui_LanguageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGEDIALOG_H
