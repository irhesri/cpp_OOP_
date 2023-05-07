#ifndef	HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*w;
		std::string	name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon *w);
		void	setWeapon(Weapon &w);
};

#endif