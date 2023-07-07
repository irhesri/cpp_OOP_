#include "Form.hpp"

Form::Form():isSigned(0), gradeToSign(1), gradeToExecute(1), name("UNKOWN")
{}

Form::Form(bool isSigned, short gradeToSign, short gradeToExecute, std::string name)
:isSigned(isSigned), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), name(name)
{}

Form::Form(Form const &f)
:isSigned(f.getIsSigned()), gradeToSign(f.getGradeToSign()), gradeToExecute(f.getGradeToExecute()), name(f.getName())
{};

Form::~Form()
{
}

Form	&Form::operator=(Form const &form)
{
	(void)form;
	std::cerr << "\033[0;31mSeriously!! trying to change const attribute!!?\033[0m" << std::endl;
	return (*this);
};

bool	Form::getIsSigned() const
{
	return (isSigned);
};

short	Form::getGradeToSign() const
{
	return (gradeToSign);
};

short	Form::getGradeToExecute() const
{
	return (gradeToExecute);
};

std::string	const	Form::getName() const
{
	return (name);
};

const char	*Form::GradeTooHighException::what() const throw()
{
    return ((const char *)("\033[0;31mGrade Too High\033[0m"));
}

const char	*Form::GradeTooLowException::what() const throw()
{
    return ((const char *)("\033[0;31mGrade Too Low\033[0m"));
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out << "Name: " << f.getName() << "\nGrade required to sign it: " << f.getGradeToSign() << "\nGrade required to execute it: " << f.getGradeToExecute() << "\nThe form is ";
	if (!f.getIsSigned())
		out << "not ";
	out << "signed\n";
	return (out);
};

void	Form::beSigned(Bureaucrat &b)
{
	try
	{
		if (b.getGrade() > gradeToSign)
			throw (GradeTooLowException());	
		isSigned = 1;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
};
