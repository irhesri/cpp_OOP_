#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("UNKNOWN")
{
	grade = 150;
};

Bureaucrat::Bureaucrat(Bureaucrat const &b):grade(b.getGrade()), name(b.getName())
{};

Bureaucrat::Bureaucrat(std::string name, short grade):name(name)
{
	if (grade > 150)
		throw (GradeTooLowException());
	if (grade < 1)
		throw (GradeTooHighException());
	this->grade = grade;

}

Bureaucrat::~Bureaucrat()
{};

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

	if (grade == 1)
		throw (GradeTooHighException());
	grade--;
};

void	Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw (GradeTooLowException());
	grade++;
};

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
    return ((const char *)("\033[0;31mGrade Too High\033[0m"));
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
    return ((const char *)("\033[0;31mGrade Too Low\033[0m"));
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
};
