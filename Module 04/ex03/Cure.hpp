#pragma once

# include "AMateria.hpp"

class Cure: public AMateria
{
	
	public:
		Cure();
		Cure(std::string const &type);
		AMateria* clone() const;
		void use(ICharacter& target);
};
