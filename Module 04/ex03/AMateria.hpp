#ifndef A
# define A

# include <iostream>

class AMateria
{
	protected:
		std::string const &type;
	public:
		AMateria(std::string const &type);
		// [...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

AMateria::AMateria(std::string const &type):type(type)
{
};

std::string const &AMateria::getType() const
{
	return (type);
};

#endif