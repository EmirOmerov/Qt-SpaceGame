/********************************************************************************
** Form generated from reading UI file 'prikaz.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIKAZ_H
#define UI_PRIKAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Prikaz
{
public:

    void setupUi(QDialog *Prikaz)
    {
        if (Prikaz->objectName().isEmpty())
            Prikaz->setObjectName(QStringLiteral("Prikaz"));
        Prikaz->resize(400, 300);

        retranslateUi(Prikaz);

        QMetaObject::connectSlotsByName(Prikaz);
    } // setupUi

    void retranslateUi(QDialog *Prikaz)
    {
        Prikaz->setWindowTitle(QApplication::translate("Prikaz", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Prikaz: public Ui_Prikaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIKAZ_H
