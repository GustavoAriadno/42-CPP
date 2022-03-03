/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "Fixed.hpp"

int FixedPointNumbersOurs() {
    {
        std::cout << "Comparasion operators tests" << std::endl;
        Fixed a;
        Fixed b;

        std::cout << (a > b) << std::endl;
        std::cout << (a < b) << std::endl;
        std::cout << (a >= b) << std::endl;
        std::cout << (a <= b) << std::endl;
        std::cout << (a == b) << std::endl;
        std::cout << (a != b) << std::endl;
    }
    {
        std::cout << "Arithmetics operators tests" << std::endl;
        
        Fixed a(10);
        Fixed b(5);
        Fixed c(Fixed( 2.5f ) + Fixed( 2.5f ));
        Fixed d(Fixed( 2.5f ) * Fixed( 5 ));
        Fixed e(Fixed( 10.4f ) / Fixed( 2 ));

        std::cout << (a + b) << std::endl;
        std::cout << (a * b) << std::endl;
        std::cout << (c) << std::endl;
        std::cout << (d) << std::endl;
        std::cout << (e) << std::endl;
    }
    return (0);
}

int FixedPointNumbers() {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

int main(void) {
    FixedPointNumbers();
    //FixedPointNumbersOurs();
    return (0);
}
