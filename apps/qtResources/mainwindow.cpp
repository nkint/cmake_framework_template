#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    l = new QLabel;
    l->setText(QString("dudee"));
    l->setParent(this->centralWidget());

    connect(ui->pushButton, SIGNAL(clicked()),
            this, SLOT(changeText()));

    QFile File(":/style.qss");
    File.open(QFile::ReadOnly);
    QString ss = QLatin1String(File.readAll());
    setStyleSheet(ss);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    l->setText(QString("Hello world!"));
    l->adjustSize();

    Foo foo;
    foo.foo();

    QWidget *w = new QWidget;
    QLabel *l = new QLabel;
    l->setPixmap(QPixmap::fromImage(QImage(":/lena.jpg")));
    l->setParent(w);
    l->adjustSize();
    w->show();


}
