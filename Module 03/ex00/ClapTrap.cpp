#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	hit = 10;
	energy = 10;
	damage = 0;
	this->name = "UNKNOWN";
	std::cout << "ClapTrap default constructor been called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	hit = 10;
	energy = 10;
	damage = 0;
	this->name = name;
	std::cout << "ClapTrap " << name << " Constructor been called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	(*this) = clap;
};


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destructor been called." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clap)
{
	hit = clap.hit;
	energy = clap.energy;
	damage = clap.damage;
	name = clap.name;
	std::cout << "ClapTrap copy assignement been called." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!energy || !hit)
		return ;
	std::cout << "ClapTrap " << name << " attacks " << target
			<< " causing " << damage << " points of damage!" << std::endl;
	energy--;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!energy || !hit)
		return ;
	std::cout << "ClapTrap " << name << " repaired " << amount << " point"<< std::endl;
	energy--;
	hit += amount;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!hit || !energy)
		return ;
	if (amount > hit)
		hit = 0;
	else
		hit -= amount;
	std::cout << "ClapTrap " << name << " took " << amount
		<< " points of damage!" << std::endl;
}
