/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int brains(void) {
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl;
	
	{
		int len = 4;
		AAnimal **animals = new AAnimal*[len];
		for (int i = 0; i < len; i++) {
			if (i >= len / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (int i = 0; i < len; i++) {
			delete animals[i];
		}
		delete [] animals;
	}
	{
		Cat* Cat1 = new Cat();
		Brain *b1 = Cat1->getBrain();
		std::cout << std::endl;

		b1->setOneIdea(0, "Derruba as parada");
		std::cout << "Ideia 1 = " << b1->getOneIdea(0) << "\n";


		Cat* Cat2 = new Cat(*Cat1);
		Brain *b2 = Cat2->getBrain();

		std::cout << "Ideia 2 = " << b2->getOneIdea(0) << "\n";
		b2->setOneIdea(0, "Ser um bom gatinho");
		std::cout << std::endl;


		std::cout
			<< "Ideia final 1 = " << b1->getOneIdea(0) << std::endl
			<< "Ideia final 2 = " << b2->getOneIdea(0) << std::endl;

		delete Cat1;
		delete Cat2;
	}
	// { AAnimal animal; }
	return 0;
}

int main(void) {
	brains();
	return (0);
}
