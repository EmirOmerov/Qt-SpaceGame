#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QApplication>
#include <QTimer>
#include "igrac.h"
#include "game.h"

Game *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->show();

    return a.exec();
}
