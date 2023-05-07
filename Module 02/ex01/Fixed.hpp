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
		Fixed &operator= (Fixed const &point);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<< (std::ostream &out, Fixed const &point);

#endif
