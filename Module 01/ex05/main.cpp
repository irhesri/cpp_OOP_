#include "Harl.hpp"

bool	print(std::string str)
{
	std::cout << str << std::endl;
	return (0);
}

int	main(int ac, char **av)
{
	Harl	h;

	if (ac != 2)
	{
		std::cerr << "WRONG NUMBER OF ARGUMENTS" << std::endl;
		return (1);
	}
	std::string	str(av[1]);
	h.complain(str);
}