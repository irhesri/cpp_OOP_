# include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor of Dog been called." << std::endl;
}

Dog::Dog(Dog const &dog)
{
	this->type = dog.getType();
	brain = dog.getBrain();
	std::cout << "Copy constructor of Dog been called." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor of Dog been called." << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	delete brain;
	this->type = dog.getType();
	brain = dog.getBrain();
	// std::cout << "Dog copy assignement been called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "how how how!" << std::endl;
}

Brain	*Dog::getBrain() const
{
	Brain	*b = new Brain(*brain);
	return (b);
}