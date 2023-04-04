#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#define maxContactNum 8

class PhoneBook
{
    private:
    int last_index;
    Contact contact_list[maxContactNum];

    public:
     PhoneBook();
    ~PhoneBook();
    void addContact(void);
    void searchContact(void) const;
};

#endif