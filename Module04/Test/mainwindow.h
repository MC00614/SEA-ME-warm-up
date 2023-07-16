#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    game test_game;
    virtual void keyPressEvent(QKeyEvent *event) override;
//    virtual void keyReleaseEvent(QKeyEvent *event) override;
public slots:
    void update();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
