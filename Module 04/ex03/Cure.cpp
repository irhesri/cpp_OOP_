# include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure::Cure(std::string const &type):AMateria(type){}

AMateria* Cure::clone() const
{
	return (new Cure());
};

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
};
