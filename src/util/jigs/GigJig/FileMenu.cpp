#include "FileMenu.h"

#include <QAction>
#include <QApplication>
#include <QTimer>

#include "NewImageDialog.h"

FileMenu::FileMenu(QMainWindow * parent)
    : QMenu(tr("&File", "menu"), (QWidget *)(parent))
    , mpMainWindow(parent)
{
    setObjectName("NewImageDialog");
    QTimer::singleShot(10, this, SLOT(setup()));
}

void FileMenu::setup(void)
{
    mpFileNewAction  = new QAction(tr("&New",  "Action"), this);
    connect(mpFileNewAction, SIGNAL(triggered()),
            this, SLOT(newImage()));

    mpFileExitAction = new QAction(tr("E&xit", "Action"), this);
    connect(mpFileExitAction, SIGNAL(triggered(void)),
            (QWidget *)(qApp), SLOT(quit(void)));

    QMenu::addAction(mpFileNewAction);
    QMenu::addAction(mpFileExitAction);
}

void FileMenu::newImage(void)
{
    if ( ! mpNewImageDialog)
        mpNewImageDialog = new NewImageDialog(this);
    int r = mpNewImageDialog->exec();
    if (QDialog::Accepted == r)
    {
        QImage qImage = mpNewImageDialog->qImage();
        if ( ! qImage.isNull())
            emit newImage(qImage);
    }
}
