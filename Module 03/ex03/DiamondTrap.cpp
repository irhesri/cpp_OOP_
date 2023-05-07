#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap() , FragTrap()
{
	name_ = "UNKNOWN";
	this->name = "UNKNOWN_clap_name";
	// hit = 100;
	// damage = 30;
	energy = 50;
	std::cout << "DiamondTrap default constructor been called." << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &frag)
{
	(*this) = frag;
	std::cout << "DiamondTrap copy constructor been called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ScavTrap(name) , FragTrap(name)
{
	name_ = name;
	this->name = name + "_clap_name";
	// hit = 100;
	// damage = 30;
	energy = 50;
	// std::cout << hit << std::endl; // 100 ft
	// std::cout << damage << std::endl; // 30 ft
	// std::cout << energy << std::endl; // 50 st
	std::cout << "DiamondTrap " << name << " Constructor been called." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &frag)
{
	name_ = frag.name_;
	name = frag.name;
	hit = frag.hit;
	energy = frag.energy;
	damage = frag.damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " Destructor been called." << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << name_ << std::endl;
	std::cout << "ClapTrap name is: " << name << std::endl;
}
