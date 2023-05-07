#include "Fixed.hpp"

int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	// std::cout << std::endl;
	std::cout << "max: " << Fixed::max( a, b ) << std::endl;
	// std::cout << "min: " << Fixed::min( a, b ) << std::endl;
	// std::cout << std::endl;
	// std::cout << "* : " << (a * b) << std::endl;
	// std::cout << "  : " << (0.0078125f * 10.1016f) << std::endl;
	// std::cout << std::endl;
	// std::cout << "/ : " << (const_cast<Fixed&>(b) / const_cast<Fixed&>(a)) << std::endl;
	// std::cout << "  : " << (10.1016f / 0.0078125f) << std::endl;
	// std::cout << std::endl;
	// std::cout << "+ : " << (a + b) << std::endl;
	// std::cout << "  : " << (0.0078125f + 10.1016f) << std::endl;
	// std::cout << std::endl;
	// std::cout << "- : " << (a - b) << std::endl;
	// std::cout << "  : " << (0.0078125f - 10.1016f) << std::endl;
	return 0;
}