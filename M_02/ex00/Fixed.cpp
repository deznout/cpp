#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called of " << this << "\n";
	this->fix_point_val = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called of " << this << "\n";
	*this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called of " << this << "\n";
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called\n";
	this->fix_point_val = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
	return (this->fix_point_val);
}

void Fixed::setRawBits( int const raw )
{
	this->fix_point_val = raw;
}
