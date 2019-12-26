#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QDebug>
#include  <QtWidgets>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

        QSqlDatabase mydb;

        void conClose();

        bool conOpen();

public slots:
           void check();
           void on_buttonConfirm_clicked();
           void on_PrikazTerena_clicked();

private:
    Ui::Dialog *ui;

       QLabel *userLabel;
        QLabel *passLabel;
        QLabel *checkLabel;
        QLineEdit *userTxt;
        QLineEdit *passTxt;

        QPushButton *confirm;
        QPushButton *prikazTerena;
};

#endif // DIALOG_H
