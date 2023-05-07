#ifndef CHAR
# define CHAR

# include "ICharacter.hpp"

class Character: public ICharacter
{
		std::string	name;
		AMateria	*slots[4];
	public:
		Character(std::string const &name);
		// deep copy
		// =
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
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

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
	slots[idx]->use(target);
}


#endif