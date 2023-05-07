#ifndef	CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string	fields[5];
		std::string	fields_name[5];
	public:
		Contact();
		~Contact();
		void		set_field(std::string input, short index);
		std::string	get_field(short index);
		std::string	get_field_name(short index);
};

#endif