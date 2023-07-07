#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Wrong Number Of arguments\n";
		return (1);
	}

	ScalarConverter s;
	std::string	str(av[1]);
	
	s.convert(str);
}