/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:28:59 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/27 14:29:00 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(Fixed const &cpy);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    Fixed & operator=(Fixed const &info);

private:
    int                 val;
    static const int    _bits = 8;
};

#endif //CPP_FIXED_HPP
