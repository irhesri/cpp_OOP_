#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(Animal const &animal);
		virtual	~Animal();
		Animal	&operator=(Animal const &animal);
		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif