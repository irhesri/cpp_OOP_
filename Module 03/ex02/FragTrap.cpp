#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap default constructor been called." << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->name = name;
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap " << name << " Constructor been called." << std::endl;
}

FragTrap::FragTrap(FragTrap const &frag)
{
	(*this) = frag;
	std::cout << "FragTrap copy constructor been called." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &frag)
{
	name =frag.name;
	hit = frag.hit;
	energy = frag.energy;
	damage = frag.damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " Destructor been called." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " request a high five." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!energy || !hit)
		return ;
	std::cout << "FragTrap " << name << " attacks " << target
			<< " causing " << damage << " points of damage!" << std::endl;
	energy--;
}
