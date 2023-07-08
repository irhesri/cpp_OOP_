#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "--------------------------------------------" << std::endl;
	try
	{
		Bureaucrat a;
		Bureaucrat b("imane", 100);
		Bureaucrat c(b);
		a = c;
		// test the canonical form
		std::cout << a;
		std::cout << b;
		std::cout << c;
	
		std::cout << std::endl << "--------------------------------------------" << std::endl;
		// test increment and decrement
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// test exceptions
	std::cout << std::endl << "151: --------------------------------------------" << std::endl;
	try
	{
		Bureaucrat d("tooLow", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "0: --------------------------------------------" << std::endl;
	try
	{
		Bureaucrat e("tooHigh", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "150: --------------------------------------------" << std::endl;
	try
	{
		Bureaucrat f("tooLow", 150);
		std::cout << f;
		f.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "1: --------------------------------------------" << std::endl;
	try
	{
		Bureaucrat g("tooHigh", 1);
		std::cout << g;
		g.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}