#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << this << "'s default constructor was called\n";
}

WrongAnimal::WrongAnimal(const std::string& name) : type(name) {
	std::cout << this << "'s constructor was called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << this << "'s copy constructor was called\n";
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << this << "'s assignation operator was called\n";
	type = rhs.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "UURRR!\n";
}

std::string WrongAnimal::getType() const { return type; }

WrongAnimal::~WrongAnimal() {
	std::cout << this << "'s destructor was called\n";
}
