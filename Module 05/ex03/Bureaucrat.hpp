#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <iostream>

class AForm;

class Bureaucrat
{
	private:
		short				grade;
		std::string const	name;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &b);
		Bureaucrat(std::string name, short grade);
		~Bureaucrat();
		Bureaucrat	&operator=(Bureaucrat const &b);
		short	getGrade() const;
		std::string const	getName() const;
		void	incrementGrade();
		void	decrementGrade();
		class GradeTooHighException: public std::exception
		{
		    public:
				const char * what () const throw();
		};
		class GradeTooLowException: public std::exception
		{
		    public:
				const char * what () const throw();
		};
		void	signForm(AForm &b);
		void	executeForm(AForm const & AForm);
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &b);

#endif