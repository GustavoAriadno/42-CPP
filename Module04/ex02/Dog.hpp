/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <string>

class Dog : public AAnimal {
	public:
		Dog(void);
		virtual ~Dog(void);
		Dog &operator=(Dog const &rhs);
		Dog(Dog const &src);
		void makeSound(void) const;
		Brain *getBrain() const;
	private:
		Brain *brain;
};

#endif
