/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>

#include "WrongAnimal.hpp"

#include <string>

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat &operator=(WrongCat const &rhs);
		WrongCat(WrongCat const &src);
		void makeSound(void) const;
};

#endif
