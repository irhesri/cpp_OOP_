# include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default constructor of Dog been called." << std::endl;
}

Dog::Dog(Dog const &dog)
{
	(*this) = dog;
	std::cout << "Copy constructor of Dog been called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog been called." << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->type = dog.getType();
	// std::cout << "Dog copy assignement been called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "how how how!" << std::endl;
}
