#ifndef NEWIMAGEDIALOG_H
#define NEWIMAGEDIALOG_H

#include <QDialog>

#include <pdzGeometry/Size.h>

class QHBoxLayout;
class QListWidget;
class QSize;
class QLineEdit;
class QVBoxLayout;
class QWidget;

class NewImageDialog : public QDialog
{
    Q_OBJECT
public:
    explicit NewImageDialog(QWidget * parent=0);
    QImage qImage(void) const;


    //???
    QSize qSize(void) const;
    QImage::Format qFormat(void) const;
    QColor qColor(void) const;

signals:

public slots:

private slots:
    void setup(void);

private:
    QWidget * mpMainWidget = 0;
    QVBoxLayout * mpMainVBox = 0;
    QListWidget * mpSizeList = 0;
    QLineEdit * mpSizeEdit = 0;

private: // const static
    const static Size::List csmSizeList;
};

#endif // NEWIMAGEDIALOG_H
