#include "Form.hpp"

int	main()
{

	std::cout << "--------------------------------------------" << std::endl;
	Form a;
	Form b(0, 10, 5, "form1");
	Form c(b);
	// test the canonical form
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	a = c;
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	
	Bureaucrat bur1("Bureaucrat1", 50);
	Bureaucrat bur2("Bureaucrat2", 6);

	std::cout << b << std::endl;
	bur1.signForm(b);
	std::cout << std::endl << b << std::endl;
	bur2.signForm(b);
	std::cout << std::endl << b << std::endl;
	bur2.signForm(b);
	std::cout << std::endl << b;

	std::cout << std::endl << "--------------------------------------------" << std::endl;

	c.beSigned(bur1);
	return (0);
}