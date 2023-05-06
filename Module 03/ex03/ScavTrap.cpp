#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "ScavTrap default constructor been called." << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " Constructor been called." << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scav)
{
	(*this) = scav;
	std::cout << "ScavTrap copy constructor been called." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scav)
{
	// std::cout << "ScavTrap copy assignement been called." << std::endl;
	hit = scav.hit;
	energy = scav.energy;
	damage = scav.damage;
	name = scav.name;
	return (*this);
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " Destructor been called." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
};

void	ScavTrap::attack(const std::string& target)
{
	if (!energy || !hit)
		return ;
	std::cout << "ScavTrap " << name << " attacks " << target
			<< " causing " << damage << " points of damage!" << std::endl;
	energy--;
}