#ifndef M_02_FIXED_HPP
#define M_02_FIXED_HPP

# include <iostream>

# define NUM_OF_FRAC_BITS 8

class Fixed {
private:
    int fix_point_val;
    static const int    frac_bits = NUM_OF_FRAC_BITS;

public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
	Fixed& operator=(const Fixed &rhs);
	int getRawBits() const;
    void setRawBits( int const raw );
};


#endif //M_02_FIXED_HPP
