#include "Bureaucrat.hpp"

int	main()
{

	std::cout << "--------------------------------------------" << std::endl;
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
	std::cout << std::endl << "--------------------------------------------" << std::endl;

	// test exceptions
	Bureaucrat d("tooLow", 151);
	Bureaucrat e("tooHigh", 0);
	std::cout << std::endl;
	Bureaucrat f("tooLow", 150);
	Bureaucrat g("tooHigh", 1);
	std::cout << g;
	g.incrementGrade();
	std::cout << f;
	f.decrementGrade();

	return (0);
}