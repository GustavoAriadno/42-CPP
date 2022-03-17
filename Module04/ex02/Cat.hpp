/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <string>

class Cat : public AAnimal {
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat &operator=(Cat const &rhs);
		Cat(Cat const &src);
		void makeSound(void) const;
		Brain *getBrain() const;
	private:
		Brain *brain;
};

#endif
