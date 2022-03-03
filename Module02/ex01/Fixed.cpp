/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    Fixed::rawBits = 0;
}

Fixed::Fixed(const int fixedPointValue) {
    std::cout << "Int constructor called" << std::endl;
    Fixed::rawBits = fixedPointValue * (1 << Fixed::fractionalBits);
}

Fixed::Fixed(const float fixedPointValue) {
    std::cout << "Float constructor called" << std::endl;
    Fixed::rawBits = roundf(fixedPointValue * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->rawBits = rhs.rawBits;
    return *this;
}

float   Fixed::toFloat(void) const {
    return ((float)Fixed::rawBits / (1 << Fixed::fractionalBits));
}

int     Fixed::toInt(void) const {
    return (Fixed::rawBits / (1 << Fixed::fractionalBits));
}

std::ostream &operator<<(std::ostream &stream, Fixed const &rhs) {
    stream << rhs.toFloat();
    return stream;
}
