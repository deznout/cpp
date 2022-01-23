#ifndef M_02_POINT_HPP
#define M_02_POINT_HPP

# include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(Point const &cpy);
	Point(float const x, float const y);

	Fixed getX() const;
	Fixed getY() const;

	Point& operator=(Point const& fl);
	Point operator+(Point const& fl);
	Point operator-(Point const& fl);
	Point operator*(Point const& fl);
	Point operator/(Point const& fl);
	Point(Fixed const x, Fixed const y);

	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //M_02_POINT_HPP
