#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setGeometry(test_game.car0.x_location,test_game.car0.y_location,100,100);

    connect(test_game.m_timer, SIGNAL(timeout()), this, SLOT(update()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update()
{
    ui->label->setGeometry(test_game.car0.x_location,test_game.car0.y_location,100,100);
//    qDebug()<<test_game.car0.x_location<<test_game.car0.y_location;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
    case Qt::Key_W:
    {
//        test_game.car0.x_location = 400;
        qDebug()<<1;
        test_game.car0.y_location += 1;
    }
        break;
    case Qt::Key_Right:
    case Qt::Key_D:
    {
        test_game.car0.x_location += 1;
//        test_game.car0.y_location = 100;
        qDebug()<<2;
    }
        break;
    case Qt::Key_Down:
    case Qt::Key_S:
    {
//        test_game.car0.x_location = 200;
        qDebug()<<3;
        test_game.car0.y_location -= 1;
    }
        break;
    case Qt::Key_A:
    case Qt::Key_Left:
    {
        test_game.car0.x_location -= 1;
        qDebug()<<4;
//        test_game.car0.y_location = 300;
    }
        break;
    }
//    MainkeyPressEvent(event);
}
//void game::keyReleaseEvent(QKeyEvent *event)
//{
// return;
//}
