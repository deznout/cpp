#include "Fixed.hpp"

Fixed::Fixed() {
	this->fix_point_val = 0;
}

Fixed::Fixed(int const integer) : fix_point_val(integer << frac_bits){
}

Fixed::Fixed(float const fl) : fix_point_val(roundf(fl * (1 << frac_bits))){
}

Fixed::Fixed(const Fixed &other) // ?
{
	*this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	this->fix_point_val = roundf(rhs.toFloat() * (1 << frac_bits));
	return (*this);
}

int Fixed::getRawBits() const {
	return (this->fix_point_val);
}

void Fixed::setRawBits( int const raw ) {
	this->fix_point_val = raw;
}

float Fixed::toFloat() const {
	return ((float )fix_point_val / (1 << frac_bits));
}

int Fixed::toInt() const {
	return fix_point_val >> frac_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	return out << fixed.toFloat();
}

// comparison operators

bool Fixed::operator>(const Fixed &fl) const {
	return this->fix_point_val > fl.getRawBits();
}

bool Fixed::operator<(const Fixed &fl) const {
	return this->fix_point_val < fl.getRawBits();
}

bool Fixed::operator>=(const Fixed &fl) const {
	return this->fix_point_val >= fl.getRawBits();
}

bool Fixed::operator<=(const Fixed &fl) const {
	return this->fix_point_val <= fl.getRawBits();
}

bool Fixed::operator==(const Fixed &fl) const {
	return this->fix_point_val == fl.getRawBits();
}

bool Fixed::operator!=(const Fixed &fl) const {
	return this->fix_point_val != fl.getRawBits();
}

// arithmetic operators

Fixed Fixed::operator+(const Fixed &fl) const {
	return Fixed(this->toFloat() + fl.toFloat());
}

Fixed Fixed::operator-(const Fixed &fl) const {
	return Fixed(this->toFloat() - fl.toFloat());
}

Fixed Fixed::operator*(const Fixed &fl) const {
	return Fixed(this->toFloat() * fl.toFloat());
}

Fixed Fixed::operator/(const Fixed &fl) const {
	if (fl.toInt() != 0)
		return Fixed(this->toFloat() / fl.toFloat());
	else
		throw ZeroDivisionError();
}

// increments/decrements

Fixed& Fixed::operator++() {
	this->fix_point_val++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed res(*this);
	this->fix_point_val++;
	return res;
}

Fixed& Fixed::operator--() {
	this->fix_point_val--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed res(*this);
	this->fix_point_val--;
	return res;
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
	return f1.getRawBits() > f2.getRawBits() ? f1 : f2;
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {
	return f1.getRawBits() < f2.getRawBits() ? f1 : f2;
}
