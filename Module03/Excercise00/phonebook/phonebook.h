#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "person.h"
#include <QVector>
#include <QString>
#include <vector>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void add(Person person);
    bool is_name_in_list(QString oldname);
    bool is_phone_in_list(QString oldphone);
    bool is_email_in_list(QString oldemail);
    bool is_address_in_list(QString oldaddress);
    void search();
    void remove();
    void bookmark();


private:
    std::vector<Person> PB;
};

#endif // PHONEBOOK_H
