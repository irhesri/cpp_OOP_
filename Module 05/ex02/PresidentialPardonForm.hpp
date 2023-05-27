#ifndef PRESIDENTIAL
#define PRESIDENTIAL

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		bool	executeTheForm() const;
		std::string	getTarget() const;
};

#endif