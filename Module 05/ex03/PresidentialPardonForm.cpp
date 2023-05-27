#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
:AForm(0, 25, 5, "PresidentialPardonForm")
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

bool	PresidentialPardonForm::executeTheForm() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
	return (1);
};

std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}