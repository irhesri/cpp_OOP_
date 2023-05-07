#include <fstream>
#include <iostream>
#include <cstring> 

bool	print_error(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int	main(int ac, char **av)
{

	if (ac != 4)
		return (print_error("WRONG NUMBER OF ARGUMENTS"));

	size_t			i = 0, len = 0;
	std::string		data = "", str = "";
	std::fstream	in, out;
	std::string		name(av[1]), s1(av[2]), s2(av[3]);
	
	if (s1 == "")
		return (print_error("first string can't be empty"));

	// opening of the file
	in.open(av[1], std::fstream::in);
	if (in.fail() || in.bad())
		return (print_error("can't open \"" + name + "\""));

	// creating or opening of the replace file
	name += ".replace";
	char	*replace = &name[0];
	out.open(replace, std::fstream::out | std::fstream::trunc);
	if (out.fail() || out.bad())
		return (print_error("can't create/open replace file"));

	// store the file data in a string
	len = s1.length();
	while (!getline(in, str, '\0').eof())
	{
		if (in.fail())
			return (print_error("getline error\n"));
		data += str;
		data.insert(data.end(), '\0');
	}
	data += str;

	if (s1 == s2)
	{
		out << data;
		return (0);
	}
	str = "";
	// start replacing the data
	while (i < data.length())
	{
		if (!data.compare(i, len, s1))
		{
			str += s2;
			i += len;
			continue ;
		}
		str += data[i++];
	}
	out << str;
	return (0);
}