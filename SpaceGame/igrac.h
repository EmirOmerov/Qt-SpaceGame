#ifndef IGRAC_H
#define IGRAC_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMediaPlayer>

class Igrac:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Igrac();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();
private:
    QMediaPlayer *bulletSound;
};

#endif // IGRAC_H
