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
    ~Fixed(void);
    Fixed &operator=(Fixed const &rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
