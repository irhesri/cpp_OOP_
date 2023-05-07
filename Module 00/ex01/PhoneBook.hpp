#ifndef PHONEBOOK_H
# define	PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		short	n;
	public:
		PhoneBook();
		~PhoneBook();
		void	set_contact(Contact contact, short index);
		short	get_nbr_of_contact();
		Contact	get_contact(short index);
};

#endif