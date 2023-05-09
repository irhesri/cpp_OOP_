#ifndef BRAIN_HPP
# define BRAIN_HPP

// # include "Animal.hpp"
# include <iostream>

class Brain
{
		std::string	ideas[100];
	public:
		Brain();
		Brain(Brain const &brain);
		~Brain();
		Brain		&operator=(Brain const &brain);
		void		setIdea(std::string str, short index);
		std::string	getIdea(short index) const;
};

#endif