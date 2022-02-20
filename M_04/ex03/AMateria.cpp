#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {
	std::cout << this << "'s constructor was called\n";
}

AMateria::AMateria(AMateria &other)
{
	std::cout << this << "'s copy constructor was called\n";
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	std::cout << this << "'s assignation operator was called\n";
	type = rhs.type;
	return *this;
}

std::string const &AMateria::getType() const { return type; }

void AMateria::use(ICharacter &target) {
	std::cout << target.getName() << std::endl;
}

AMateria::~AMateria() {
	std::cout << this << "'s destructor was called\n";
}
