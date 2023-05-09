#pragma once

# include "ICharacter.hpp"
# include "LinkedList.hpp"

class Character: public ICharacter
{
		std::string	name;
		LinkedList	slots;
		LinkedList	trashCan;
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &list);
		~Character();
		Character	&operator=(Character const &list);

		std::string const & getName() const;
		LinkedList	getSlots() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

// # include "AMateria.hpp"
