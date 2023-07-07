# include "Serializer.hpp"
# include "Data.hpp"

int	main()
{
	Data		*data = new Data();
	Serializer	s;
	uintptr_t	i = s.serialize(data);

	std::cout << data << std::endl;
	std::cout << s.deserialize(i) << std::endl;
	std::cout << i << std::endl;

	delete (data);
}