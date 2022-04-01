#include "Array.hpp"
#include <iostream>

int main( void ) {
	{
		Array<int> arr;
		std::cout << "Size of 0: " << arr.size() << std::endl;
	}
	std::cout << std::endl;
	{
		Array<int> arr1(10);
		Array<int> arr2(2);
		std::cout << "Size of 1: " << arr1.size() << std::endl << std::endl;
		std::cout << "Size of 2: " << arr2.size() << std::endl << std::endl;

		for (int i = 0; i < 10; i++) arr1[i] = i;
		for (int i = 0; i < 2; i++) arr2[i] = i * 2;

		std::cout << "Array 1: ";
		for (int i = 0; i < 10; i++) std::cout << arr1[i] << " ";
		std::cout << std::endl;

		std::cout << "Array 2: ";
		for (int i = 0; i < 2; i++) std::cout << arr2[i] << " ";
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "Construc 3 from 2" << std::endl;
		Array<int> arr3(arr2);
		std::cout << "Size of 3: " << arr3.size() << std::endl;

		for (int i = 0; i < 2; i++) arr2[i] = (i + 5) * 2;

		std::cout << "Array 2: ";
		for (int i = 0; i < 2; i++) std::cout << arr2[i] << " ";
		std::cout << std::endl;
		std::cout << "Array 3: ";
		for (int i = 0; i < 2; i++) std::cout << arr3[i] << " ";

		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Array<int> arr(10);
		try { arr[42] = 42; }
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	return 0;
}
