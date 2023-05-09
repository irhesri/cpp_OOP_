#pragma once

# include "AMateria.hpp"

class Ice: public AMateria
{
	
	public:
		Ice();
		Ice(std::string const &type);
		AMateria* clone() const;
		void use(ICharacter& target);
};
