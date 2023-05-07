#include "Zombie.hpp"

int	main()
{
	Zombie *z;

	randomChump("first");
	z = newZombie("second");
	z->announce();
	randomChump("third");
	delete (z);
}