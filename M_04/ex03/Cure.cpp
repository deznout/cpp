#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << this << " Cure's Def constructor was called\n";
}

Cure::Cure(const std::string &type) : AMateria(type) {
	std::cout << this << " Cure's constructor was called\n";
}

Cure::Cure(Cure &other) : AMateria(other.type)
{
	std::cout << this << " Cure's copy constructor was called\n";
	*this = other;
}

Cure &Cure::operator=(const Cure &rhs)
{
	std::cout << this << " Cure's assignation operator was called\n";
	type = rhs.type;
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure() {
	std::cout << this << " Cure's destructor was called\n";
}


