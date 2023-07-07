#include "AForm.hpp"

AForm::AForm():isSigned(0), gradeToSign(1), gradeToExecute(1), name("UNKOWN")
{}

AForm::AForm(bool isSigned, short gradeToSign, short gradeToExecute, std::string name)
:isSigned(isSigned), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), name(name)
{}

AForm::AForm(AForm const &f)
:isSigned(f.getIsSigned()), gradeToSign(f.getGradeToSign()), gradeToExecute(f.getGradeToExecute()), name(f.getName())
{};

AForm::~AForm()
{
}

AForm	&AForm::operator=(AForm const &form)
{
	(void)form;
	std::cerr << "\033[0;31mSeriously!! trying to change const attribute!!?\033[0m" << std::endl;
	return (*this);
};

bool	AForm::getIsSigned() const
{
	return (isSigned);
};

short	AForm::getGradeToSign() const
{
	return (gradeToSign);
};

short	AForm::getGradeToExecute() const
{
	return (gradeToExecute);
};

std::string	const	AForm::getName() const
{
	return (name);
};

const char	*AForm::NotSignedException::what() const throw()
{
    return ((char *)("\033[0;31mThe form isn't signed\033[0m"));
}

const char	*AForm::GradeTooHighException::what() const throw()
{
    return ((char *)("\033[0;31mGrade Too High\033[0m"));
}

const char	*AForm::GradeTooLowException::what() const throw()
{
    return ((char *)("\033[0;31mGrade Too Low\033[0m"));
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out << "Name: " << f.getName() << "\nGrade required to sign it: " << f.getGradeToSign() << "\nGrade required to execute it: " << f.getGradeToExecute() << "\nThe form is ";
	if (!f.getIsSigned())
		out << "not ";
	out << "signed\n";
	return (out);
};

void	AForm::beSigned(Bureaucrat &b)
{
	try
	{
		if (b.getGrade() > gradeToSign)
		{
			throw (GradeTooLowException());	
		}
		isSigned = 1;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
};

bool	AForm::execute(Bureaucrat const &executor) const
{
	try 
	{
		if (!(this->getIsSigned()))
			throw (NotSignedException());
		if ((this->getGradeToExecute() < executor.getGrade()))
			throw (GradeTooLowException());
		return (this->executeTheForm());
	}
	catch (NotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
};