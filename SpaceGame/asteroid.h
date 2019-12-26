#ifndef ASTEROID_H
#define ASTEROID_H
#include <QGraphicsPixmapItem>
#include <QObject>

class Asteroid:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Asteroid(QGraphicsItem * parent=0);
    int xVelocity;
    int yVelocity;
public slots:
    void move();
};

#endif // ASTEROID_H
