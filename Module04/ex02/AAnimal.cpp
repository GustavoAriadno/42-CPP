/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	AAnimal::type = "Indistinctly Aanimal";
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal() { std::cout << "AAnimal destructor called" << std::endl; }

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
	AAnimal::type = rhs.getType();
	return (*this);
}

AAnimal::AAnimal(AAnimal const &src) { *this = src; }

std::string AAnimal::getType(void) const { return (AAnimal::type); }
