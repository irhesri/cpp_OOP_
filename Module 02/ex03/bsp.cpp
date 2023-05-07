#include "Point.hpp"

float	area(Point x, Point y, Point z, bool *b)
{
	Fixed	tmp = x.getX() * (y.getY() - z.getY())
			+ y.getX() * (z.getY() - x.getY())
			+ z.getX() * (x.getY() - y.getY());
	
	float	a = fabs((tmp.toFloat()) / 2);
	(*b) |= (a == 0);
	return (a);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	x = 0;
	float	a1, a2;

	a1 = area(a, b, c, &x);
	a2 = area(a, b, point, &x);
	a2 += area(a, c, point, &x);
	a2 += area(c, b, point, &x);
	return ((a1 == a2) && !x);
}