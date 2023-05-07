#ifndef ICE
# define ICE

# include "AMateria.hpp"

class Ice: public AMateria
{
	
	public:
		Ice();
		Ice(std::string const &type);
		AMateria* clone() const;
		void use(ICharacter& target);
};

Ice::Ice():AMateria("Ice"){}

Ice::Ice(std::string const &type):AMateria(type){}

AMateria* Ice::clone() const
{
	AMateria *c = new Ice();
	return (c);
};

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};

#endif
