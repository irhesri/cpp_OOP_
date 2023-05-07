# include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor of Cat been called." << std::endl;
}

Cat::Cat(Cat const &cat)
{
	(*this) = cat;
	std::cout << "Copy constructor of Cat been called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat been called." << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->type = cat.getType();
	// std::cout << "Cat copy assignement been called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow meow meow!" << std::endl;
}