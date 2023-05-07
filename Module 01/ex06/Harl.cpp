#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
}

void	Harl::debug()
{
	print("[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!");
}

void	Harl::info()
{
	print("[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}

void	Harl::warning()
{
	print("[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.");
}

void	Harl::error()
{
	print("[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.");
}

void	Harl::extra()
{
	print("[ WOOW ]\nNo complaining this time?\nAre you okay?");
}

void	Harl::complain(std::string level)
{
	static const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	short	i = 0;

	while ((i < 4) && (level != levels[i]))
		i++;
	switch (i)
	{
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
			break;
		default:
			Harl::extra();
			break;
	}
}