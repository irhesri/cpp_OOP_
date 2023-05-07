# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain been called." << std::endl;
}

Brain::Brain(Brain const &brain)
{
	(*this) = brain;
	std::cout << "Copy constructor of Brain been called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain been called." << std::endl;
}

Brain	&Brain::operator=(Brain const &brain)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	// std::cout << "Brain copy assignement been called." << std::endl;
	return (*this);
}


