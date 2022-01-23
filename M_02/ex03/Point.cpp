#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(Point const &cpy) : x(cpy.x), y(cpy.y){}

Point::Point(float const x, float const y) : x(x), y(y){}
Point::Point(Fixed const x, Fixed const y) : x(x), y(y){}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}

Point Point::operator+(Point const &fl)
{
	Point dot(this->x + fl.x, this->y + fl.y);
	return dot;
}

Point Point::operator-(Point const &fl)
{
	Point dot(this->x - fl.x, this->y - fl.y);
	return dot;
}

Point Point::operator*(Point const &fl)
{
	Point dot(this->x * fl.x, this->y * fl.y);
	return dot;
}

Point Point::operator/(Point const &fl)
{
	Point dot(this->x / fl.x, this->y / fl.y);
	return dot;
}

Point::~Point() {}