#include "ScavTrap.hpp"

int	main(){
	// ClapTrap a("ok");
	ScavTrap b("f");
	ScavTrap c(b);

	std::cout << std::endl;
	c.attack("***");
	// a.attack("---");
	c.beRepaired(1);
	b.guardGate();
	std::cout << std::endl;
}