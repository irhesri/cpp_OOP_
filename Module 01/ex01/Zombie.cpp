#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << name << "\" died!" << std::endl; 
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
