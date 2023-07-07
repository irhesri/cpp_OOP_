# include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &s)
{
	(void)s;
};

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &s)
{
	(void)s;
	return (*this);
};

void	ScalarConverter::convert(std::string str) const
{
	char	*c;
	long double d = strtod(&str[0], &c);
	std::string f(c);

	if (f == "f")
		d = static_cast<float> (d);
	else if (f != "")
	{
		std::cerr << "error\n";
		return ;
	}
	// ==================================================================
	std::cout << "char: ";
	if (d != static_cast<int>(d) || std::isnan(d) || std::isinf(d) || d > 127 || d < 0)
		std::cout << "impossible\n";
	else if (std::isprint(d))
		std::cout << "'" << static_cast<char> (d) << "'\n";  
	else
		std::cout << "Non displayable\n";  

	// ===================================================================
	std::cout << "int: ";
	if (std::isnan(d) || std::isinf(d) || (d > INT_MAX) || (d < INT_MIN))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int> (d) << "\n";  

	// ===================================================================
	std::cout << "float: ";
	if ((d > __FLT_MAX__) || (d < -__FLT_MIN__))
		std::cout << "impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float> (d) << "f" << std::endl;
	
	std::cout << "double: ";
	if ((d > __DBL_MAX__) || (d < -__DBL_MIN__))
		std::cout << "impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double> (d) << std::endl;
};
