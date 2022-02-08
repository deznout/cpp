#include "Brain.hpp"

Brain::Brain() {
	std::cout << this << " brain's default constructor was called\n";
}

Brain::Brain(Brain &other)
{
	std::cout << this << " brain's copy constructor was called\n";
	*this = other;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << this << " brain's assignation operator was called\n";
	for ( int i = 0; i < NUM_IDEAS; i++ ) {
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << this << " brain's destructor was called\n";
}
