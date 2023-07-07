#ifndef ITER
# define ITER

# include <iostream>

template <typename T>
void	print(T a)
{
	std::cout << a << " ";
}

template <typename T>
void	iter(T *arr, size_t size, void (fct)(T))
{
	for (size_t i = 0; i < size; i++)
		fct(arr[i]);
};

#endif