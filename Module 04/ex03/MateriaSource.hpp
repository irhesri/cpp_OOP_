#pragma once

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	LinkedList	memory;
	public:
		// ~MateriaSource() {};
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};