#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "LinkedList.hpp"
#include "MateriaSource.hpp"

int main()
{
	// AMateria* tmp = new Ice("ice");
	// LinkedList	list;
	// list.pushBack(tmp);
	// tmp = new Ice("ice");
	// list.pushBack(tmp);
	// tmp = new Ice("ice");
	// list.pushBack(tmp);
	// tmp = list.getAMateria(0);
	// std::cout << (tmp != NULL);
	// tmp = list.getAMateria(1);
	// std::cout << (tmp != NULL);
	// tmp = list.getAMateria(2);
	// std::cout << (tmp != NULL);
	// tmp = list.getAMateria(3);
	// std::cout << (tmp == NULL);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}