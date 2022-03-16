/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#include <string>

class Dog : public Animal {
	public:
		Dog(void);
		~Dog(void);
		Dog &operator=(Dog const &rhs);
		Dog(Dog const &src);
		void makeSound(void) const;
};

#endif
