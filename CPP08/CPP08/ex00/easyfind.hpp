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
    if (sizeof(T) != sizeof(int))
    {
        std::cerr << "Le tableau fourni n'est pas un tableau d'integer" << std::endl;
        return (INT_MIN);
    }
    if (std::find(tab.begin(), tab.end(), r) != std::end(tab))
        return (r);
    std::cerr << "Aucune occurence détectée" << std::endl;
    return (INT_MIN);
}

#endif //CPP_EASYFIND_HPP
