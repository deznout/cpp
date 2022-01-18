#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {};

PhoneBook::~PhoneBook() {};

int PhoneBook::adding_contact(int id)
{
	if (contacts[id].get_info())
	{
		std::cout << "Contact " << id + 1 << " was added.\n";
		return (id + 1);
	}
	else
	{
		std::cout << "Contact " << id + 1 << " wasn't added.\n";
		return (id);
	}
}

void PhoneBook::search_contact()
{
	int	index;
	std::string chosen;

	index = -1;
	std::cout << "---------------------------------------------\n";
	std::cout << "|    id    |first name| last name| nickname |\n";
	std::cout << "---------------------------------------------\n";
	while (++index < 8)
		if (!contacts[index].isMemberEmpty())
			contacts[index].display_info(index);
	std::cout << "---------------------------------------------\n";
	std::cout << "Which would you like to see?\n>$ ";
	std::cin >> chosen;
	index = atoi(chosen.c_str());
	if (index < 1 || index > 8)
	{
		std::cout << "This contact doesn't exist\n";
		return ;
	}
	if (!contacts[--index].isMemberEmpty())
		contacts[index].print_all_info();
	else
	{
		std::cout << "This contact doesn't exist\n";
		return ;
	}
}
