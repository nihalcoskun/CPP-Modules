#include <iostream>
#include <cstring>

void	print_upper(char *str) 
{
    int 		index;
	std::string	strUpper;

    index = 0;
    while (str[index])
    {
        strUpper += std::toupper(str[index]);
        index++;
    }
	std::cout << strUpper;
}

int main(int argc, char **argv)
{
    int index;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    index = 0;
    while (++index < argc)
        print_upper(argv[index]);
    std::cout << std::endl;
	return (0);
}