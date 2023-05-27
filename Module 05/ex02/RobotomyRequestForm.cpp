#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
:AForm(0, 72, 45, "RobotomyRequestForm")
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

bool	RobotomyRequestForm::executeTheForm() const
{
	srand(time(0));
	if (rand() % 2)
	{
		std::cout << this->getTarget() << " has been robotomized successfully\n";
		return (1);
	}
	std::cout << "The robotomy failed\n";
	return (0);
};

std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}