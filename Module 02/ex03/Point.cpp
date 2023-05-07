#include "Point.hpp"

Point::Point() : x(), y(){}

Point::Point(float const px, float const py): x(px), y(py){}

Point::Point(Point const &p): x(p.x), y(p.y){}

Point	&Point::operator= (Point const &point)
{
	(void) point;
	std::cerr << " -> Attributes are const you can't change them!!!!" << std::endl << " -> Don't act surprised!" << std::endl << std::endl;
	return (*this);
}

Fixed	Point::getX()
{
	return (x);
}

Fixed	Point::getY()
{
	return (y);
}

Point::~Point()
{
}