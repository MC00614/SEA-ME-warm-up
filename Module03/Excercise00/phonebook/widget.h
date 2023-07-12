#ifndef WIDGET_H
#define WIDGET_H

#include "phonebook.h"
#include "person.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
class QLabel;
class QLineEdit;
class QTextEdit;
class QPushButton;
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    enum Mode {Initial, Old};

public slots:
    void addContact();

private:
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;

    QLineEdit *nameLine;
    QLineEdit *phoneLine;
    QLineEdit *emailLine;
    QTextEdit *addressText;

    QString oldname;
    QString oldphone;
    QString oldemail;
    QString oldaddress;

    PhoneBook phonebook;

    void UpdateInterface(Mode mode);
    Mode CurrentMode;

    Ui::Widget *ui;

};
#endif // WIDGET_H
