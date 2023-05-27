#ifndef SHRUBBERY
#define SHRUBBERY

#include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		bool	executeTheForm() const;
		std::string	getTarget() const;
};

#endif