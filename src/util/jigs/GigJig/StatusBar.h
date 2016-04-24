#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QStatusBar>

class QLabel;

class StatusBar : public QStatusBar
{
    Q_OBJECT
public:
    explicit StatusBar(QStatusBar * parent);

signals:

public slots:

private slots:
    void Setup(void);

private:
    QLabel * mpColorLabel;

};

#endif // STATUSBAR_H
