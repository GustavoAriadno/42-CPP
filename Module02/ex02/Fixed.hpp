/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef FIXED_H
#define FIXED_H

class Fixed {
 private:
    int rawBits;
    static const int fractionalBits;
 public:
    Fixed(void);
    Fixed(Fixed const &src);
    Fixed(const int fixedPointValue);
    Fixed(const float floatingPointValue);
    ~Fixed(void);
    Fixed &operator=(Fixed const &rhs);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed &min(Fixed &x, Fixed &y);
    static const Fixed &min(Fixed const &x, Fixed const &y);
    static Fixed &max(Fixed &x, Fixed &y);
    static const Fixed &max(Fixed const &x, Fixed const &y);
};
    
std::ostream &operator<<(std::ostream &stream, Fixed const &rhs);

bool operator>(Fixed const &lhs, Fixed const &rhs);
bool operator<(Fixed const &lhs, Fixed const &rhs);
bool operator>=(Fixed const &lhs, Fixed const &rhs);
bool operator<=(Fixed const &lhs, Fixed const &rhs);
bool operator==(Fixed const &lhs, Fixed const &rhs);
bool operator!=(Fixed const &lhs, Fixed const &rhs);

Fixed operator+(Fixed const &lhs, Fixed const &rhs);
Fixed operator-(Fixed const &lhs, Fixed const &rhs);
Fixed operator*(Fixed const &lhs, Fixed const &rhs);
Fixed operator/(Fixed const &lhs, Fixed const &rhs);

#endif
