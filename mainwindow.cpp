#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGridLayout *grd = new QGridLayout(this);
    MainWindow::addButton(grd);
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addButton(QGridLayout *grd)
{
    QWidget *central = new QWidget(this);
    grd = new QGridLayout(central);

    for (int i = 0; i < 10; ++i) {
        QPushButton *btn = new QPushButton(QString("Masa %1").arg(i + 1));
        grd->addWidget(btn, i / 5, i % 5);  // 5 sütunlu grid
        connect(btn,SIGNAL(clicked(bool)),this,SLOT([=](){

        }));

    }

    central->setLayout(grd);
    setCentralWidget(central); // MainWindow içindeysen bunu yap
}


