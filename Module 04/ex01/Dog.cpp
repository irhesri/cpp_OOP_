# include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor of Dog been called." << std::endl;
}

Dog::Dog(Dog const &dog)
{
	brain = new Brain();
	(*this) = dog;
	std::cout << "Copy constructor of Dog been called." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor of Dog been called." << std::endl;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->type = dog.getType();
	for (short i = 0; i < 100; i++)
		brain->setIdea(dog.getBrainIdea(i), i);
	// std::cout << "Dog copy assignement been called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "how how how!" << std::endl;
}

std::string	Dog::getBrainIdea(short index) const
{
	return (brain->getIdea(index));
}