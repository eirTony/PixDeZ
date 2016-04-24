#ifndef GIGJIGMAIN_H
#define GIGJIGMAIN_H

#include <QMainWindow>

class StatusBar;
class FileMenu;
class ViewMenu;

/*
namespace Ui {
class GigJigMain;
}
*/

class GigJigMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit GigJigMain(QWidget * parent=0);
    ~GigJigMain();

public slots:
    void viewStatusToggled(bool checked);

private slots:
    void setupStatusBar(void);
    void setupMenus(void);

private:
//    Ui::GigJigMain *ui;
    QMenuBar * mpMenuBar = 0;
    StatusBar * mpStatusBar = 0;
    FileMenu * mpFileMenu = 0;
    ViewMenu * mpViewMenu = 0;
};

#endif // GIGJIGMAIN_H
