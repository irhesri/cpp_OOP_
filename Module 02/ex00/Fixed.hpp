#ifndef	FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int					raw;
		static const int	frct = 8;
	public:
		Fixed();
		Fixed(Fixed const &point);
		Fixed &operator= (Fixed const &point);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
