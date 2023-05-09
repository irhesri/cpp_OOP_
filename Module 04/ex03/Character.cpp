# include "Character.hpp"

Character::Character() {};

Character::Character(Character const &list)
{
	(*this) = list;
};

Character	&Character::operator=(Character const &list)
{
	name = list.getName();
	slots = list.getSlots();
	return (*this);
};

Character::Character(std::string const &name) 
{
	this->name = name;
}

Character::~Character() {}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	slots.pushBack(m);
}

void Character::unequip(int idx)
{
	trashCan.pushBack(slots.deleteNode(idx));
}

void Character::use(int idx, ICharacter& target)
{
	AMateria *tmp = slots.getAMateria(idx);

	if (tmp)
		tmp->use(target);
}

LinkedList	Character::getSlots() const
{
	return (slots);
};
