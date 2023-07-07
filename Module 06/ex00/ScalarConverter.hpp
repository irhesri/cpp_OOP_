#ifndef SCALAR
# define SCALAR

# include <iostream>
# include <string>
# include <limits.h>
# include <cmath>
# include <iomanip>

class ScalarConverter
{
	private:
		
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &s);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const &s);
		void	convert(std::string str) const;
};

#endif