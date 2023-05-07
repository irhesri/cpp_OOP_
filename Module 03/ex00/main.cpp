#include "ClapTrap.hpp"

int	main()
{
	ClapTrap tst1;
	ClapTrap tst("imane");
	ClapTrap tst2(tst);

	std::cout << std::endl;
	tst.attack("xxxx");
	tst1.attack("yyyy");
	tst2.attack("zzzz");
	tst.beRepaired(5);
	tst1.takeDamage(3);
	std::cout << std::endl;

	return (0);
}