#ifndef INTERN
# define INTERN

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		Intern	&operator=(Intern const &intern);
		AForm	*makeForm(std::string AForm, std::string target);
};

#endif