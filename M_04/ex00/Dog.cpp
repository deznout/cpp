#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << this << " dog's default constructor was called\n";
}

Dog::Dog(Dog &other) : Animal(other)
{
	std::cout << this << " dog's copy constructor was called\n";
	*this = other;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << this << " dog's assignation operator was called\n";
	type = rhs.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "GAF GAF!\n";
}

Dog::~Dog() {
	std::cout << this << " dog's destructor was called\n";
}
