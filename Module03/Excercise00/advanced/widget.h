#ifndef WIDGET_H
#define WIDGET_H

#include "phonebook.h"
#include "person.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    enum Mode {Initial, Old, Show};

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_addButton_clicked();

    void on_searchButton_clicked();

    void on_cancelButton_clicked();

    void on_removeButton_clicked();

    void on_bookmarkButton_clicked();

    void on_removeBookmarkButton_clicked();

private:
    int search_index;
    Ui::Widget *ui;
    QString oldname;
    QString oldphone;
    QString oldemail;
    QString oldaddress;
    PhoneBook phonebook;
    void UpdateInterface(Mode mode);
    Mode CurrentMode;
};
#endif // WIDGET_H
