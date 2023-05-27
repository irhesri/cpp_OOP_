#include "Intern.hpp"

int	main()
{
	Bureaucrat b("Bureaucrat", 1);
	{
		Intern	someRandomIntern;
		AForm*	form;

		form = someRandomIntern.makeForm("    RoBotomy reqUest   ", "Bender");
		if (form)
		{
			b.signForm(*form);
			b.executeForm(*form);
			delete (static_cast<RobotomyRequestForm *>(form));
		}
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		Intern	someRandomIntern;
		AForm*	form;

		form = someRandomIntern.makeForm("Presidential Pardon", "Bender");
		if (form)
		{
			b.signForm(*form);
			b.executeForm(*form);
			delete ((static_cast<PresidentialPardonForm *>(form)));
		}
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		Intern	someRandomIntern;
		AForm*	form;

		form = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
		if (form)
		{
			b.signForm(*form);
			b.executeForm(*form);
			delete ((static_cast<ShrubberyCreationForm *>(form)));
		}
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		Intern	someRandomIntern;
		AForm*	form;

		form = someRandomIntern.makeForm("  blabla  ", "Bender");
		if (form)
		{
			b.signForm(*form);
			b.executeForm(*form);
			delete (form);
		}
	}

	return (0);
}