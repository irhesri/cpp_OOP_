# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int	main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!

	std::cout << animal->getType() << " " << std::endl;
	animal->makeSound();

	std::cout << wronganimal->getType() << " " << std::endl;
	wronganimal->makeSound();

	std::cout << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();

	delete animal, cat, dog;
	delete cat;
	delete dog;
	delete wronganimal;
	delete wrongcat;
	return 0;
}