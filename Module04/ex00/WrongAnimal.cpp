/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	WrongAnimal::type = "Indistinctly animal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called" << std::endl; }

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
    WrongAnimal::type = rhs.getType();
    return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) { *this = src; }

void WrongAnimal::makeSound(void) const { std::cout << "WrongAnimal sound: [ UNRECOGNIZABLE NOISES FROM SOME ANIMAL ]" << std::endl; }

std::string WrongAnimal::getType(void) const { return (WrongAnimal::type); }
