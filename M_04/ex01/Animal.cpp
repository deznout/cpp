#include "Animal.hpp"

Animal::Animal()
{
	setType("Animal");
	std::cout << this << "'s default constructor was called\n";
}

Animal::Animal(Animal &other)
{
	std::cout << this << "'s copy constructor was called\n";
	*this = other;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << this << "'s assignation operator was called\n";
	type = rhs.type;
	return *this;
}

std::string Animal::getType() const { return type; }

void Animal::setType(const std::string& _type)
{
	this->type = _type;
}

void Animal::makeSound() const
{
	std::cout << "ARRRR!\n";
}

Animal::~Animal() {
	std::cout << this << "'s destructor was called\n";
}
