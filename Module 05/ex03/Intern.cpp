# include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &intern)
{
	(*this) = intern;
};

Intern	&Intern::operator=(Intern const &intern)
{
	(void)intern ;
	return (*this);
};

static std::string	toLower(std::string form)
{
	int	i, len = form.length() - 1;
	std::string	str = "";
	
	i = 0;
	while ((i < len) && (form[i] == ' ' || form[i] == '\t'))
		i++;
	while ((len > 0) && (form[len] == ' ' || form[len] == '\t'))
		len--;
	while (i <= len)
		str += (char)std::tolower(form[i++]);
	return (str);
}  

AForm	*Intern::makeForm(std::string form, std::string target)
{
	form = toLower(form);
	try
	{
		if (form != "presidential pardon")
			throw (std::exception());
		std::cout << "Intern creates " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	catch(const std::exception& e)
	{
		// (void)e;
		try 
		{
			if (form != "robotomy request")
				throw (std::exception());
			std::cout << "Intern creates " << form << std::endl;
			return (new RobotomyRequestForm(target));
		}
		catch(const std::exception& e)
		{
			// (void)e;
			try
			{
				if (form != "shrubbery creation")
					throw (std::exception());
				std::cout << "Intern creates " << form << std::endl;
				return (new ShrubberyCreationForm(target));
			}
			catch(const std::exception& e)
			{
				// (void)e;
				std::cerr << "\033[0;31mForm doesn't exist\033[0m" << '\n';
			}
		}
	}
	return (NULL);
}