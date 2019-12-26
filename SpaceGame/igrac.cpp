#include <QKeyEvent>
#include <QGraphicsScene>
#include "igrac.h"
#include "raketa.h"
#include "asteroid.h"
#include <qmath.h>

Igrac::Igrac():QObject(),QGraphicsPixmapItem()
{
    //nacrtaj igraca
    setPixmap(QPixmap(":/images/nova.png"));

    //postavi muziku za ispaljivanje rakete
    bulletSound = new QMediaPlayer();
    bulletSound->setMedia(QUrl("qrc:/new/sounds/sounds/raketa.mp3"));
    bulletSound->setVolume(100);
}

void Igrac::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left){
        setTransformOriginPoint(50,50);
        setRotation(rotation()-10);
    }
    else if(event->key()==Qt::Key_Right){
        setTransformOriginPoint(50,50);
        setRotation(rotation()+10);
    }
    else if(event->key()==Qt::Key_Up){
        //napravi novi projektil
        Raketa *raketa= new Raketa(-10);
        raketa->setPos(x()+55,y()+20);
        scene()->addItem(raketa);

        //postavi rotaciju rakete naspram rotacije broda
        raketa->setRotation(rotation());

        //pusti zvuk rakete
        if (bulletSound->state() == QMediaPlayer::PlayingState){
            bulletSound->setPosition(0);
        } else if(bulletSound->state() == QMediaPlayer::StoppedState){
            bulletSound->play();
        }
    } else if(event->key()==Qt::Key_Down){

        //napravi novi projektil
        Raketa *raketa= new Raketa(10);
        raketa->setPos(x()+75,y()+70);
        scene()->addItem(raketa);

        //postavi rotaciju rakete naspram rotacije broda
        raketa->setRotation(rotation()+180);

        //pusti zvuk rakete
        if (bulletSound->state() == QMediaPlayer::PlayingState){
            bulletSound->setPosition(0);
        } else if(bulletSound->state() == QMediaPlayer::StoppedState){
            bulletSound->play();
        }
    }
}

void Igrac::spawn()
{
    Asteroid *asteroid= new Asteroid();
    scene()->addItem(asteroid);
}
