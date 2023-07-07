#include "Array.hpp"

int main() {
	Array<int> a;
	Array<int> b(7);
	Array<int> c(b);

	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl << std::endl;
	
	std::cout << a[0] << std::endl;
	std::cout << b[9] << std::endl << std::endl;

	a = b;
	std::cout << a[1] << std::endl;
	std::cout << b[5] << std::endl << std::endl;

	return 0;
}