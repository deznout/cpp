#include "Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << this << " cat's default constructor was called\n";
}

Cat::Cat(Cat &other) : Animal(other)
{
	std::cout << this << " cat's copy constructor was called\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << this << " cat's assignation operator was called\n";
	type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MYAU MYAU!\n";
}

Cat::~Cat() {
	std::cout << this << " cat's destructor was called\n";
}
