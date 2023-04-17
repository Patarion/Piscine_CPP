/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:19:34 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 16:19:35 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

#include <iostream>

template<typename T>
void iter(T *addr, int size, void (*f)(T&)){
    int i;

    i = 0;
    while(i < size){
        (*f)(addr[i]);
        i++;
    }
}

#endif //CPP_ITER_HPP
