#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed aX = a.getX();
	Fixed aY = a.getY();
	Fixed bX = b.getX();
	Fixed bY = b.getY();
	Fixed cX = c.getX();
	Fixed cY = c.getY();
	Fixed dotX = point.getX();
	Fixed dotY = point.getY();

	Fixed	sgn1, sgn2, sgn3;
	sgn1 = Fixed((aX - dotX) * (bY - aY) - (bX - aX) * (aY - dotY));
	sgn2 = Fixed((bX - dotX) * (cY - bY) - (cX - bX) * (bY - dotY));
	sgn3 = Fixed((cX - dotX) * (aY - cY) - (aX - cX) * (cY - dotY));

	if (sgn1 > 0 && sgn2 > 0 && sgn3 > 0)
		return (true);
	else if (sgn1 < 0 && sgn2 < 0 && sgn3 < 0)
		return (true);
	return (false);
}
