# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "UNKNOWN";
	std::cout << "Default constructor of WrongAnimal been called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
	(*this) = animal;
	std::cout << "Copy constructor of WrongAnimal been called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal been called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &animal)
{
	this->type = animal.getType();
	// std::cout << "WrongAnimal copy assignement been called." << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "should i bark or meow?" << std::endl;
}
