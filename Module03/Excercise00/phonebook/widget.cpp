#include "widget.h"
#include "ui_widget.h"
#include <QtWidgets>
#include <algorithm>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QLabel *nameLabel = new QLabel(tr("Name:"));
    nameLine = new QLineEdit;
    nameLine->setReadOnly(false);
    QLabel *phoneLabel = new QLabel(tr("Phone:"));
    phoneLine = new QLineEdit;
    phoneLine->setReadOnly(false);
    QLabel *emailLabel = new QLabel(tr("Email:"));
    emailLine = new QLineEdit;
    emailLine->setReadOnly(false);
    QLabel *addressLabel = new QLabel(tr("Address:"));
    addressText = new QTextEdit;
    addressText->setReadOnly(false);

    addButton = new QPushButton(tr("&ADD"));

    connect(addButton, SIGNAL(clicked()), this, SLOT(addContact()));

    QVBoxLayout *buttonLayout1 = new QVBoxLayout;
    buttonLayout1->addWidget(addButton);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(nameLabel,0,0);
    mainLayout->addWidget(phoneLabel,1,0);
    mainLayout->addWidget(emailLabel,2,0);
    mainLayout->addWidget(addressLabel,3,0,Qt::AlignTop);
    mainLayout->addWidget(nameLine,0,1);
    mainLayout->addWidget(phoneLine,1,1);
    mainLayout->addWidget(emailLine,2,1);
    mainLayout->addWidget(addressText,3,1);

    mainLayout->addLayout(buttonLayout1,1,2);

    setLayout(mainLayout);
    setWindowTitle(tr("Phone Book Program"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::addContact()
{
    oldname = nameLine->text();
    oldphone = phoneLine->text();
    oldemail = emailLine->text();
    oldaddress = addressText->toPlainText();

    bool addCheck = true;

    if(phonebook.is_name_in_list(oldname))
    {
        addCheck = false;
        int button = QMessageBox::question(this,
            tr("Confirm Addition"),
            tr("Name : \"%1\" is already in PhoneBook. \n Are you sure?").arg(oldname),
            QMessageBox::Yes | QMessageBox::No);
        if (button == QMessageBox::No) {UpdateInterface(Old); return;}
        else addCheck = true;
    }

    if (phonebook.is_phone_in_list(oldphone))
    {
        addCheck = false;
        int button = QMessageBox::question(this,
            tr("Confirm Addition"),
            tr("Phone Number : \"%1\" is already in PhoneBook. \n Are you sure?").arg(oldphone),
            QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::No){UpdateInterface(Old);return;}
        else addCheck = true;
    }


    if (phonebook.is_email_in_list(oldemail))
    {
        addCheck = false;
        int button = QMessageBox::question(this,
            tr("Confirm Addition"),
            tr("Email : \"%1\" is already in PhoneBook. \n Are you sure?").arg(oldemail),
            QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::No){UpdateInterface(Old);return;}
        else addCheck = true;
    }

    if (phonebook.is_address_in_list(oldaddress))
    {
        addCheck = false;
        int button = QMessageBox::question(this,
            tr("Confirm Addition"),
            tr("Address : \"%1\" is already in PhoneBook. \n Are you sure?").arg(oldaddress),
            QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::No){UpdateInterface(Old);return;}
        else addCheck = true;
    }

    if (addCheck){
        Person person(oldname, oldphone, oldemail, oldaddress, false);
        phonebook.add(person);
        QMessageBox::information(this, tr("Add Successful"),
        tr("Name : %1\nPhone Number : %2\nEmail : %3\nAddress : %4\nhas been added to your Phone Book.").arg(oldname,oldphone,oldemail,oldaddress));
    }

    UpdateInterface(Initial);
}

void Widget::UpdateInterface(Mode mode)
{
    CurrentMode = mode;
    switch (CurrentMode)
    {
        case Initial:
            nameLine->clear();
            phoneLine->clear();
            emailLine->clear();
            addressText->clear();
            break;

        case Old:
            nameLine->setText(oldname);
            phoneLine->setText(oldphone);
            emailLine->setText(oldemail);
            addressText->setText(oldaddress);
            break;
    }
}


