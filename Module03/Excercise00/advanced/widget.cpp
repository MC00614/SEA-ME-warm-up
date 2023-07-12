#include "widget.h"
#include "ui_widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked(){return;}
void Widget::on_pushButton_3_clicked(){return;}


void Widget::on_addButton_clicked()
{
    oldname = ui->nameLine->text();
    oldphone = ui->phoneLine->text();
    oldemail = ui->emailLine->text();
    oldaddress = ui->addressText->toPlainText();

    if (oldname.isEmpty()) {
       QMessageBox::information(this, tr("Empty Name"),
           tr("Please enter a Name"));
       return;
    }

    if(phonebook.is_name_in_list(oldname))
    {
        QMessageBox::information(this,
            tr("Confirm Addition"),
            tr("Name : %1 is already in PhoneBook.").arg(oldname));
        UpdateInterface(Old);
        return;
    }

    Person person(oldname, oldphone, oldemail, oldaddress, false);
    phonebook.add(person);
    QMessageBox::information(this, tr("Add Successful"),
    tr("Name : %1\nPhone Number : %2\nEmail : %3\nAddress : %4\nhas been added to your Phone Book.").arg(oldname,oldphone,oldemail,oldaddress));

    UpdateInterface(Initial);
}


void Widget::UpdateInterface(Mode mode)
{
    CurrentMode = mode;
    switch (CurrentMode)
    {
        case Initial:
            ui->nameLine->setReadOnly(false);
            ui->phoneLine->setReadOnly(false);
            ui->emailLine->setReadOnly(false);
            ui->addressText->setReadOnly(false);

            ui->nameLine->clear();
            ui->phoneLine->clear();
            ui->emailLine->clear();
            ui->addressText->clear();

            ui->refreshButton->setEnabled(true);
            ui->addButton->setEnabled(true);
            ui->searchButton->setEnabled(phonebook.size()>=2);
            ui->bookmarkButton->setEnabled(false);
            ui->removeButton->setEnabled(false);
            ui->cancelButton->setEnabled(false);
            break;

        case Old:
            ui->nameLine->setText(oldname);
            ui->phoneLine->setText(oldphone);
            ui->emailLine->setText(oldemail);
            ui->addressText->setText(oldaddress);
            break;

        case Show:
            ui->nameLine->setReadOnly(true);
            ui->phoneLine->setReadOnly(true);
            ui->emailLine->setReadOnly(true);
            ui->addressText->setReadOnly(true);

            ui->refreshButton->setEnabled(false);
            ui->addButton->setEnabled(false);
            ui->searchButton->setEnabled(false);
            ui->bookmarkButton->setEnabled(!phonebook.is_bookmarked(search_index));
            ui->removeButton->setEnabled(true);
            ui->cancelButton->setEnabled(true);
            break;

    }
}

void Widget::on_searchButton_clicked()
{
     oldname = ui->nameLine->text();
     oldphone = ui->phoneLine->text();
     oldemail = ui->emailLine->text();
     oldaddress = ui->addressText->toPlainText();

     if (oldname.isEmpty())
     {
         QMessageBox::information(this,
         tr("Search Error"),
         tr("Name is Empty.\nType Something!"));
         return;
     }

     search_index = phonebook.search(oldname);
     if (search_index==-1){
         QMessageBox::information(this,
         tr("Search Error"),
         tr("Name : %1 is not in PhoneBook.").arg(oldname));
     }
     else {
         Person found_person = phonebook.index_search(search_index);
         ui->nameLine->setText(found_person.name);
         ui->phoneLine->setText(found_person.phone);
         ui->emailLine->setText(found_person.email);
         ui->addressText->setText(found_person.address);
         UpdateInterface(Show);
     }
}

void Widget::on_cancelButton_clicked()
{
    UpdateInterface(Initial);
}

void Widget::on_removeButton_clicked()
{
    oldname = ui->nameLine->text();
    oldphone = ui->phoneLine->text();
    oldemail = ui->emailLine->text();
    oldaddress = ui->addressText->toPlainText();

    int button = QMessageBox::question(this,
        tr("Confirm Remove"),
        tr("Name : \"%1\" will be removed. \nAre you sure?").arg(oldname),
        QMessageBox::Yes | QMessageBox::No);

    if (button == QMessageBox::No) return;
    else {phonebook.remove(search_index); UpdateInterface(Initial);}
}

void Widget::on_bookmarkButton_clicked()
{
    phonebook.bookmark(search_index);
    UpdateInterface(Show);
}

void Widget::on_removeBookmarkButton_clicked()
{

}
