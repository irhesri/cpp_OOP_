# include "MateriaSource.hpp"

// MateriaSource::~MateriaSource() 
// {
// }

void MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
		return ;
	memory.pushBack(materia);
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria	*tmp = memory.getAMateria(0);

	for (int i = 1; tmp; i++)
	{
		if (tmp->getType() == type)
			return (tmp->clone());
		tmp = memory.getAMateria(i);
	}
	return (NULL);
}
