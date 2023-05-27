# include "Bureaucrat.hpp"

class Form
{
	private:
		bool				isSigned;
		short const			gradeToSign;
		short const			gradeToExecute;
		std::string	const	name;
	public:
		Form();
		Form(Form const &form);
		Form(bool isSigned, short gradeToSign, short gradeToExecute, std::string name);
		~Form();
		Form	&operator=(Form const &form);
		bool				getIsSigned() const;
		short 				getGradeToSign() const;
		short 				getGradeToExecute() const;
		std::string	const	getName() const;
		class	GradeTooHighException{
			public:
				char	*what();
		};
		class	GradeTooLowException{
			public:
				char	*what();
		};
		void	beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, const Form &form);