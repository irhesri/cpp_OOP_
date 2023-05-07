#include "Point.hpp"

Point::Point() : x(), y(){}

Point::Point(float const px, float const py): x(px), y(py){}

Point::Point(Point const &p): x(p.x), y(p.y){}

float	Point::getX()
{
	return (x.toFloat());
}

float	Point::getY()
{
	return (y.toFloat());
}

Point::~Point()
{
}