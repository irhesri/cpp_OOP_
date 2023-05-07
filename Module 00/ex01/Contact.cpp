#include "PhoneBook.hpp"

Contact::Contact()
{
	fields_name[0] = "first name";	
	fields_name[1] = "last name";	
	fields_name[2] =  "nickname";	
	fields_name[3] = "phone number";	
	fields_name[4] = "darkest secret";	
}

Contact::~Contact()
{
}

void	Contact::set_field(std::string input, short index)
{
	fields[index] = input;
}

std::string Contact::get_field(short index)
{
	return(fields[index]);
}

std::string Contact::get_field_name(short index)
{
	return(fields_name[index]);
}
