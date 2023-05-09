#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	int i;
	const Animal *arr[4];
	// Cat	D;
	// Cat C(D);
	// Cat	B;
	// B = C;

	std::cout << std::endl;
	for (i = 0; i < 2; i++)
		arr[i] = new Dog();
	std::cout << std::endl;
	for (; i < 4; i++)
		arr[i] = new Cat();
	std::cout << std::endl;
	std::cout << std::endl;

	for (i = 0; i < 2; i++)
		delete (arr[i]);
	std::cout << std::endl;
	for (; i < 4; i++)
		delete (arr[i]);

	return 0;
}