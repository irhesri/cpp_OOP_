#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		std::cout << "ShrubberyTarget:--------------------------------------------" << std::endl;
		{
			Bureaucrat bur1("Bureaucrat1", 146);
			Bureaucrat bur2("Bureaucrat2", 138);
			Bureaucrat bur3("Bureaucrat3", 100);
			// sign 145, exec 137
			ShrubberyCreationForm s("ShrubberyTarget");

			bur1.executeForm(s);
			std::cout << std::endl;
			bur1.signForm(s);
			bur2.signForm(s);
			bur3.signForm(s);
			std::cout << std::endl;
			bur1.executeForm(s);
			bur2.executeForm(s);
			bur3.executeForm(s);
			std::cout << "--------------------------------------------" << std::endl;
		}

		std::cout << "RobotomyTarget:--------------------------------------------" << std::endl;
		{
			Bureaucrat bur1("Bureaucrat1", 81);
			Bureaucrat bur2("Bureaucrat2", 55);
			Bureaucrat bur3("Bureaucrat3", 37);
			// sign 72, exec 45
			RobotomyRequestForm s("RobotomyTarget");

			bur1.executeForm(s);
			std::cout << std::endl;
			bur1.signForm(s);
			bur2.signForm(s);
			bur3.signForm(s);
			std::cout << std::endl;
			bur1.executeForm(s);
			bur2.executeForm(s);
			bur3.executeForm(s);
			std::cout << "--------------------------------------------" << std::endl;
		}

		std::cout << "PresidentialTarget:--------------------------------------------" << std::endl;
		{
			Bureaucrat bur1("Bureaucrat1", 26);
			Bureaucrat bur2("Bureaucrat2", 25);
			Bureaucrat bur3("Bureaucrat3", 4);
			std::cout << "--------------------------------------------" << std::endl;
			// sign 25, exec 5
			PresidentialPardonForm s("PresidentialTarget");

			bur1.executeForm(s);
			std::cout << std::endl;
			bur1.signForm(s);
			bur2.signForm(s);
			bur3.signForm(s);
			std::cout << std::endl;
			bur1.executeForm(s);
			bur2.executeForm(s);
			bur3.executeForm(s);
			std::cout << "--------------------------------------------" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}