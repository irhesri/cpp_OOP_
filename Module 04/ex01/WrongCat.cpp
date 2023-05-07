# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default constructor of WrongCat been called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &cat)
{
	(*this) = cat;
	std::cout << "Copy constructor of WrongCat been called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat been called." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &cat)
{
	this->type = cat.getType();
	// std::cout << "WrongCat copy assignement been called." << std::endl;
	return (*this);
}

