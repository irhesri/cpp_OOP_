#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	raw = (n * (1 << frct));
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	raw = roundf(n * (1 << frct));
}

Fixed::Fixed(Fixed const &point)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = point;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &point)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw = point.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

int		Fixed::getRawBits(void) const
{
	return (raw);
}

float Fixed::toFloat(void) const
{
	return ((float)raw / (float)(1 << frct));
};

int Fixed::toInt(void) const
{
	return (raw / (1 << frct));
};


std::ostream	&operator<< (std::ostream &out, Fixed const &point)
{
	out << ((float)point.getRawBits() / (1 << 8));
	return (out);
}