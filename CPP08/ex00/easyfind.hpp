/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:01:17 by jgagnon           #+#    #+#             */
/*   Updated: 2023/06/20 13:01:18 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Jasmin Gagnon on 3/6/23.
//

#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>

template <typename T>
int easyfind(std::list<T> tab, int r)
{
    std::list<int>::iterator it;
    std::list<int>::iterator ite;

    if (sizeof(T) != sizeof(int))
        return (-1);
    ite = tab.end();
    for (it = tab.begin() ; it != ite ; ++it)
    {
        if (*it == r)
            return (*it);
    }
    std::cout << "Aucune occurence détectée" << std::endl;
    return (-1);
}

#endif //CPP_EASYFIND_HPP
