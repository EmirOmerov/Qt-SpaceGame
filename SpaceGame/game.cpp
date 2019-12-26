#include <QTimer>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QBrush>
#include <QImage>
#include <QDebug>
#include "game.h"
#include "asteroid.h"

Game::Game(QWidget *parent)
{
    QGraphicsScene *scene=new QGraphicsScene();
    scene->setSceneRect(0,0,1000,1000);
    setBackgroundBrush(QBrush(QImage(":/images/background.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,1000);

    // stvaranje playera
    Igrac *igrac = new Igrac();
    igrac->setPos(450,450);

    igrac->setFlag(QGraphicsItem::ItemIsFocusable);
    igrac->setFocus();

    scene->addItem(igrac);

    //stvaranje rezultata
    poeni = new Poeni();
    scene->addItem(poeni);

    //stvaranje zivota
    zivoti = new Zivoti();
    zivoti->setPos(zivoti->x(),zivoti->y()+25);
    scene->addItem(zivoti);

    //pravimo neprijatelje
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),igrac,SLOT(spawn()));
    timer->start(2000);

    //pustanje pozadinske muzike na repeat
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/new/sounds/sounds/pozadina.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);


    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();


    show();
}

void Game::gameOver()
{
    qDebug() << "Game Over";
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,1000);
    setScene(scene);
    setFixedSize(1000,1000);

    QGraphicsTextItem *text = scene->addText("Game Over");
    text->setPos(380, 350);
    text->setDefaultTextColor(Qt::white);
    text->setFont(QFont("times",42));
}
