#include "iter.hpp"

void	sum(int &n) { n++; }

int main( void ) {
	{
		int		n[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

		iter(n, 10, printT);
		std::cout << std::endl;

		iter(n, 10, pow);
		std::cout << std::endl;

		iter(n, 10, sum);
		std::cout << std::endl;

		iter(n, 10, printT);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		char	names[5] = "baka";

		iter(names, 5, upp);
		iter(names, 5, printT);
		std::cout << std::endl;
	}
	return 0;
}
