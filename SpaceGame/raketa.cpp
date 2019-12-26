#include <typeinfo>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include "raketa.h"
#include "asteroid.h"
#include "game.h"
#include "qmath.h"

extern Game *game;

Raketa::Raketa(int pravacVal, QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    pravac = pravacVal;

    setPixmap(QPixmap(":/new/images/images/bullet1.png"));

    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

    //postavi muziku za eskploziju rakete
    explosionSound = new QMediaPlayer();
    explosionSound->setMedia(QUrl("qrc:/new/sounds/sounds/raketa.mp3"));
    explosionSound->setVolume(100);
}

void Raketa::move()
{
    // detekcija sudara projektil -> asteroid
    QList<QGraphicsItem *> colliding_items=collidingItems();

    for(int i=0, n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i]))==typeid(Asteroid)) {
            game->poeni->increase();
            explosionSound->play();
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items [i];
            delete this;
            return;
        }
    }

    //vudu magic
    //izracunaj putanju rakete na osnovu ugla broda i ispali je pod odgovarajucim uglom
    setPos(x()+(10*qSin( 0.0174533*rotation() )),y()-(10*qCos( 0.0174533*rotation() )));

    //ako je raketa van gornje ili donje granice unisti ga
    if(pos().y() < 0  || pos().y() > 1000) {
        //raketaPix->setPixmap(QPixmap(":/new/images/images/rocket_explosion.png"));
        explosionSound->play();
        scene()->removeItem(this);
        delete this;
        qDebug()<< "Metak izbrisan";
    }

    //ako je raketa van lijeve ili desne granice unisti ga
    if(pos().x() < 0  || pos().x() > 1000) {
        //raketaPix->setPixmap(QPixmap(":/new/images/images/rocket_explosion.png"));
        explosionSound->play();
        scene()->removeItem(this);
        delete this;
        qDebug()<< "Metak izbrisan";
    }
}

