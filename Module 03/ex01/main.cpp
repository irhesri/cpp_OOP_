#include "ScavTrap.hpp"

int	main(){
	ClapTrap a("ok");
	ScavTrap b("f");
	ScavTrap c(b);

	c.attack("***");
	a.attack("---");
	c.beRepaired(1);
	b.guardGate();
}