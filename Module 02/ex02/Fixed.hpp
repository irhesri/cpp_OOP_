#ifndef	FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					raw;
		static const int	frct = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(Fixed const &point);
		~Fixed();
		Fixed	&operator= (Fixed const &point);
		Fixed	operator+ (Fixed const &point);
		Fixed	operator- (Fixed const &point);
		Fixed	operator* (Fixed const &point);
		Fixed	operator/ (Fixed const &point);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();
		Fixed	operator++(int);
		bool	operator< (Fixed const &point);
		bool	operator> (Fixed const &point);
		bool	operator>= (Fixed const &point);
		bool	operator<= (Fixed const &point);
		bool	operator== (Fixed const &point);
		bool	operator!= (Fixed const &point);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
		static	Fixed		&min(Fixed &p1, Fixed &p2);
		static	Fixed const	&min(Fixed const &p1, Fixed const &p2);
		static	Fixed		&max(Fixed &p1, Fixed &p2);
		static	Fixed const	&max(Fixed const &p1, Fixed const &p2);
};

std::ostream	&operator<< (std::ostream &out, Fixed const &point);

#endif
