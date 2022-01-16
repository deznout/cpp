#include "PhoneBook.h"

PhoneBook::PhoneBook() {};

PhoneBook::~PhoneBook() {};

int PhoneBook::adding_contact(int id)
{
    contacts[id].get_info();
    std::cout << "Contact " << id << " added.\n";
    return (id);
}

void PhoneBook::search_contact()
{
    int index;

    index = 0;
    contacts->appear_head();
    while (++index < 9)
        contacts[index].display_info(index);
    std::cout << "---------------------------------------------\n";
    std::cout << "Which would you like to see?\n";
    std::cin >> index;
    contacts[index].print_all_info();
}
