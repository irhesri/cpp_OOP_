#ifndef	FORM
# define FORM

# include "Bureaucrat.hpp"

class AForm
{
	private:
		bool				isSigned;
		short const			gradeToSign;
		short const			gradeToExecute;
		std::string	const	name;
	public:
		AForm();
		AForm(AForm const &form);
		AForm(bool isSigned, short gradeToSign, short gradeToExecute, std::string name);
		~AForm();
		AForm	&operator=(AForm const &form);
		bool				getIsSigned() const;
		short 				getGradeToSign() const;
		short 				getGradeToExecute() const;
		std::string	const	getName() const;
		class	NotSignedException: public std::exception
		{
			public:
				const char * what () const throw();
		};
		class	GradeTooHighException: public std::exception
		{
			public:
				const char * what () const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				const char * what () const throw();
		};
		void	beSigned(Bureaucrat &b);
		bool	execute(Bureaucrat const &executor) const;
		virtual bool	executeTheForm() const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif