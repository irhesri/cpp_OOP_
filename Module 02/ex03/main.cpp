#include "Point.hpp"

bool	is_triangle(Point a, Point b, Point c)
{
	return (c.getY() != (((a.getY() - b.getY()) / (a.getX() - b.getX())) * (c.getX() - a.getX()) + a.getY()));
}

int	main( void ) 
{
	Point	A(0, 4);
	Point	B(1, 1);
	Point	C(3, 3);
	Point	P(3, 4);

	if (!is_triangle(A, B, C))
	{
		std::cerr << "ERROR: The three point are in the same line" << std::endl;
		return (1);
	}
	std::cout << bsp(A,B,C,P) << std::endl;
	return (0);
}