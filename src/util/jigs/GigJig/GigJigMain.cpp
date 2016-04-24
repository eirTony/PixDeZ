#include "GigJigMain.h"

#include <QTimer>
#include <QMenuBar>
#include <QStatusBar>

#include "FileMenu.h"
#include "StatusBar.h"
#include "ViewMenu.h"

#include <pdzBase/Diagnostic.h>

GigJigMain::GigJigMain(QWidget * parent)
    : QMainWindow(parent)
{
    setObjectName("GigJigMain");
    DiagnosticItem::exec("PixelDeZ", "GigJig");
    QTimer::singleShot(10, this, SLOT(setupStatusBar()));
}

GigJigMain::~GigJigMain()
{
}

void GigJigMain::setupStatusBar(void)
{
    mpStatusBar = new StatusBar(QMainWindow::statusBar());

    QTimer::singleShot(10, this, SLOT(setupMenus()));
}

void GigJigMain::setupMenus(void)
{
    mpMenuBar = QMainWindow::menuBar();
    mpFileMenu = new FileMenu(this);
    mpViewMenu = new ViewMenu(this);
    mpMenuBar->addMenu(mpFileMenu);
    mpMenuBar->addMenu(mpViewMenu);
}


void GigJigMain::viewStatusToggled(bool checked)
{
    if (checked)
        mpStatusBar->show();
    else
        mpStatusBar->hide();
}
