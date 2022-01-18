#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook   phoneBook;
	int         id;

	id = 0;
	while (command != "EXIT")
	{
		std::cout << "Please, type the commands below:\n";
		std::cout << "ADD === SEARCH === EXIT\n>$ ";
		std::cin >> command;
		if (std::cin.eof())
			break ;
		if (command == "ADD")
		{
			id = phoneBook.adding_contact(id);
			if (id == 8)
				id = 0;
		}
		else if (command == "SEARCH")
			phoneBook.search_contact();
	}
	std::cout << "PhoneBook closing...\nBye!\n";
	return (0);
}
