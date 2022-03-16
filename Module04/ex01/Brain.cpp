/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain constructor called" << std::endl; }

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain &Brain::operator=(Brain const &rhs) {
	for (int i = 0; i < 100; i++) { Brain::ideas[i] = rhs.ideas[i]; }
	return (*this);
}

Brain::Brain(Brain const &src) { *this = src; }
