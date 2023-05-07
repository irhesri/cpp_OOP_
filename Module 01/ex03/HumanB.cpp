#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	w = NULL;
	this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (!w)
	{
		std::cout << name << " doesn't have a weapon." << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << (*w).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *w)
{
	this->w = w;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->w = &w;
}