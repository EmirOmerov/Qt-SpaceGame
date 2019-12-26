#ifndef POENI_H
#define POENI_H

#include <QGraphicsTextItem>

class Poeni : public QGraphicsTextItem
{
public:
    Poeni(QGraphicsItem * parent=0);
    void increase();
    int getScore();
private:
    int poeni;
};

#endif // POENI_H
