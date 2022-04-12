#include <iostream>
#include <vector>
#include <algorithm>
#include "easyFind.hpp"

int main ()
{
	int myints[] = { 10, 20, 30, 40 };
	std::vector<int> vec (myints, myints+4);
	std::vector<int>::iterator result;

	std::cout << "Original vector :";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) std::cout << " " << *it;
	std::cout << "\n";

	result = easyFind(vec, 30);

	if (result != vec.end())
		std::cout << "Element found in vec[" << result - vec.begin() << "] = " << *result << '\n';
	else
		std::cout << "Element not found in vec\n";

	return 0;
}