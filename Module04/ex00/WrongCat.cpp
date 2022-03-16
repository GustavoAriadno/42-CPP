/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	WrongCat::type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called" << std::endl; }

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	(void)rhs;
	return (*this);
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src) { *this = src; }

void WrongCat::makeSound(void) const { std::cout << "WrongCat sound: Meow Meow... Meow!" << std::endl; }
