#include <QApplication>
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include "asteroid.h"
#include <qmath.h>
#include "game.h"
#include <typeinfo>

extern Game *game;
Asteroid::Asteroid(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    // randomiziraj tacku spawna asteroida na x-osi
    int random_number=rand()%900;
    setPos(random_number, 0);
    setPixmap(QPixmap(":/new/images/images/asteroid.png"));

    // spawnaj asteroid
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

    //randomiziraj brzinu i pravac kretanja asteroida
    xVelocity = rand() % 20 + (-10);
    yVelocity = rand() % 10;
}

void Asteroid::move()
{
    // pomjeraj meteore na ekranu
    moveBy(xVelocity, yVelocity);

    // pri sudaru asteroida sa granicama okreni njihov pravac ketanja
    if (pos().x() >= 900) {
        xVelocity = -1 * xVelocity;
    }
    if (pos().y() >= 900) {
        yVelocity = -1 * yVelocity;
    }
    if (pos().x() <= 0) {
        xVelocity = -1 * xVelocity;
    }
    if (pos().y() <= 0) {
        yVelocity = -1 * yVelocity;
    }

    // detekcija sudara brod -> asteroid
    QList<QGraphicsItem *> colliding_items=collidingItems();

    for(int i=0, n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i])) == typeid(Igrac)) {
            game->zivoti->decrease();
            delete this;
            if (game->zivoti->getHealth() == 0) {
                game->gameOver();
            }
            return;
        }
    }

}

