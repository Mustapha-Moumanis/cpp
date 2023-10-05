#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string enter;
	while (1)
	{
		if (std::cin.eof())
			exit (0);

		std::cout << "------------------------------" << std::endl;
		std::cout << "|  Please enter one of this  |" << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << "|  ADD  |  SEARCH  |  EXIT   |" << std::endl;
		std::cout << "------------------------------" << std::endl;

		std::getline(std::cin, enter);
		if (enter == "ADD")
			phoneBook.Add();
		else if (enter == "SEARCH")
			phoneBook.Search();
		else if (enter == "EXIT")
			break ;
	}
	return (0);
}