#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w): name(name), w(w)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}
