# include "AMateria.hpp"

AMateria::AMateria():type("UNKNOWN")
{};

AMateria::AMateria(AMateria const &materia):type(materia.getType())
{
};

AMateria::AMateria(std::string const &t):type(t)
{
};

AMateria::~AMateria()
{
};

AMateria	&AMateria::operator=(AMateria const &materia)
{
	(void)materia;
	std::cerr << "can't be assigned\n" ; 
	return(*this);
};

std::string const &AMateria::getType() const
{
	return (type);
};

void AMateria::use(ICharacter& target)
{
	(void)target;
};