#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &point)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = point;
}

Fixed	&Fixed::operator=(Fixed const &point)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw = point.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw);
}