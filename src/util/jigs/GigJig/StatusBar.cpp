#include "StatusBar.h"

#include <QLabel>
#include <QTimer>

StatusBar::StatusBar(QStatusBar * parent)
    : QStatusBar(parent)
{
    setObjectName("StatusBar");
    QTimer::singleShot(10, this, SLOT(Setup()));
}

void StatusBar::Setup(void)
{
    mpColorLabel = new QLabel("<none>", this);
    QStatusBar::addWidget(mpColorLabel);
}
