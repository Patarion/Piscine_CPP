/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:44:05 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/23 14:44:06 by jgagnon          ###   ########.fr       */
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

private:
    int                 _val;
    static const int    _bits = 8;
};

std::ostream & operator<<(std::ostream &out, Fixed const &val);

#endif //CPP_FIXED_HPP
