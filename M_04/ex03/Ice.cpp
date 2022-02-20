#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << this << " Ice's Def constructor was called\n";
}

Ice::Ice(const std::string &type) : AMateria(type) {
	std::cout << this << " ice's constructor was called\n";
}

Ice::Ice(Ice &other) : AMateria(other.type)
{
	std::cout << this << " ice's copy constructor was called\n";
	*this = other;
}

Ice &Ice::operator=(const Ice &rhs)
{
	std::cout << this << " ice's assignation operator was called\n";
	type = rhs.type;
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice() {
	std::cout << this << " ice's destructor was called\n";
}
