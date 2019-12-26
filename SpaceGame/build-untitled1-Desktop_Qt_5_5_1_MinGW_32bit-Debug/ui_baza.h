/********************************************************************************
** Form generated from reading UI file 'baza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAZA_H
#define UI_BAZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Baza
{
public:

    void setupUi(QDialog *Baza)
    {
        if (Baza->objectName().isEmpty())
            Baza->setObjectName(QStringLiteral("Baza"));
        Baza->setWindowModality(Qt::ApplicationModal);
        Baza->resize(400, 300);
        Baza->setMaximumSize(QSize(16777215, 16777215));
        Baza->setSizeIncrement(QSize(5, 5));

        retranslateUi(Baza);

        QMetaObject::connectSlotsByName(Baza);
    } // setupUi

    void retranslateUi(QDialog *Baza)
    {
        Baza->setWindowTitle(QApplication::translate("Baza", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Baza: public Ui_Baza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAZA_H
