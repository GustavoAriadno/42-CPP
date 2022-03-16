/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "Animal.hpp"

#include <string>

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat &operator=(Cat const &rhs);
		Cat(Cat const &src);
		void makeSound(void) const;
};

#endif
