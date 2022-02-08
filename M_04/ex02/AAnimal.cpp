#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	setType("AAnimal");
	std::cout << this << "'s default constructor was called\n";
}

AAnimal::AAnimal(AAnimal &other)
{
	std::cout << this << "'s copy constructor was called\n";
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << this << "'s assignation operator was called\n";
	type = rhs.type;
	return *this;
}

std::string AAnimal::getType() const { return type; }

void AAnimal::setType(const std::string& _type)
{
	this->type = _type;
}

AAnimal::~AAnimal() {
	std::cout << this << "'s destructor was called\n";
}
