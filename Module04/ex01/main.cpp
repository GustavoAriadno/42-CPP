/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int brains(void) {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}
	
	std::cout << std::endl;
	
	{
		int len = 4;
		Animal **animals = new Animal*[len];
		
		for (int i = 0; i < len; i++) {
			if (i >= len / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		
		std::cout << std::endl;

		for (int i = 0; i < len; i++) {
			delete animals[i];
		}
		
		delete [] animals;
	}
	return 0;
}

int main(void) {
	brains();
	return (0);
}
