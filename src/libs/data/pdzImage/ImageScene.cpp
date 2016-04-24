#include "ImageScene.h"

ImageScene::ImageScene(QObject *parent)
    : QGraphicsScene(parent)
{
}

ImageScene::ImageScene(const QImage & image,
                        QObject * parent)
    : QGraphicsScene(parent)
{
    set(image);
}

bool ImageScene::set(const QImage & image)
{
    mImage = image;
    return false;
}
