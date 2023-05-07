/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhesri <irhesri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:06:43 by irhesri           #+#    #+#             */
/*   Updated: 2023/05/02 12:00:49 by irhesri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	number_check(std::string nbr)
{
	for (size_t i = 0; i < nbr.length(); i++)
	{
		if (!isdigit(nbr[i]))
		{
			std::cerr << "\033[0;31m This field can only include digits.\033[0m" << std::endl;
			return (1);
		}
	}
	return (0);
}

bool	add_contact(PhoneBook *p)
{
	short			i;
	Contact			contact;
	std::string		tmp;
	static short	pos;

	for(i = 0; i < 5; i++)
	{
		std::cout << "\033[0;36m Enter the " << (*p).get_contact(i).get_field_name(i) << " : \033[0m";
		std::getline(std::cin, tmp);
		if (std::cin.fail())
			return (1) ;
		contact.set_field(tmp, i);
		(i == 3) && (i -= number_check(tmp));
		if (!tmp.length())
		{
			std::cerr << "\033[0;31m Fields can't be empty. \033[0m"<< std::endl;
			i--;
		}
	}
	(*p).set_contact(contact, pos);
	pos = (pos + 1) % 8;
	return (0);
}

void	print_contact(PhoneBook *p, short index, short x)
{
	std::string	tmp;

	(x  == 3)  && std::cout << "|" << std::setw(10) << (char)(index + 49);
	for (short i = 0; i < x; i++)
	{
		tmp = (*p).get_contact(index).get_field(i);
		if (x != 3)
			std::cout << std::endl  << "\033[0;36m" << (*p).get_contact(index).get_field_name(i)  << ": \033[0m";
		else
		{
			std::cout << "|";
			std::cout.width(10);
			if(tmp.length() > 10)
			{
				tmp[9] = '.';
				tmp = tmp.substr(0, 10);
			}
		}
		std::cout << tmp;
	}
	(x == 3) && std::cout << "|" ;
	std::cout << std::endl;	
}

bool	search(PhoneBook *p)
{
	short		n, i;
	std::string	tmp;
	
	n = (*p).get_nbr_of_contact();
	if (n)
		std::cout << "\033[0;36m|     index|first name| last name|  nickname|\033[0m" << std::endl;
	for(i = 0; i < n; i++)
		print_contact(p, i, 3);
	while (i)
	{
		std::cout << "\033[1;36m Enter index of contact : \033[0m";
		std::cin.clear();
		std::getline(std::cin, tmp);
		if (std::cin.fail())
			return (1) ;
		i = number_check(tmp);
		if (!i && ((tmp.length() != 1) || (tmp[0] > (n + 48)) || (tmp[0] < '1')))
		{
			std::cerr << "\033[0;31m Index can only be included between 1 and " << (char)(n + 48) << " \033[0m"<< std::endl;
			i = 1;
		}
		else if (!i)
			print_contact(p, tmp[0] - 49, 5);
	}
	return (0);
}

bool	exit_(PhoneBook *p)
{
	(void)p;
	return (1);
}

bool	error(PhoneBook *p)
{
	(void)p;
	std::cerr << "\033[0;31m Only ADD, SEARCH and EXIT are allowed. \033[0m"<< std::endl;
	return (0);
}

int	main()
{
	bool		exit;
	short		i;
	PhoneBook	p;
	std::string	command;

	bool		(*fct[4])(PhoneBook *) = {add_contact, search, exit_, error};
	std::string	commands[3] = {"ADD", "SEARCH", "EXIT"};

	exit = 0;
	while (!exit)
	{
		std::cout << "\033[1;34m Enter one of the three commands : ADD - SEARCH - EXIT : \033[0m";
		std::getline(std::cin, command);
		if (std::cin.fail())
			break ;
		for (i = 0; i < 3 && commands[i] != command; i++) ;
		exit = fct[i](&p);
	}
	return (1);
}