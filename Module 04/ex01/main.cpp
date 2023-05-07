# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"


int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Cat *k = new Cat();
	const Cat *h = new Cat(*k);
	Cat c, c2;
	const Dog d;

	c = c2;
	delete h;
	delete k;
	delete j;//should not create a leak
	delete i;
	return 0;
}