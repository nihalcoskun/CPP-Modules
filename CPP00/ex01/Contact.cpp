#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::fillContact(int index)
{
    _index = index;
    std::cout << "Please fill the following contact informations."<< std::endl;
    std::cout << "First Name: " << std::endl;
    std::getline(std::cin, first_name);
    std::cout << "Last Name: " << std::endl;
    std::getline(std::cin, last_name);
    std::cout << "Nickname: " << std::endl;
    std::getline(std::cin, nick_name);
    std::cout << "Phone Number: " << std::endl;
    std::getline(std::cin, phone_number);
    std::cout << "Darkest Secret: " << std::endl;
    std::getline(std::cin, darkest_secret);
}

void Contact::setIndex(int index)
{
    _index = index;
}

static void printTenChar(std::string str)
{
    int len;
    std::string spaces(10,' ');

    len = str.length();
    if(len <= 10)
    {
        std::cout << spaces.substr(0, 10 - len) << str;
    }
    else
    {
        std::cout << str.substr(0,9) << ".";
    }

}

void Contact::displayContact(void) const
{    
    std::string index = "";
    index += _index + '0';
    printTenChar(index);
    std::cout << "|" ;
    printTenChar(first_name);
    std::cout << "|" ;
    printTenChar(last_name);   
    std::cout << "|" ;
    printTenChar(nick_name);
    std::cout << std::endl ;
}

void Contact::displayContactDetails(void) const
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nick_name << std::endl; 
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}