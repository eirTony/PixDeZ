#include "NewImageDialog.h"

#include <QPushButton>
#include <QListWidget>
#include <QListWidgetItem>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QTimer>
#include <QVBoxLayout>

#include <pdzBase/Diagnostic.h>
#include <pdzBabel/Babel.h>
#include <pdzBabel/Readable.h>
#include <pdzGeometry/Size.h>

const Size::List NewImageDialog::csmSizeList
                    = Size::List()
                        << Size( 640.0,  480.0)
                        << Size(1280.0,  960.0)
                           ;

NewImageDialog::NewImageDialog(QWidget * parent)
    : QDialog(parent)
{
    setObjectName("NewImageDialog");
    QTimer::singleShot(10, this, SLOT(setup()));

}

void NewImageDialog::setup(void)
{
    QDialog::setModal(true);
    mpMainWidget = new QWidget(this);
    mpMainWidget->setObjectName("NewImageDialog:mpMainWidget");

    mpMainVBox = new QVBoxLayout(this);
    mpMainVBox->setObjectName("NewImageDialog:mpMainVBox");
    mpMainWidget->setLayout(mpMainVBox);

    QHBoxLayout * topHBox = new QHBoxLayout(this);
    topHBox->setObjectName("NewImageDialog:topHBox");
    mpMainVBox->addLayout(topHBox);

    QVBoxLayout * sizeVBox = new QVBoxLayout(this);
    sizeVBox->setObjectName("NewImageDialog:sizeVBox");
    topHBox->addLayout(sizeVBox);
    sizeVBox->addWidget(new QLabel(tr("Image Size", "label"),
                                      this));

    mpSizeList = new QListWidget(this);
    foreach (Size sz, csmSizeList)
    {
        TODO("Issue#3"); USE(sz);
        QString s = "640,480"; //Readable(sz);
        QListWidgetItem * pItem = new QListWidgetItem(s, mpSizeList);
        mpSizeList->addItem(pItem);
    }
    mpSizeList->addItem("Custom");
    sizeVBox->addWidget(mpSizeList);

    mpSizeEdit = new QLineEdit(this);
    sizeVBox->addWidget(mpSizeEdit);

    QVBoxLayout * formatVBox = new QVBoxLayout(this);
    formatVBox->addWidget(new QLabel(tr("Pixel Format", "label"),
                                     this));
    topHBox->addLayout(formatVBox);

    QVBoxLayout * colorVBox = new QVBoxLayout(this);
    colorVBox->addWidget(new QLabel(tr("Color", "label"),
                                     this));
    topHBox->addLayout(colorVBox);

    QHBoxLayout * buttonHBox = new QHBoxLayout(this);
    buttonHBox->setObjectName("NewImageDialog:buttonHBox");
    mpMainVBox->addLayout(buttonHBox);
    QPushButton * okButton = new QPushButton(tr("OK","button"),
                                             this);
    okButton->setObjectName("NewImageDialog:okButton");
    okButton->setEnabled(false);
    QPushButton * cancelButton = new QPushButton(tr("Cancel","button"),
                                             this);
    cancelButton->setObjectName("NewImageDialog:cancelButton");
    buttonHBox->addWidget(okButton);
    buttonHBox->addWidget(cancelButton);

}

QImage NewImageDialog::qImage(void) const
{
    return QImage();
}
