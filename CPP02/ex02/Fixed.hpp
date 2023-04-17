/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:30:35 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/27 14:31:36 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    Fixed & operator=(Fixed const &info);
    bool operator>(Fixed const &var);
    bool operator<(Fixed const &var);
    bool operator>=(Fixed const &var);
    bool operator<=(Fixed const &var);
    bool operator==(Fixed const &var);
    bool operator!=(Fixed const &var);

    float operator+(Fixed const &var);
    float operator-(Fixed const &var);
    float operator*(Fixed const &var);
    float operator/(Fixed const &var);

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

static          Fixed & min(Fixed &nb1, Fixed &nb2);
static const    Fixed & min(const Fixed &nb1, const Fixed &nb2);
static          Fixed & max(Fixed &nb1, Fixed &nb2);
static const    Fixed & max(const Fixed &nb1, const Fixed &nb2);

private:
    int                 _val;
    static const int    _bits = 8;
};

std::ostream & operator<<(std::ostream &out, Fixed const &val);

#endif //CPP_FIXED_HPP
