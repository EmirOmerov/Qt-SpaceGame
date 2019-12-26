#ifndef PRIKAZ_H
#define PRIKAZ_H



#include <QDialog>
#include <QtWidgets>
#include <QtGui>
#include <QtCore>
#include <QPainter>
#include <QRect>
#include <QBrush>
#include  <QPen>
#include "dialog.h"

namespace Ui {
class Prikaz;
}

class Prikaz : public QDialog
{
    Q_OBJECT

public:
    explicit Prikaz(QWidget *parent = nullptr);
    ~Prikaz();
    void ucitaj();
    void ucitajDres(QComboBox *box,QLineEdit *edit1);


public slots:
    void paintEvent(QPaintEvent *e);

      void on_Update_all_clicked();


      void helperSlot();



private:
    Ui::Prikaz *ui;

    QLabel *igrac1;
        QLabel *igrac2;
        QLabel *igrac3;
        QLabel *igrac4;
        QLabel *igrac5;


        QLabel *igrac6;
        QLabel *igrac7;
        QLabel *igrac8;
        QLabel *igrac9;
        QLabel *igrac10;

        QComboBox *player1;
        QComboBox *player2;
        QComboBox *player3;
        QComboBox *player4;
        QComboBox *player5;
        QComboBox *player6;
        QComboBox *player7;
        QComboBox *player8;
        QComboBox *player9;
        QComboBox *player10;

         QLineEdit *broj1;
         QLineEdit *broj2;
         QLineEdit *broj3;
         QLineEdit *broj4;
         QLineEdit *broj5;
         QLineEdit *broj6;
         QLineEdit *broj7;
         QLineEdit *broj8;
         QLineEdit *broj9;
         QLineEdit *broj10;


            QLineEdit *poen1;
            QLineEdit *poen2;
            QLineEdit *poen3;
            QLineEdit *poen4;
            QLineEdit *poen5;
            QLineEdit *poen6;
            QLineEdit *poen7;
            QLineEdit *poen8;
            QLineEdit *poen9;
            QLineEdit *poen10;

            QPushButton *updateAll;

};

#endif // PRIKAZ_H
