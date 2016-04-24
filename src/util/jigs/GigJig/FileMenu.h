#ifndef FILEMENU_H
#define FILEMENU_H

#include <QMenu>

class QMainWindow;

class NewImageDialog;

class FileMenu : public QMenu
{
    Q_OBJECT
public:
    FileMenu(QMainWindow * parent=0);

signals:
    void newImage(QImage);

public slots:

private slots:
    void setup(void);
    void newImage(void);

private:
    QMainWindow * mpMainWindow = 0;
    QAction * mpFileNewAction = 0;
    QAction * mpFileExitAction = 0;
    NewImageDialog * mpNewImageDialog = 0;
};

#endif // FILEMENU_H
