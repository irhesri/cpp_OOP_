#include "Fixed.hpp"
#include <cmath>

// constructors destructors
Fixed::Fixed()
{
	raw = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	raw = n * (1 << frct);
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
{
	raw = roundf(n * (1 << frct));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &point)
{
	(*this) = point;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// overloading
std::ostream	&operator<< (std::ostream &out, Fixed const &point)
{
	out << point.toFloat();
	return (out);
}

Fixed	&Fixed::operator=(Fixed const &point)
{
	raw = point.getRawBits();
	// std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed	Fixed::operator+ (Fixed const &point)
{
	Fixed	res;

	res.setRawBits(raw + point.getRawBits());
	return (res);
}

Fixed	Fixed::operator- (Fixed const &point)
{
	Fixed	res;

	res.setRawBits(raw - point.getRawBits());
	return (res);
}

Fixed	Fixed::operator* (Fixed const &point)
{
	Fixed	res;	

	res.setRawBits(((long)raw * (long)point.getRawBits()) / (long)(1 << frct));
	return (res);
}

Fixed	Fixed::operator/ (Fixed const &point)
{
	Fixed	res;	

	res.setRawBits(((long)raw / (long)point.getRawBits()) * (long)(1 << frct));
	return (res);
}

bool	Fixed::operator< (Fixed const &point)
{
	return (raw < point.getRawBits());
}

bool	Fixed::operator> (Fixed const &point)
{
	return (raw > point.getRawBits());
}

bool	Fixed::operator>= (Fixed const &point)
{
	return (raw >= point.getRawBits());
}

bool	Fixed::operator<= (Fixed const &point)
{
	return (raw <= point.getRawBits());
}

bool	Fixed::operator== (Fixed const &point)
{
	return (raw == point.getRawBits());
}

bool	Fixed::operator!= (Fixed const &point)
{
	return (raw != point.getRawBits());
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp.setRawBits(raw);
	raw++;
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	raw++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp.setRawBits(raw);
	raw--;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	raw--;
	return (*this);
}

// getters setters
void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

int		Fixed::getRawBits(void) const
{
	return (raw);
}


// member functions
float Fixed::toFloat(void) const
{
	return ((float)raw / float(1 << frct));
};

int Fixed::toInt(void) const
{
	return (raw / (1 << frct));
};

Fixed	&Fixed::min(Fixed &p1, Fixed &p2)
{
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	return (p2);
};

Fixed const	&Fixed::min(Fixed const &p1, Fixed const &p2)
{
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	return (p2);
};

Fixed	&Fixed::max(Fixed &p1, Fixed &p2)
{
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	return (p2);
};

Fixed const	&Fixed::max(Fixed const &p1, Fixed const &p2)
{
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	return (p2);
};