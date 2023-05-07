#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	n = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::set_contact(Contact contact, short index)
{
	this->contact[index] = contact;
	n += (n < 8);
}

Contact	PhoneBook::get_contact(short index)
{
	return (contact[index]);
}

short	PhoneBook::get_nbr_of_contact()
{
	return (n);
}
