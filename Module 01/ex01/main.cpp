#include "Zombie.hpp"

int	main()
{
	int		x;
	Zombie *z;

	x = 4;
	z = zombieHorde(x, "xxx");
	for(int i = 0; i < x; i++)
		(z + i)->announce();
	delete[] (z);
}