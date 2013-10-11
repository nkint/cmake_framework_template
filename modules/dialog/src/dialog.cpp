#include "dialog/dialog.h"
#include "ui_dialog.h"

#include <QDebug>
#include <QPixmap>
#include <QLabel>
#include <QFile>
#include <QDirIterator>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QDirIterator it(":/icons", QDirIterator::Subdirectories);
    while (it.hasNext()) {
        qDebug() << it.next();
    }
}

Dialog::~Dialog()
{
    delete ui;
}
