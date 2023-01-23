//
// Created by Jasmin Gagnon on 1/20/23.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float nbr);
    Fixed(Fixed const &cpy);
    ~Fixed();
    int     _getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    Fixed & operator=(Fixed const &info);

private:
    int                 val;
    static const int    _bits = 8;
};

std::ostream & operator<<(std::ostream &out, Fixed const &val);

#endif //CPP_FIXED_HPP
