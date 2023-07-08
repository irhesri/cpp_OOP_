# include "functions.hpp"

class X: public Base
{};

int	main()
{
	{
		Base *a = new A();
		Base *b = new B();
		Base *c = new C();
		identify(*a);
		identify(*b);
		identify(*c);
		delete (a);
		delete (b);
		delete (c);
	}
	std::cout << std::endl;
	{
		Base *g = generate();
		Base *x = new X();

		identify(*g);
		identify(g);
		identify(x);
		identify(NULL);

		delete (g);
		delete (x);
	}
}