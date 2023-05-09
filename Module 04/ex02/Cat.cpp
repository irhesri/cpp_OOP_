# include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor of Cat been called." << std::endl;
}

Cat::Cat(Cat const &cat)
{
	brain = new Brain();
	(*this) = cat;
	std::cout << "Copy constructor of Cat been called." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor of Cat been called." << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->type = cat.getType();
	for (short i = 0; i < 100; i++)
		brain->setIdea(cat.getBrainIdea(i), i);
	// std::cout << "Cat copy assignement been called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow meow meow!" << std::endl;
}

std::string	Cat::getBrainIdea(short index) const
{
	return (brain->getIdea(index));
}
