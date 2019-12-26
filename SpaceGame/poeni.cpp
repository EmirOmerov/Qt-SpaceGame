#include "poeni.h"
#include <QFont>

Poeni::Poeni(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    poeni = 0;

    //nacrtaj text
    setPlainText(QString("Poeni: ")+QString::number(poeni));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}


void Poeni::increase()
{
    poeni++;
    setPlainText(QString("Poeni: ")+QString::number(poeni));
}

int Poeni::getScore()
{
    return poeni;
}
