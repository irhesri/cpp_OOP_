#ifndef ROBOTOMY
#define ROBOTOMY

#include "AForm.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm: public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		bool	executeTheForm() const;
		std::string	getTarget() const;
};


#endif