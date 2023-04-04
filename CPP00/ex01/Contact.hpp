#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    private:
    int _index;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact();
    ~Contact();
    void fillContact(int index);
    void displayContact(void) const;
    void displayContactDetails(void) const;
    void setIndex(int index);

};

#endif