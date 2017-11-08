/********************************************************************************
** Form generated from reading UI file 'addactivity.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACTIVITY_H
#define UI_ADDACTIVITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_addActivity
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *addActivity)
    {
        if (addActivity->objectName().isEmpty())
            addActivity->setObjectName(QStringLiteral("addActivity"));
        addActivity->resize(326, 184);
        buttonBox = new QDialogButtonBox(addActivity);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(70, 140, 161, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(addActivity);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 30, 256, 101));

        retranslateUi(addActivity);
        QObject::connect(buttonBox, SIGNAL(accepted()), addActivity, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addActivity, SLOT(reject()));

        QMetaObject::connectSlotsByName(addActivity);
    } // setupUi

    void retranslateUi(QDialog *addActivity)
    {
        addActivity->setWindowTitle(QApplication::translate("addActivity", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class addActivity: public Ui_addActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACTIVITY_H
