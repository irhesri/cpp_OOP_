#ifndef	POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(float const px, float const py);
		Point(Point const &p);
		~Point();
		Point	&operator= (Point const &point);
		Fixed	getX();
		Fixed	getY();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif

