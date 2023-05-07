#ifndef	HARL_H
# define HARL_H

#include <iostream>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
	void	extra();
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

bool	print(std::string str);

#endif