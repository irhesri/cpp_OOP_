#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &animal);
		virtual		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &animal);
		std::string	getType() const;
		void	makeSound() const;
};

#endif