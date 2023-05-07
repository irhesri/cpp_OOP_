#include "Point.hpp"

bool	is_triangle(Point a, Point b, Point c)
{
	return (c.getY() != (((a.getY() - b.getY()) / (a.getX() - b.getX())) * (c.getX() - a.getX()) + a.getY()));
}

int	main( void ) 
{
	Point	A(0.1, 0);
	Point	B(0, 2);
	Point	C(2.9, 0);
	Point	P(0.5, 0.5);

	if (!is_triangle(A, B, C))
	{
		std::cerr << "ERROR: The three point are in the same line" << std::endl;
		return (1);
	}
	std::cout << bsp(A,B,C,P) << std::endl;
	return (0);
}