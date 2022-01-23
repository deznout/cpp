#ifndef M_02_FIXED_HPP
#define M_02_FIXED_HPP

# include <iostream>
# include <cmath>

# define NUM_OF_FRAC_BITS 8

class Fixed {
private:
	int fix_point_val;
	static const int    frac_bits = NUM_OF_FRAC_BITS;

public:
	Fixed();
	Fixed(int integer);
	Fixed(float fl);
	Fixed(const Fixed &other);
	~Fixed();

	Fixed& operator=(const Fixed &rhs);
	Fixed operator+(const Fixed &fl) const;
	Fixed operator-(const Fixed &fl) const;
	Fixed operator*(const Fixed &fl) const;
	Fixed operator/(const Fixed &fl) const;

	bool operator>(const Fixed &fl) const;
	bool operator<(const Fixed &fl) const;
	bool operator>=(const Fixed &fl) const;
	bool operator<=(const Fixed &fl) const;
	bool operator==(const Fixed &fl) const;
	bool operator!=(const Fixed &fl) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed min(const Fixed &f1, const Fixed &f2);
	static Fixed max(const Fixed &f1, const Fixed &f2);

	int getRawBits() const;
	void setRawBits( int const raw );
	float toFloat() const;
	int toInt() const;
};

struct ZeroDivisionError: public std::exception
{
	const char* what() const throw() { return "division by zero"; }
};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);

#endif //M_02_FIXED_HPP
