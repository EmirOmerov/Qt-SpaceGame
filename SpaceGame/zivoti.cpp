#include <QFont>
#include "zivoti.h"

Zivoti::Zivoti(QGraphicsItem *parent)
{
    zivoti = 3;
    //crtanje texta
    setPlainText(QString("Zivoti: ")+ QString::number(zivoti));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}


void Zivoti::decrease()
{
    zivoti--;
    setPlainText(QString("Zivoti: ")+ QString::number(zivoti));
}

int Zivoti::getHealth()
{
    return zivoti;
}
