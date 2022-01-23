#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called of " << this << "\n";
	this->fix_point_val = 0;
}

Fixed::Fixed(int const integer) : fix_point_val(integer << frac_bits)
{
	std::cout << "Int constructor called of " << this << "\n";
}

Fixed::Fixed(float const fl) : fix_point_val(roundf(fl * (1 << frac_bits)))
{
	std::cout << "Float constructor called of " << this << "\n";
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
	this->fix_point_val = roundf(rhs.toFloat() * (1 << frac_bits));
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

float Fixed::toFloat() const
{
	return ((float )fix_point_val / (1 << frac_bits));
}

int Fixed::toInt() const
{
	return fix_point_val >> frac_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	return out << fixed.toFloat();
}
