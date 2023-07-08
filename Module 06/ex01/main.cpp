# include "Serializer.hpp"


struct Data
{
	int	a;
	int	b;
	char c;
};

int	main()
{
	Data		*data = new Data(), *ptr;
	Serializer	s;
	uintptr_t	i = s.serialize(data);

	data->a = -3;
	data->b = 1337;
	data->c = 'a';

	ptr = s.deserialize(i);


	std::cout << ptr->a << std::endl;
	std::cout << ptr->b << std::endl;
	std::cout << data->c << std::endl;

	delete (data);
}