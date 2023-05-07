#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure: public AMateria
{
	
	public:
		Cure();
		Cure(std::string const &type);
		AMateria* clone() const;
		void use(ICharacter& target);
};

Cure::Cure():AMateria("Cure"){}

Cure::Cure(std::string const &type):AMateria(type){}

AMateria* Cure::clone() const
{
	AMateria *c = new Cure();
	return (c);
};

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
};

#endif