# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"


int	main()
{
	// const Animal* j = new Animal();
	const Cat* i = new Cat();

	// delete j;
	delete i;
	return 0;
}