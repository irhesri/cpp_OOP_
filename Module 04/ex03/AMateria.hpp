#pragma once

# include <iostream>
# include "Character.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &materia);
		virtual AMateria	&operator=(AMateria const &materia);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

