#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

void Contact::get_info()
{
    std::cout << "first name:\n";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        std::cout << "There isn't a first name\n";
    std::cout << "last name:\n";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        std::cout << "There isn't a last name\n";
    std::cout << "nickname:\n";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        std::cout << "There isn't a nickname\n";
    std::cout << "phone number:\n";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
        std::cout << "There isn't a phone number\n";
    std::cout << "darkest secret:\n";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        std::cout << "There isn't a darkest secret\n";
}

void Contact::appear_head()
{
    std::cout << "---------------------------------------------\n";
    std::cout << "|    id    |first name| last name| nickname |\n";
    std::cout << "---------------------------------------------\n";
}

void Contact::display_info(int id)
{
    std::cout << "|" << std::setw(10) << id << "|";
    if (first_name.size() > 10)
        std::cout << std::setw(9) << first_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << first_name << "|";
    if (last_name.size() > 10)
        std::cout << std::setw(9) << last_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << last_name << "|";
    if (nickname.size() > 10)
        std::cout << std::setw(9) << nickname.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << nickname << "|\n";
}

void Contact::print_all_info()
{
    std::cout << "FirstName: " << first_name.empty() << std::endl;
    std::cout << "LastName: " << last_name << std::endl;
    std::cout << "NickName: " << nickname << std::endl;
    std::cout << "PhoneNumber: " << phone_number << std::endl;
    std::cout << "DarkestSecret: " << darkest_secret << std::endl;
}

bool Contact::isMemberEmpty()
{
    if (first_name.empty())
        return true;
    if (last_name.empty())
        return true;
    if (nickname.empty())
        return true;
    if (phone_number.empty())
        return true;
    if (darkest_secret.empty())
        return true;
    else
        return false;
}