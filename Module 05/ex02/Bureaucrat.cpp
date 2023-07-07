#include "AForm.hpp"

Bureaucrat::Bureaucrat():name("UNKNOWN")
{
	grade = 150;
};

Bureaucrat::Bureaucrat(Bureaucrat const &b):grade(b.getGrade()), name(b.getName())
{};

Bureaucrat::Bureaucrat(std::string name, short grade):name(name)
{
	try
	{
		if (grade > 150)
			throw (GradeTooLowException());
		if (grade < 1)
			throw (GradeTooHighException());
		this->grade = grade;
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &b)
{
	(void)b;
	std::cerr << "\033[0;31mSeriously!! trying to change const attribute!!?\033[0m" << std::endl;
	return (*this);
};


short	Bureaucrat::getGrade() const
{
	return (grade);
};

std::string const	Bureaucrat::getName() const
{
	return (name);
};

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (grade == 1)
			throw (GradeTooHighException());
		grade--;
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
};

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (grade == 150)
			throw (GradeTooLowException());
		grade++;
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
};

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
    return ((char *)("\033[0;31mGrade Too High\033[0m"));
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
    return ((char *)("\033[0;31mGrade Too Low\033[0m"));
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
};

void	Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned())
		std::cout << this->name << " couldn't sign " << form.getName() << " because it's already signed." << std::endl; 
	else if (this->grade <= form.getGradeToSign())
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl; 
	}
	else
		std::cout << this->name << " couldn't sign " << form.getName() << " because its grade is too low." << std::endl; 
};

void	Bureaucrat::executeForm(AForm const & form)
{
	if (form.execute(*this))
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	else 
		std::cout << "\033[0;31m" << this->getName() << " couldn't execute " << form.getName() << "\033[0m\n";
};
