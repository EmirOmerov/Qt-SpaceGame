#ifndef RAKETA_H
#define RAKETA_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMediaPlayer>

class Raketa:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Raketa(int pravacVal = 0, QGraphicsItem * parent=0);
    int pravac;
    QMediaPlayer *explosionSound;
public slots:
    void move();
};

#endif // RAKETA_H
