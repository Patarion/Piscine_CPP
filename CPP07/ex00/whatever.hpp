/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:25:45 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 16:19:17 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP

#include <iostream>

template < typename T >

T max(T const &x, T const &y) {
    return ((x >= y) ? x : y);
}

template < typename T >
T min(T const &x, T const &y) {
    return ((x <= y) ? x : y);
}

template <typename T >
void swap(T &x, T &y) {
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

#endif //CPP_WHATEVER_HPP
