#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

bool Contact::get_info()
{
	std::cin.ignore();
	std::cout << "first name: ";
	std::getline(std::cin, first_name);
	if (std::cin.eof() || first_name.empty())
	{
		std::cout << "There isn't a first name\n";
		return false;
	}
	std::cout << "last name: ";
	std::getline(std::cin, last_name);
	if (std::cin.eof() || last_name.empty())
	{
		std::cout << "There isn't a last name\n";
		return false;
	}
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof() || nickname.empty())
	{
		std::cout << "There isn't a nickname\n";
		return false;
	}
	std::cout << "phone number: ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof() || phone_number.empty())
	{
		std::cout << "There isn't a phone number\n";
		return false;
	}
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof() || darkest_secret.empty())
	{
		std::cout << "There isn't a darkest secret\n";
		return false;
	}
	return true;
}

void Contact::display_info(int id)
{
	std::cout << "|" << std::setw(10) << id + 1 << "|";
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
	std::cout << "FirstName: " << first_name << std::endl;
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
