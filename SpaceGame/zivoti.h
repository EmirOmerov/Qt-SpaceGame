#ifndef ZIVOTI_H
#define ZIVOTI_H

#include <QGraphicsTextItem>

class Zivoti : public QGraphicsTextItem
{
public:
    Zivoti(QGraphicsItem * parent=0);
    void decrease();
    int getHealth();
    void gameOver();
private:
    int zivoti;
};

#endif // ZIVOTI_H
