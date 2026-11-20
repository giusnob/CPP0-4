#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int     _count;  // quanti contatti salvati (max 8)
    int     _next;   // dove scriverò il prossimo (rotazione)

public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact() const;
};

#endif