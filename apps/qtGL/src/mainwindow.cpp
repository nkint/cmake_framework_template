#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QHBoxLayout *layout = new QHBoxLayout();

    l = new QLabel;
    l->setText(QString("dudee:"));
    layout->addWidget(l);

    w = new GLWidget();
    w->setParent(this->centralWidget());
    layout->addWidget(w);

    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    this->setCentralWidget(widget);
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
