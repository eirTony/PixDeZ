#include "ViewMenu.h"

#include <QAction>
#include <QTimer>

ViewMenu::ViewMenu(QMainWindow *parent)
    : QMenu(tr("View", "menu"), (QWidget *)(parent))
    , mpMainWindow(parent)
{
    setObjectName("ViewMenu");
    QTimer::singleShot(10, this, SLOT(setup()));
}

void ViewMenu::setup(void)
{
    mpViewStatusAction = new QAction(tr("Status Bar", "Action"),
                                     this);
    mpViewStatusAction->setCheckable(true);
    mpViewStatusAction->setChecked(true);
    connect(mpViewStatusAction, SIGNAL(toggled(bool)),
            (QWidget *)(mpMainWindow), SLOT(viewStatusToggled(bool)));
    QMenu::addAction(mpViewStatusAction);
}

