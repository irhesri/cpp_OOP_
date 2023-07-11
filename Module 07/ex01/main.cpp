#include "iter.hpp"

int main() {
	int			n[] = {1, 2, 3, 4, 5};
	char		c[] = {'a', 'b', 'c', 'd'};
	std::string str[] = {"test1", "test2", "test3"};
	
	iter(n, 5, my_print);
	std::cout << std::endl;
	iter(c, 4, my_print);
	std::cout << std::endl;
	iter(str, 3, my_print);
	std::cout << std::endl;
	return 0;
}