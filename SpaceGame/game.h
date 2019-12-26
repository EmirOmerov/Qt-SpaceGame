#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "igrac.h"
#include "poeni.h"
#include "zivoti.h"

class Game: public QGraphicsView
{
public:
    Game(QWidget *parent=0);
    QGraphicsScene *scene;
    Igrac *igrac;
    Poeni *poeni;
    Zivoti *zivoti;
    void gameOver();
};

#endif // GAME_H
