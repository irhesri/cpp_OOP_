#ifndef BRAIN_HPP
# define BRAIN_HPP

// # include "Animal.hpp"
# include <iostream>

class Brain
{
	public:
		std::string	ideas[100];
		Brain();
		Brain(Brain const &brain);
		~Brain();
		Brain	&operator=(Brain const &brain);
};

#endif