#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap
{
	private:
		std::string	name_;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &frag);
		~DiamondTrap();
		DiamondTrap	&operator=(DiamondTrap const &frag);
		void attack(std::string const &target);
		void whoAmI();
};

#endif