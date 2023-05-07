#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int	i, j;

		i = 1;
		j = -1;
		while (av[i][++j] || (j = 0) || (++i < ac))
			std::cout << (char)std::toupper(av[i][j]);
	}
	std::cout << std::endl;
	return (ac != 1);
}