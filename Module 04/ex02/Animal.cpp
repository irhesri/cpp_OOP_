# include "Animal.hpp"

Animal::Animal()
{
	type = "UNKNOWN";
	std::cout << "Default constructor of Animal been called." << std::endl;
}

Animal::Animal(Animal const &animal)
{
	(*this) = animal;
	std::cout << "Copy constructor of Animal been called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal been called." << std::endl;
}

Animal	&Animal::operator=(Animal const &animal)
{
	this->type = animal.getType();
	// std::cout << "Animal copy assignement been called." << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

// void	Animal::makeSound() const
// {
// 	std::cout << "cats don’t bark" << std::endl;
// }
