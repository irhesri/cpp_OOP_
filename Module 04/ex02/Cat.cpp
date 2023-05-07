# include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor of Cat been called." << std::endl;
}

Cat::Cat(Cat const &cat)
{
	this->type = cat.getType();
	brain = cat.getBrain();
	std::cout << "Copy constructor of Cat been called." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor of Cat been called." << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	delete brain;
	this->type = cat.getType();
	brain = cat.getBrain();
	// std::cout << "Cat copy assignement been called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow meow meow!" << std::endl;
}

Brain	*Cat::getBrain() const
{
	Brain	*b = new Brain(*brain);
	return (b);
}