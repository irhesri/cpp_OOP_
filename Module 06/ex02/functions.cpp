# include "functions.hpp"

Base	*generate(void)
{
	srand(time(0));
	int	i = rand() % 3;

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
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} 
	catch(const std::exception& e)
	{
		try
		{
			(void) dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try 
			{
				(void) dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "I don't know you! Who are you? Why are you here?  !!!" << std::endl;
			}
		}
	}
};

void identify(Base *p)
{
	if (!p)
	{
		std::cout << "Null!!! Your place isn't here!! return to your home." << std::endl;
		return ;
	}
	identify (*p);
};
