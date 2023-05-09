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
		ideas[i] = brain.getIdea(i);
	// std::cout << "Brain copy assignement been called." << std::endl;
	return (*this);
}

std::string	Brain::getIdea(short index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "index can't be bigger than 99 or lower than 0" << std::endl;
		return ("");
	}
	return (ideas[index]);
}

void	Brain::setIdea(std::string str, short index)
{
	if (index < 0 || index > 99)
		std::cout << "index can't be bigger than 99 or lower than 0" << std::endl;
	else
		ideas[index] = str;
}
