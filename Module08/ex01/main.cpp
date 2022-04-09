#include "Span.hpp"
#include <iterator>

void	sum(int &n) { n++; }

int main( void ) {
	{
		int		n[10] = { 5, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		for (int i = 0; i < 10; i++) { n[i] *= n[i]; }

		Span	span(20);
		for (int i = 0; i < 10; i++) { span.addNumber(n[i]); }

		std::cout << std::endl;

		std::cout << span;

		std::vector<int>	v;
		for (int i = 0; i < 10; i++) { v.push_back(n[i]); }

		span.addNumber(v.begin(), v.end());

		std::cout << span;
		// span.longestSpan();
		// span.shortestSpan();
	}
	std::cout << std::endl;
	return 0;
}
