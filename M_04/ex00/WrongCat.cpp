#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << this << " wrongCat's default constructor was called\n";
}

void WrongCat::makeSound() const
{
	WrongAnimal::makeSound();
}

WrongCat::~WrongCat() {
	std::cout << this << " wrongCat's destructor was called\n";
}
