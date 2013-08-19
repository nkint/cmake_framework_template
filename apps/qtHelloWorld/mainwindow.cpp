#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    l->setText(QString("Hello world!"));
    l->adjustSize();
}
