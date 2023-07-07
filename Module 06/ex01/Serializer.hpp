#ifndef SERI
# define SERI

# include <cstdint>
# include <iostream>

class Data;

class Serializer
{	
	public:
		Serializer();
		Serializer(Serializer const &s);
		~Serializer();
		Serializer	&operator=(Serializer const &s);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif