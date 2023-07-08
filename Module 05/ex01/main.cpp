#include "Form.hpp"

int	main()
{
	try
	{
		Form b(0, 10, 5, "form1");
		Form c(b);	
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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}