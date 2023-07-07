# include "functions.hpp"

Base	*generate(void)
{
	srand(time(0));
	int	i = rand() % 3;

	// std::cout << i << std::endl;
	switch (i)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		default:
			return (new C());
	}
};

void identify(Base &p)
{
	try 
	{
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} 
	catch(const std::exception& e)
	{
		try
		{
			dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			dynamic_cast<C &>(p);
			std::cout << "C" << std::endl;
		}
	}
};

void identify(Base *p)
{
	if (!p)
		return ;
	try 
	{
		dynamic_cast<A &>(*p);
		std::cout << "A" << std::endl;
	} 
	catch(const std::exception& e)
	{
		try
		{
			dynamic_cast<B &>(*p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			dynamic_cast<C &>(*p);
			std::cout << "C" << std::endl;
		}
	}
};