#ifndef IMAGESCENE_H
#define IMAGESCENE_H

#include <QGraphicsScene>

class ImageScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit ImageScene(QObject * parent=0);
    ImageScene(const QImage & image,
               QObject *parent=0);
    bool set(const QImage & image);

signals:

public slots:

private:
    QImage mImage;
};

#endif // IMAGESCENE_H
