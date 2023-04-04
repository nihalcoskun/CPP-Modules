#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	last_index = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::addContact(void)
{
    if(last_index == maxContactNum - 1)
    {
        for(int i = 0; i < maxContactNum - 1; i++)
        {
            contact_list[i] = contact_list[i + 1]; 
            contact_list[i].setIndex(i);
        }
        contact_list[last_index].fillContact(last_index);
    }
    else
    {
        last_index++;
        contact_list[last_index].fillContact(last_index);
    }
    std::cout << std::endl;
}

static void	displayHeader(void) 
{
	std::string	header;
	std::string	line(43, '-');

	header += "     Index|";
	header += "First Name|";
	header += " Last Name|";
	header += "  Nickname";
	std::cout << header << std::endl << line << std::endl;
}

static int	stringToInt(std::string str)
{
	int	i;
	int res = 0;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	if (str[i])
		return (-1);
	return (res);
}

void PhoneBook::searchContact(void) const
{
    int i;
    int index;
    std::string indexStr;

    if(last_index == -1)
    {
        std::cout << "Phonebook is empty." << std::endl << std::endl;
		return ;
    }

    displayHeader();
    i = -1;
    while(++i <= last_index)
    {
        contact_list[i].displayContact();
    }
    std::cout << std::endl;
    index = -1;
    while(index < 0 || index > last_index)
    {
        std::cout << "Enter a valid index ";
		std::getline(std::cin, indexStr);
		index = stringToInt(indexStr);
    }  

    contact_list[index].displayContactDetails();
        std::cout << std::endl;
}