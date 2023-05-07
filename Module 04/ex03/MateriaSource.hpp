#ifndef MS
# define MS

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		~MateriaSource() {}
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

MateriaSource::~MateriaSource() 
{

}

void MateriaSource::learnMateria(AMateria *materia)
{

}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice);
	else if (type == "cure")
		return (new Cure);
	return (NULL);
}

#endif