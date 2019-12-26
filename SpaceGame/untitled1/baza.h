#ifndef BAZA_H
#define BAZA_H

#include <QDialog>
#include <QtCore>
#include <QtWidgets>
#include <QtGui>
#include <QDebug>

namespace Ui {
class Baza;
}

class Baza : public QDialog
{
    Q_OBJECT

public:
    explicit Baza(QWidget *parent = nullptr);
    ~Baza();
    void refresh();

public slots:

       void on_btnAdd_clicked();
       void on_btnEdit_clicked();
       void on_btnDelete_clicked();

       void on_table_activated(const QModelIndex &index);



private:
    Ui::Baza *ui;

        QPushButton *deleteBtn;
        QPushButton *updateBtn;
        QPushButton *insertBtn;



        QLabel *IDlbl;
        QLabel *nameLbl;
        QLabel *surnameLbl;
        QLabel *numLbl;
        QLabel *poeni;

        QLineEdit *IDline;
        QLineEdit *nameLine;
        QLineEdit *surnameLine;
        QLineEdit *numberLine;
        QLineEdit *pointLine;

        QTableView *table;

        QLabel *connectionLabel;
};

#endif // BAZA_H
