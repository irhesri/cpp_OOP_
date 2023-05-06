#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap:public virtual ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &frag);
		FragTrap &operator=(FragTrap const &frag);
		~FragTrap();
		void highFivesGuys(void);
		void attack(std::string const &target);
};

#endif