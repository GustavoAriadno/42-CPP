/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() {
    Fixed::rawBits = 0;
}

Fixed::Fixed(const int fixedPointValue) {
    Fixed::rawBits = fixedPointValue * (1 << Fixed::fractionalBits);
}

Fixed::Fixed(const float fixedPointValue) {
    Fixed::rawBits = roundf(fixedPointValue * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(Fixed const &src) {
    *this = src;
}

Fixed::~Fixed() {
}

Fixed   &Fixed::operator=(Fixed const &rhs) {
    if (this != &rhs)
        this->rawBits = rhs.getRawBits();
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
    
bool operator>(Fixed const &lhs, Fixed const &rhs) {
    return (lhs.getRawBits() > rhs.getRawBits());
}

bool operator<(Fixed const &lhs, Fixed const &rhs) {
    return (lhs.getRawBits() < rhs.getRawBits());
}

bool operator>=(Fixed const &lhs, Fixed const &rhs) {
    return (lhs.getRawBits() >= rhs.getRawBits());
}

bool operator<=(Fixed const &lhs, Fixed const &rhs) {
    return (lhs.getRawBits() <= rhs.getRawBits());
}

bool operator==(Fixed const &lhs, Fixed const &rhs) {
    return (lhs.getRawBits() == rhs.getRawBits());
}

bool operator!=(Fixed const &lhs, Fixed const &rhs) {
    return (lhs.getRawBits() != rhs.getRawBits());
}

int Fixed::getRawBits(void) const {
    return (Fixed::rawBits);
}

Fixed operator+(Fixed const &lhs, Fixed const &rhs) {
    return Fixed(lhs.toFloat() + rhs.toFloat());
}

Fixed operator-(Fixed const &lhs, Fixed const &rhs) {
    return Fixed(lhs.toFloat() - rhs.toFloat());
}

Fixed operator*(Fixed const &lhs, Fixed const &rhs) {
    return Fixed(lhs.toFloat() * rhs.toFloat());
}

Fixed operator/(Fixed const &lhs, Fixed const &rhs) {
    return Fixed(lhs.toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++() {
    Fixed fixed; 
    fixed.rawBits = ++rawBits;
    return (fixed);
}

Fixed Fixed::operator++(int) {
    Fixed fixed; 
    fixed.rawBits = rawBits++;
    return (fixed);
}

Fixed Fixed::operator--() {
    Fixed fixed; 
    fixed.rawBits = --rawBits;
    return (fixed);
}

Fixed Fixed::operator--(int) {
    Fixed fixed; 
    fixed.rawBits = rawBits--;
    return (fixed);
}

Fixed &Fixed::min(Fixed &x, Fixed &y) {
    if (x < y)
        return (x);
    return (y);
}

Fixed const &Fixed::min(Fixed const &x, Fixed const &y) {
    if (x < y)
        return (x);
    return (y);
}

Fixed &Fixed::max(Fixed &x, Fixed &y) {
    if (x > y)
        return (x);
    return (y);
}

Fixed const &Fixed::max(Fixed const &x, Fixed const &y){
    if (x > y)
        return (x);
    return (y);
}
