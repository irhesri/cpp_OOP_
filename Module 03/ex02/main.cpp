#include "FragTrap.hpp"

int	main(){
	FragTrap def;
	FragTrap param("FRAG");
	FragTrap copy(param);
	FragTrap assign = param;
	ClapTrap tst1("CLAP");


	std::cout << std::endl << "--------------------------" << std::endl; 
	def.highFivesGuys();
	param.highFivesGuys();
	param.attack("someone");
	tst1.attack("another one");
	assign.highFivesGuys();
	param.attack("two guys");
	std::cout << "--------------------------" << std::endl << std::endl; 

}