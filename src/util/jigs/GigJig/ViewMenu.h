#ifndef VIEWMENU_H
#define VIEWMENU_H

#include <QMenu>

class QMainWindow;

class QAction;

class ViewMenu : public QMenu
{
    Q_OBJECT
public:
    explicit ViewMenu(QMainWindow * parent=0);

signals:
    void viewStatusChanged(bool checked);

public slots:

private slots:
    void setup(void);

private:
    QMainWindow * mpMainWindow = 0;
    QAction * mpViewStatusAction = 0;
};

#endif // VIEWMENU_H
